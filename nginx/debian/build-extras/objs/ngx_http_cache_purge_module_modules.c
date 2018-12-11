
#include <ngx_config.h>
#include <ngx_core.h>

extern ngx_module_t  ngx_http_cache_purge_module;

ngx_module_t *ngx_modules[] = {
    &ngx_http_cache_purge_module,
    NULL
};

char *ngx_module_names[] = {
    "ngx_http_cache_purge_module",
    NULL
};

char *ngx_module_order[] = {
    NULL
};

