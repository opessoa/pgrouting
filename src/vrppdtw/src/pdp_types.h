/*PGR-GNU*****************************************************************

Copyright (c) 2014 Manikata Kondeti
mani.iiit123@gmail.com

------

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

********************************************************************PGR-GNU*/
#pragma once

#ifdef __cplusplus
extern "C"
#endif
//
// For C and C++ inclusion

typedef struct {
    int64_t id;
    double x;
    double y;
    double demand;
    double Etime;
    double Ltime;
    double Stime;
    int64_t Pindex;
    int64_t Dindex;
    double Ddist;
} Customer;

typedef struct  {
    int seq;
    int64_t rid;
    int64_t nid;
    double cost;
} path_element;


#ifdef __cplusplus
extern "C"
#endif
