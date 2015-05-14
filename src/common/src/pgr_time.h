/*
    pgr_time.h

    Author: Stephen Woodbridge
    Date: 2015-05-14
    License: MIT-X

    A simple time tool of C/C++ for performance checking
    returns time in micro seconds since epoc

    USAGE:

    double t0 = pgr_gettime();
    double t1 = pgr_gettime();

    // print elapsed time
    printf("Elpased time: %d\n", t1-t0);

*/
#ifndef PGR_TIME_H
#define PGR_TIME_H

#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

double pgr_gettime();

#ifdef __cplusplus
};
#endif

#endif  // PGR_TIME_H
