#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include "n_array_int.h"

void n_array_map(const tn_array *arr, void (*map_fn) (void *))
{
    register size_t i, n;

    n = arr->items + arr->start_index;
    n = arr->items;

    for (i = arr->start_index; i < n; i++)
        map_fn(arr->data[i]);
    
}
