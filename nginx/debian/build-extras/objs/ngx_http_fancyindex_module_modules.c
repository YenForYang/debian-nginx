
#include <ngx_config.h>
#include <ngx_core.h>

extern ngx_module_t  ngx_http_fancyindex_module;

ngx_module_t *ngx_modules[] = {
    &ngx_http_fancyindex_module,
    NULL
};

char *ngx_module_names[] = {
    "ngx_http_fancyindex_module",
    NULL
};

char *ngx_module_order[] = {
    "ngx_http_fancyindex_module",
    "ngx_http_autoindex_module",
    NULL
};

