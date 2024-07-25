/*
    Generated by sbus code generator

    Copyright (C) 2017 Red Hat

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _SBUS_SSS_CLIENT_ASYNC_H_
#define _SBUS_SSS_CLIENT_ASYNC_H_

#include <errno.h>
#include <talloc.h>
#include <tevent.h>

#include "sbus/sbus.h"
#include "sss_iface/sbus_sss_client_properties.h"
#include "sss_iface/sss_iface_types.h"

struct tevent_req *
sbus_call_fleet_ProcessSSSDFiles_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path,
     uint32_t arg_uid,
     const char * arg_user_dir,
     uint16_t arg_prio);

errno_t
sbus_call_fleet_ProcessSSSDFiles_recv
    (struct tevent_req *req);

struct tevent_req *
sbus_call_dp_access_RefreshRules_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path);

errno_t
sbus_call_dp_access_RefreshRules_recv
    (struct tevent_req *req);

struct tevent_req *
sbus_call_dp_autofs_Enumerate_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path,
     uint32_t arg_dp_flags,
     const char * arg_mapname,
     uint32_t arg_cli_id);

errno_t
sbus_call_dp_autofs_Enumerate_recv
    (struct tevent_req *req);

struct tevent_req *
sbus_call_dp_autofs_GetEntry_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path,
     uint32_t arg_dp_flags,
     const char * arg_mapname,
     const char * arg_entryname,
     uint32_t arg_cli_id);

errno_t
sbus_call_dp_autofs_GetEntry_recv
    (struct tevent_req *req);

struct tevent_req *
sbus_call_dp_autofs_GetMap_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path,
     uint32_t arg_dp_flags,
     const char * arg_mapname,
     uint32_t arg_cli_id);

errno_t
sbus_call_dp_autofs_GetMap_recv
    (struct tevent_req *req);

struct tevent_req *
sbus_call_dp_backend_IsOnline_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path,
     const char * arg_domain_name);

errno_t
sbus_call_dp_backend_IsOnline_recv
    (struct tevent_req *req,
     bool* _status);

struct tevent_req *
sbus_call_dp_failover_ActiveServer_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path,
     const char * arg_service_name);

errno_t
sbus_call_dp_failover_ActiveServer_recv
    (TALLOC_CTX *mem_ctx,
     struct tevent_req *req,
     const char ** _server);

struct tevent_req *
sbus_call_dp_failover_DiscoverySite_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path);

errno_t
sbus_call_dp_failover_DiscoverySite_recv
    (TALLOC_CTX *mem_ctx,
     struct tevent_req *req,
     const char ** _site);

struct tevent_req *
sbus_call_dp_failover_ListServers_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path,
     const char * arg_service_name);

errno_t
sbus_call_dp_failover_ListServers_recv
    (TALLOC_CTX *mem_ctx,
     struct tevent_req *req,
     const char *** _servers);

struct tevent_req *
sbus_call_dp_failover_ListServices_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path,
     const char * arg_domain_name);

errno_t
sbus_call_dp_failover_ListServices_recv
    (TALLOC_CTX *mem_ctx,
     struct tevent_req *req,
     const char *** _services);

struct tevent_req *
sbus_call_proxy_auth_PAM_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path,
     struct pam_data * arg_pam_data);

errno_t
sbus_call_proxy_auth_PAM_recv
    (TALLOC_CTX *mem_ctx,
     struct tevent_req *req,
     struct pam_data ** _pam_response);

struct tevent_req *
sbus_call_proxy_client_Register_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path,
     uint32_t arg_ID);

errno_t
sbus_call_proxy_client_Register_recv
    (struct tevent_req *req);

struct tevent_req *
sbus_call_dp_dp_getAccountDomain_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path,
     uint32_t arg_dp_flags,
     uint32_t arg_entry_type,
     const char * arg_filter,
     uint32_t arg_cli_id);

errno_t
sbus_call_dp_dp_getAccountDomain_recv
    (TALLOC_CTX *mem_ctx,
     struct tevent_req *req,
     uint16_t* _dp_error,
     uint32_t* _error,
     const char ** _domain_name);

struct tevent_req *
sbus_call_dp_dp_getAccountInfo_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path,
     uint32_t arg_dp_flags,
     uint32_t arg_entry_type,
     const char * arg_filter,
     const char * arg_domain,
     const char * arg_extra,
     uint32_t arg_cli_id);

errno_t
sbus_call_dp_dp_getAccountInfo_recv
    (TALLOC_CTX *mem_ctx,
     struct tevent_req *req,
     uint16_t* _dp_error,
     uint32_t* _error,
     const char ** _error_message);

struct tevent_req *
sbus_call_dp_dp_getDomains_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path,
     const char * arg_domain_hint);

errno_t
sbus_call_dp_dp_getDomains_recv
    (TALLOC_CTX *mem_ctx,
     struct tevent_req *req,
     uint16_t* _dp_error,
     uint32_t* _error,
     const char ** _error_message);

struct tevent_req *
sbus_call_dp_dp_hostHandler_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path,
     uint32_t arg_dp_flags,
     const char * arg_name,
     const char * arg_alias,
     uint32_t arg_cli_id);

errno_t
sbus_call_dp_dp_hostHandler_recv
    (TALLOC_CTX *mem_ctx,
     struct tevent_req *req,
     uint16_t* _dp_error,
     uint32_t* _error,
     const char ** _error_message);

struct tevent_req *
sbus_call_dp_dp_pamHandler_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path,
     struct pam_data * arg_pam_data);

errno_t
sbus_call_dp_dp_pamHandler_recv
    (TALLOC_CTX *mem_ctx,
     struct tevent_req *req,
     struct pam_data ** _pam_response);

struct tevent_req *
sbus_call_dp_dp_resolverHandler_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path,
     uint32_t arg_dp_flags,
     uint32_t arg_entry_type,
     uint32_t arg_filter_type,
     const char * arg_filter_value,
     uint32_t arg_cli_id);

errno_t
sbus_call_dp_dp_resolverHandler_recv
    (TALLOC_CTX *mem_ctx,
     struct tevent_req *req,
     uint16_t* _dp_error,
     uint32_t* _error,
     const char ** _error_message);

struct tevent_req *
sbus_call_dp_dp_sudoHandler_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     DBusMessage *raw_message);

errno_t
sbus_call_dp_dp_sudoHandler_recv
    (TALLOC_CTX *mem_ctx,
     struct tevent_req *req,
     uint16_t* _dp_error,
     uint32_t* _error,
     const char ** _error_message);

struct tevent_req *
sbus_call_monitor_RegisterService_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path,
     const char * arg_name,
     uint16_t arg_version,
     uint16_t arg_type);

errno_t
sbus_call_monitor_RegisterService_recv
    (struct tevent_req *req,
     uint16_t* _monitor_version);

struct tevent_req *
sbus_call_nss_memcache_UpdateInitgroups_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path,
     const char * arg_user,
     const char * arg_domain,
     uint32_t * arg_groups);

errno_t
sbus_call_nss_memcache_UpdateInitgroups_recv
    (struct tevent_req *req);

struct tevent_req *
sbus_call_service_clearEnumCache_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path);

errno_t
sbus_call_service_clearEnumCache_recv
    (struct tevent_req *req);

struct tevent_req *
sbus_call_service_clearMemcache_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path);

errno_t
sbus_call_service_clearMemcache_recv
    (struct tevent_req *req);

struct tevent_req *
sbus_call_service_clearNegcache_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path);

errno_t
sbus_call_service_clearNegcache_recv
    (struct tevent_req *req);

struct tevent_req *
sbus_call_service_goOffline_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path);

errno_t
sbus_call_service_goOffline_recv
    (struct tevent_req *req);

struct tevent_req *
sbus_call_service_resetOffline_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path);

errno_t
sbus_call_service_resetOffline_recv
    (struct tevent_req *req);

struct tevent_req *
sbus_call_service_rotateLogs_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path);

errno_t
sbus_call_service_rotateLogs_recv
    (struct tevent_req *req);

struct tevent_req *
sbus_call_service_sysbusReconnect_send
    (TALLOC_CTX *mem_ctx,
     struct sbus_connection *conn,
     const char *busname,
     const char *object_path);

errno_t
sbus_call_service_sysbusReconnect_recv
    (struct tevent_req *req);

void
sbus_emit_resp_domain_SetActive
    (struct sbus_connection *conn,
     const char *object_path,
     const char * arg_name);

void
sbus_emit_resp_domain_SetInconsistent
    (struct sbus_connection *conn,
     const char *object_path,
     const char * arg_name);

void
sbus_emit_resp_negcache_ResetGroups
    (struct sbus_connection *conn,
     const char *object_path);

void
sbus_emit_resp_negcache_ResetUsers
    (struct sbus_connection *conn,
     const char *object_path);

void
sbus_emit_nss_memcache_InvalidateAllGroups
    (struct sbus_connection *conn,
     const char *object_path);

void
sbus_emit_nss_memcache_InvalidateAllInitgroups
    (struct sbus_connection *conn,
     const char *object_path);

void
sbus_emit_nss_memcache_InvalidateAllUsers
    (struct sbus_connection *conn,
     const char *object_path);

void
sbus_emit_nss_memcache_InvalidateGroupById
    (struct sbus_connection *conn,
     const char *object_path,
     uint32_t arg_gid);

#endif /* _SBUS_SSS_CLIENT_ASYNC_H_ */
