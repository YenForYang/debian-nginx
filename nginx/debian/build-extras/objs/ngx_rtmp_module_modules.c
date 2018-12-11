
#include <ngx_config.h>
#include <ngx_core.h>

extern ngx_module_t  ngx_rtmp_module;
extern ngx_module_t  ngx_rtmp_core_module;
extern ngx_module_t  ngx_rtmp_cmd_module;
extern ngx_module_t  ngx_rtmp_codec_module;
extern ngx_module_t  ngx_rtmp_access_module;
extern ngx_module_t  ngx_rtmp_record_module;
extern ngx_module_t  ngx_rtmp_live_module;
extern ngx_module_t  ngx_rtmp_play_module;
extern ngx_module_t  ngx_rtmp_flv_module;
extern ngx_module_t  ngx_rtmp_mp4_module;
extern ngx_module_t  ngx_rtmp_netcall_module;
extern ngx_module_t  ngx_rtmp_relay_module;
extern ngx_module_t  ngx_rtmp_exec_module;
extern ngx_module_t  ngx_rtmp_auto_push_module;
extern ngx_module_t  ngx_rtmp_auto_push_index_module;
extern ngx_module_t  ngx_rtmp_notify_module;
extern ngx_module_t  ngx_rtmp_log_module;
extern ngx_module_t  ngx_rtmp_limit_module;
extern ngx_module_t  ngx_rtmp_hls_module;
extern ngx_module_t  ngx_rtmp_dash_module;
extern ngx_module_t  ngx_rtmp_stat_module;
extern ngx_module_t  ngx_rtmp_control_module;

ngx_module_t *ngx_modules[] = {
    &ngx_rtmp_module,
    &ngx_rtmp_core_module,
    &ngx_rtmp_cmd_module,
    &ngx_rtmp_codec_module,
    &ngx_rtmp_access_module,
    &ngx_rtmp_record_module,
    &ngx_rtmp_live_module,
    &ngx_rtmp_play_module,
    &ngx_rtmp_flv_module,
    &ngx_rtmp_mp4_module,
    &ngx_rtmp_netcall_module,
    &ngx_rtmp_relay_module,
    &ngx_rtmp_exec_module,
    &ngx_rtmp_auto_push_module,
    &ngx_rtmp_auto_push_index_module,
    &ngx_rtmp_notify_module,
    &ngx_rtmp_log_module,
    &ngx_rtmp_limit_module,
    &ngx_rtmp_hls_module,
    &ngx_rtmp_dash_module,
    &ngx_rtmp_stat_module,
    &ngx_rtmp_control_module,
    NULL
};

char *ngx_module_names[] = {
    "ngx_rtmp_module",
    "ngx_rtmp_core_module",
    "ngx_rtmp_cmd_module",
    "ngx_rtmp_codec_module",
    "ngx_rtmp_access_module",
    "ngx_rtmp_record_module",
    "ngx_rtmp_live_module",
    "ngx_rtmp_play_module",
    "ngx_rtmp_flv_module",
    "ngx_rtmp_mp4_module",
    "ngx_rtmp_netcall_module",
    "ngx_rtmp_relay_module",
    "ngx_rtmp_exec_module",
    "ngx_rtmp_auto_push_module",
    "ngx_rtmp_auto_push_index_module",
    "ngx_rtmp_notify_module",
    "ngx_rtmp_log_module",
    "ngx_rtmp_limit_module",
    "ngx_rtmp_hls_module",
    "ngx_rtmp_dash_module",
    "ngx_rtmp_stat_module",
    "ngx_rtmp_control_module",
    NULL
};

char *ngx_module_order[] = {
    NULL
};

