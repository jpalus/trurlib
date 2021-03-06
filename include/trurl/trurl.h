/* 
  TRURLib
  Copyright (C) 1999 - 2007 Pawel A. Gajda (mis@pld-linux.org)
 
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Library General Public
  License as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.
 
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Library General Public License for more details.
 
  You should have received a copy of the GNU Library General Public
  License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place - Suite 330,
  Boston, MA 02111-1307, USA.
*/

/*
  $Id$
*/
#ifndef TRURLIB_H
#define TRURLIB_H

#ifdef __cplusplus
extern "C" {
#endif
    
void (*set_trurl_err_hook( void (*hook)(const char *err) ))(const char *err);

#include <trurl/nassert.h>   /* n_assert    */

#include <trurl/narray.h>    /* tn_array    */
#include <trurl/nbuf.h>
#include <trurl/nlist.h>     /* tn_list     */
#include <trurl/nhash.h>     /* tn_hash     */

#include <trurl/nstr.h>    /* n_str_*   */
#include <trurl/n_snprintf.h>
#include <trurl/nmalloc.h>
#include <trurl/nstream.h>
#include <trurl/ntuple.h>

#ifdef __cplusplus
}
#endif    
    
#endif     
