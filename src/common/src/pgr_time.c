/*
    pgr_time.c

    Author: Stephen Woodbridge
    Date: 2015-05-14
    License: MIT-X

    A simple time tool of C/C++ for performance checking.

*/

#include "pgr_time.h"

/*! \brief Returns time in microseconds as double from some reference.
 */
double pgr_gettime() {
    struct timespec t;

    clock_gettime(CLOCK_MONOTONIC, &t);
    return (double) t.tv_sec * 1000000.0 + (double) t.tv_nsec * 1000.0;
}
