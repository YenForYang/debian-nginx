
#include <ngx_config.h>
#include <ngx_core.h>

extern ngx_module_t  ndk_http_module;

ngx_module_t *ngx_modules[] = {
    &ndk_http_module,
    NULL
};

char *ngx_module_names[] = {
    "ndk_http_module",
    NULL
};

char *ngx_module_order[] = {
    NULL
};

