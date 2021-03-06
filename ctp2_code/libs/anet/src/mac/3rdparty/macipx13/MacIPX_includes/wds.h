/*
Copyright (C) 1995-2001 Activision, Inc.

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*/

/*
 * wds.h
 *
 * Copyright (C) 1992-1994 Novell, Inc.
 * All rights reserved.
 */

#ifndef __WDS_INCLUDED__
#define __WDS_INCLUDED__

#if defined(powerc) || defined (__powerc)
#pragma options align=mac68k
#endif
typedef struct wds {
	short	len;
	char	*data;
} WDS, RDS;
#if defined(powerc) || defined(__powerc)
#pragma options align=reset
#endif

#endif /* __WDS_INCLUDED__ */
