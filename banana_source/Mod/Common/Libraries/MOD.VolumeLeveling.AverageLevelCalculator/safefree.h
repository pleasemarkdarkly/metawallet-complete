#ifndef SAFEFREE_H_
#define SAFEFREE_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef SAFE_RELEASE
    #define SAFE_RELEASE( x )           \
        if ( NULL != x )                \
        {                               \
            x->Release( );              \
            x = NULL;                   \
        }
#endif // SAFE_RELEASE

#ifndef SAFE_DELETE
    #define SAFE_DELETE( x )            \
       if( x )                          \
       {                                \
           delete x;                    \
           x = NULL;                    \
       }
#endif //SAFE_DELETE

#ifndef SAFE_ARRAYDELETE
    #define SAFE_ARRAYDELETE( x )       \
       if( x )                          \
       {                                \
           delete [] x;                 \
           x = NULL;                    \
       }
#endif //SAFE_ARRAYDELETE

#ifndef SAFE_CLOSEHANDLE
    #define SAFE_CLOSEHANDLE( h )       \
        if( NULL != h )                 \
        {                               \
            CloseHandle( h );           \
            h = NULL;                   \
        }
#endif //SAFE_CLOSEHANDLE


#endif // SAFEFREE_H_


