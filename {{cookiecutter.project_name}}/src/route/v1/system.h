#ifndef PROJECT_ROUTE_V1_SYSTEM_H__
#define PROJECT_ROUTE_V1_SYSTEM_H__

#include "route.h"

/**
 * @brief Simple handler for getting system handler 
 */
esp_err_t system_info_get_handler(httpd_req_t *req);


#endif
