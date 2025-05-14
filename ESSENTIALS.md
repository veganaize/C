[C Programming](https://en.cppreference.com/w/c)
===============

_Quick reference for C fundamentals_


[Preprocessor](https://en.wikipedia.org/wiki/C_preprocessor)
--------------

[Header Include Guards](https://en.wikipedia.org/wiki/Include_guard)
```c
#ifndef FILENAME_H
#define FILENAME_H
    /*...*/
#endif  /* FILENAME_H */
```


[Search & Sort](https://en.cppreference.com/w/c/algorithm)
---------------

```c
#include <stdlib.h>

/* qsort, despite name, is NOT required to implement quicksort -- no complexity or stability guarantees. */
void qsort(void * array,
           size_t element_count,  /* sizeof array / sizeof *array */
           size_t element_bytesize,  /* sizeof *array */
           int (*compare_function)(const void * a, const void * b));  /* returns value <, >, or == 0 */

/* bsearch, despite name, is NOT required to implement binary search -- no complexity guarantees. */
void * bsearch(const void * keyword,
               const void * array,
               size_t element_count,  /* sizeof array / sizeof *array */
               size_t element_bytesize,  /* sizeof *array */
               int (*compare_function)(const void * keyword, const void * element));  /* returns value <, >, or == 0 */


int compare_ints(const void * a, const void * b)
{
    int x = *(const int*)a;
    int y = *(const int*)b;

    return x < y ? -1 : x > y ? 1 : 0;
}
```
