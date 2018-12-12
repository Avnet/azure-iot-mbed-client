/**
* copyright (c) 2018, James Flynn
* SPDX-License-Identifier: MIT
*/

/**
*   @file   bg96gps.hpp
*   @brief  GPS class for interacting with GPSS module onthe BG96
*
*   @author James Flynn
*
*   @date   11-Dec-2018
*/

#include "easy-connect.h"
#include "BG96Interface.h"

class bg96_gps 
{

private:
     BG96Interface *ptr;

public:

    bg96_gps(void) {
        ptr = (BG96Interface*) easy_get_netif(false);
        }

    inline bool gpsPower(bool on) {
        return ptr->startGPS(on);
        }

    inline bool gpsLocation(gps_data *gd) {
        return  ptr->getGPS_loc(gd);
        }

};

