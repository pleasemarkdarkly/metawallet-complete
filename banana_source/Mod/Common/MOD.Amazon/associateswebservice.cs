using System;
using System.Collections.Generic;
using System.Text;
using System.Threading;

namespace MOD.Amazon
{
    public class AssociatesWebService
    {
        private readonly string SUBSCRIPTION_ID = "1M6RS8CA6W3A0F2R7RR2";

        private static readonly string DVD_ROOT_NODE = "130";

        private static readonly string MUSIC_ROOT_NODE = "301668";

        private static readonly string MP3_ALBUMS_ROOT_NODE = "324381011";

        private static readonly string MP3_SONGS_ROOT_NODE = "324382011";

        private AWSECommerceService _ecs = new AWSECommerceService();

        public AssociatesWebService()
        {
        }

        public static string MusicRootBrowseNodeID
        {
            get { return MUSIC_ROOT_NODE; }
        }

        public static string DVDRootBrowseNodeID
        {
            get { return DVD_ROOT_NODE; }
        }

        public static string MP3AlbumsRootBrowseNodeID
        {
            get { return MP3_ALBUMS_ROOT_NODE; }
        }

        public static string MP3SongsRootBrowseNodeID
        {
            get { return MP3_SONGS_ROOT_NODE; }
        }

        public Item LookupItemByASIN(string asin)
        {
            ItemLookup itemLookup = new ItemLookup();
            ItemLookupRequest request = new ItemLookupRequest();

            itemLookup.SubscriptionId = SUBSCRIPTION_ID;

            request.ResponseGroup = new string[] { "Large" };

            request.ItemId = new string[] { asin };
            request.IdType = ItemLookupRequestIdType.ASIN;

            request.Condition = Condition.New;
            request.IdTypeSpecified = true;
            request.ConditionSpecified = true;

            // Setup request
            itemLookup.Request = new ItemLookupRequest[] { request };

            //Sleep 750 milliseconds to meet Amazon Service agreement.
            Thread.Sleep(750);

            // Get the response
            try
            {
                ItemLookupResponse response = _ecs.ItemLookup(itemLookup);

                ValidateResponse(response);

                //TODO: What if there are multiple? Should there be multiple?
                foreach (Items items in response.Items)
                {
                    //Should only be one!
                    foreach (Item item in items.Item)
                    {
                        return item;
                    }
                }
            }
            catch (Exception ex)
            {
                throw new RequestException("Unexpected error in request.", ex);
            }

            return null;
        }

        public Item[] LookupItems(string[] itemIDs, ItemLookupRequestIdType idType, string searchIndex)
        {
            List<Item> returnItems = new List<Item>();

            ItemLookup itemLookup = new ItemLookup();
            ItemLookupRequest request = new ItemLookupRequest();

            itemLookup.SubscriptionId = SUBSCRIPTION_ID;

            request.ResponseGroup = new string[] { "Large" };

            request.ItemId = itemIDs;
            request.IdType = idType;
            if (searchIndex.Length > 0)
            {
                request.SearchIndex = searchIndex;
            }

            request.Condition = Condition.New;
            request.IdTypeSpecified = true;
            request.ConditionSpecified = true;

            // Setup request
            itemLookup.Request = new ItemLookupRequest[] { request };

            //Sleep 750 milliseconds to meet Amazon Service agreement.
            Thread.Sleep(750);

            // Get the response
            try
            {
                ItemLookupResponse response = _ecs.ItemLookup(itemLookup);

                ValidateResponse(response);

                //TODO: What if there are multiple? Should there be multiple?
                foreach (Items items in response.Items)
                {
                    foreach (Item item in items.Item)
                    {
                        returnItems.Add(item);
                    }
                }
            }
            catch (Exception ex)
            {
                throw new RequestException("Unexpected error in request.", ex);
            }

            return returnItems.ToArray();
        }

        public Item[] LookupItems(string[] itemIDs, ItemLookupRequestIdType idType)
        {
            return LookupItems(itemIDs, idType, String.Empty);
        }

        public ItemSearchResponse Search(string browseNodeID, int itemPage, string searchIndex)
        {
            ItemSearch itemSearch = new ItemSearch();

            itemSearch.SubscriptionId = SUBSCRIPTION_ID;

            itemSearch.Request = new ItemSearchRequest[1];
            itemSearch.Request[0] = new ItemSearchRequest();
            itemSearch.Request[0].ResponseGroup = new string[] { "Large" };
            itemSearch.Request[0].SearchIndex = searchIndex;
            itemSearch.Request[0].BrowseNode = browseNodeID;
            itemSearch.Request[0].ItemPage = itemPage.ToString();
            itemSearch.Request[0].Sort = "salesrank";

            // Get the response
            try
            {
                ItemSearchResponse response = _ecs.ItemSearch(itemSearch);
                //Sleep 1 second to meet Amazon Service agreement.
                Thread.Sleep(1000);

                ValidateResponse(response);

                return response;
            }
            catch (RequestException)
            {
                throw;
            }
            catch (Exception ex)
            {
                throw new RequestException("Unexpected error in request.", ex);
            }

        }

        public ItemSearchResponse SearchDigitalMusic(string title)
        {
            ItemSearch itemSearch = new ItemSearch();

            itemSearch.SubscriptionId = SUBSCRIPTION_ID;

            itemSearch.Request = new ItemSearchRequest[1];
            itemSearch.Request[0] = new ItemSearchRequest();
            itemSearch.Request[0].ResponseGroup = new string[] { "Large" };
            itemSearch.Request[0].SearchIndex = "MP3Downloads";
            //itemSearch.Request[0].Keywords = "Title";
            itemSearch.Request[0].Title = title;
            itemSearch.Request[0].Sort = "salesrank";

            // Get the response
            try
            {
                ItemSearchResponse response = _ecs.ItemSearch(itemSearch);
                //Sleep 1 second to meet Amazon Service agreement.
                Thread.Sleep(1000);

                ValidateResponse(response);

                return response;
            }
            catch (RequestException)
            {
                throw;
            }
            catch (Exception ex)
            {
                throw new RequestException("Unexpected error in request.", ex);
            }
        }

        public ItemSearchResponse Search(string title, string searchIndex)
        {
            ItemSearch itemSearch = new ItemSearch();

            itemSearch.SubscriptionId = SUBSCRIPTION_ID;

            itemSearch.Request = new ItemSearchRequest[1];
            itemSearch.Request[0] = new ItemSearchRequest();
            itemSearch.Request[0].ResponseGroup = new string[] { "Large" };
            itemSearch.Request[0].SearchIndex = searchIndex;
            itemSearch.Request[0].Title = title;
            itemSearch.Request[0].Sort = "salesrank";

            // Get the response
            try
            {
                ItemSearchResponse response = _ecs.ItemSearch(itemSearch);
                //Sleep 1 second to meet Amazon Service agreement.
                Thread.Sleep(1000);

                ValidateResponse(response);

                return response;
            }
            catch (RequestException)
            {
                throw;
            }
            catch (Exception ex)
            {
                throw new RequestException("Unexpected error in request.", ex);
            }
        }

        public BrowseNode GetBrowseNode(string browseNodeID)
        {
            BrowseNodeLookup browseNodeLookup = new BrowseNodeLookup();
            BrowseNodeLookupRequest request = new BrowseNodeLookupRequest();

            browseNodeLookup.SubscriptionId = SUBSCRIPTION_ID;

            request.ResponseGroup = new string[] { "Request", "BrowseNodeInfo", "TopSellers", "NewReleases" };

            request.BrowseNodeId = new string[] { browseNodeID };

            // Setup request
            browseNodeLookup.Request = new BrowseNodeLookupRequest[] { request };

            // Get the response
            try
            {
                BrowseNodeLookupResponse response = _ecs.BrowseNodeLookup(browseNodeLookup);
                Thread.Sleep(1000);

                ValidateResponse(response);

                //Should only be one
                foreach (BrowseNodes browseNodes in response.BrowseNodes)
                {
                    foreach (BrowseNode browseNode in browseNodes.BrowseNode)
                    {
                        return browseNode;
                    }
                }
            }
            catch (Exception ex)
            {
                throw new RequestException("Unexpected error in request.", ex);
            }

            return null;
        }

        private void ValidateResponse(ItemLookupResponse response)
        {
            if (response == null)
            {
                throw new RequestException("Server Error - no response recieved!");
            }

            // Check for errors
            if (response.Items == null)
            {
                throw new RequestException("Server Error - empty response!");
            }

            //Check all items for errors.
            foreach (Items items in response.Items)
            {
                if (items.Request.Errors != null)
                {
                    throw RequestException.CreateException(items.Request.Errors);
                }
            }
        }

        private void ValidateResponse(BrowseNodeLookupResponse response)
        {
            if (response == null)
            {
                throw new RequestException("Server Error - no response recieved!");
            }

            // Check for errors
            if (response.BrowseNodes == null)
            {
                throw new RequestException("Server Error - empty response!");
            }

            foreach (BrowseNodes browseNodes in response.BrowseNodes)
            {
                if (browseNodes.Request.Errors != null)
                {
                    throw RequestException.CreateException(browseNodes.Request.Errors);
                }
            }
        }

        private void ValidateResponse(ItemSearchResponse response)
        {
            if (response == null)
            {
                throw new RequestException("Server Error - no response recieved!");
            }

            // Check for errors
            if (response.Items == null)
            {
                throw new RequestException("Server Error - empty response!");
            }

            foreach (Items items in response.Items)
            {
                if (items.Request.Errors != null)
                {
                    throw RequestException.CreateException(items.Request.Errors);
                }
            }
        }
    }
}
