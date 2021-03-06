/*
    This file is part of WJElement.

    WJElement is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published
    by the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    WJElement is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with WJElement.  If not, see <http://www.gnu.org/licenses/>.
*/


/****************************************************************************
 * stub replacement for Messaging Architects' internal MemMgr library
 ****************************************************************************/

#ifndef MEMMGR_H
#define MEMMGR_H

#include "xpl.h"
#include <string.h>
#include <stdlib.h>


#define MemAssert(p)

#define MemoryManagerOpen( c )
#define MemoryManagerOpenEx( c, cfg )
#define MemoryManagerClose( c )
#define MemUpdateOwner( p, f, l )
#define MemCopyOwner( d, s )
#define MemGetOwner( p, f, l )
#define MemMallocEx( p, s, a, w, z )			malloc( (s) ); if( (a) ) { (*a) = (s); } if( (z) ) { memset( (p), 0, (s) ); }
#define MemMalloc( s )							malloc( (s) )
#define MemMallocWait( s )						malloc( (s) )
#define MemFree( p )							free( (p) )
#define MemFreeEx( p, f, l )					free( (p) )
#define MemRelease( p )							free( (*p) ); (*p) = NULL
#define MemReleaseEx( p, f, l )					free( (*p) ); (*p) = NULL
#define MemRealloc( p, s )						realloc( (p), (s) )
#define MemReallocWait( p, s )					realloc( (p), (s) )
#define MemStrdup( s )							strdup( (s) )
#define MemStrdupWait( s )						strdup( (s) )
#define MemStrndup( s, m )						strndup( (s), (m) )
#define MemStrndupWait( s, m )					strndup( (s), (m) )
#define MemSprintf( f, ... )					sprintf( (f), __VA_ARGS__ )
#define MemAsprintf( p, f, ... )				asprintf( (p), (f), __VA_ARGS__ )
#define MemCalloc( c, s )						calloc( (c), (s) )
#define MemCallocWait( c, s )					calloc( (c), (s) )

#define MemGenerateReports()
#define MemDumpPools( f )
#define MemConsumer()


#endif // MEMMGR_H
