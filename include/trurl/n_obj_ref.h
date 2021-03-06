/* 
  TRURLib
  $Id$
*/

#ifndef TRURL_OBJ_REF_H
#define TRURL_OBJ_REF_H

#include <stdint.h>
#include <trurl/nassert.h>
#ifndef UINT16_MAX
#define UINT16_MAX 65536
#endif
static inline void *n_ref(void *o)
{
    register uint16_t *v;
    
    v = (uint16_t*)o;
    n_assert(*v < UINT16_MAX - 1);
    (*v)++;
    return o;
}

#endif
