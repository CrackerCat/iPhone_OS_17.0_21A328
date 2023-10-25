//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NWConcrete_nw_endpoint_handler;
@protocol OS_dispatch_queue, OS_nw_array, OS_nw_channel, OS_nw_endpoint, OS_nw_error, OS_nw_fd_wrapper, OS_nw_path, OS_nw_path_flow_registration, OS_nw_protocol_definition, OS_nw_read_request, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_endpoint_flow : NSObject
{
    NSObject<OS_nw_path> *connected_path;	// 8 = 0x8
    NSObject<OS_nw_path> *flow_path;	// 16 = 0x10
    NWConcrete_nw_endpoint_flow *internally_retained_object;	// 24 = 0x18
    unsigned int is_root_flow_handler:1;	// 32 = 0x20
    unsigned int is_leaf_flow_handler:1;	// 32 = 0x20
    unsigned int is_empty_root:1;	// 32 = 0x20
    unsigned int initialized_protocol_callbacks:1;	// 32 = 0x20
    unsigned int started:1;	// 32 = 0x20
    unsigned int rebuild_stack:1;	// 32 = 0x20
    unsigned int setup_protocols:1;	// 32 = 0x20
    unsigned int started_protocols:1;	// 32 = 0x20
    unsigned int did_join_protocols:1;	// 33 = 0x21
    unsigned int is_viable:1;	// 33 = 0x21
    unsigned int is_connected:1;	// 33 = 0x21
    unsigned int has_connected:1;	// 33 = 0x21
    unsigned int initial_payload_sent:1;	// 33 = 0x21
    unsigned int assigned_initial_writes:1;	// 33 = 0x21
    unsigned int is_channel:1;	// 33 = 0x21
    unsigned int is_multipath:1;	// 33 = 0x21
    unsigned int multipath_nat64_query_outstanding:1;	// 34 = 0x22
    unsigned int custom_protocols_only:1;	// 34 = 0x22
    unsigned int is_flow_divert:1;	// 34 = 0x22
    unsigned int multilayer_packet_logging:1;	// 34 = 0x22
    unsigned int has_progress_target:1;	// 34 = 0x22
    unsigned int path_is_direct:1;	// 34 = 0x22
    unsigned int should_ignore_path_result:1;	// 34 = 0x22
    unsigned int reported_do_not_reuse:1;	// 34 = 0x22
    unsigned int in_setup_protocols:1;	// 35 = 0x23
    unsigned int connected_child_handles_requests:1;	// 35 = 0x23
    unsigned int connected_child_failed:1;	// 35 = 0x23
    unsigned int should_start_child:1;	// 35 = 0x23
    unsigned int delay_start_child:1;	// 35 = 0x23
    unsigned int cloned:1;	// 35 = 0x23
    unsigned int did_add_proxy:1;	// 35 = 0x23
    unsigned int guard_fd:1;	// 35 = 0x23
    NWConcrete_nw_endpoint_flow *clone_from_flow;	// 40 = 0x28
    struct nw_protocol_identifier protocol_identifier;	// 48 = 0x30
    struct nw_protocol_callbacks protocol_callbacks;	// 88 = 0x58
    struct nw_listen_protocol_callbacks listen_callbacks;	// 360 = 0x168
    struct nw_flow_protocol shared_protocol;	// 376 = 0x178
    NSObject<OS_nw_read_request> *new_flow_read_requests;	// 712 = 0x2c8
    struct nw_protocol *transport_protocol;	// 720 = 0x2d0
    struct nw_protocol *joined_protocol;	// 728 = 0x2d8
    struct nw_protocol *proxy_protocol;	// 736 = 0x2e0
    struct nw_protocol *bottom_protocol;	// 744 = 0x2e8
    struct nw_protocol_identifier *ip_protocol_identifier;	// 752 = 0x2f0
    NSObject<OS_nw_protocol_definition> *multiplexed_message_definition;	// 760 = 0x2f8
    struct nw_protocol *multiplexed_message_protocol;	// 768 = 0x300
    struct tcp_info *tcp_info;	// 776 = 0x308
    struct tcp_connection_info *tcp_connection_info;	// 784 = 0x310
    struct nw_data_transfer_snapshot *data_transfer_snapshot;	// 792 = 0x318
    unsigned long long snapshot_length;	// 800 = 0x320
    unsigned int snapshot_count;	// 808 = 0x328
    NSObject<OS_nw_path_flow_registration> *flow_registration;	// 816 = 0x330
    NSObject<OS_dispatch_queue> *client_queue;	// 824 = 0x338
    CDUnknownBlockType read_close_handler;	// 832 = 0x340
    CDUnknownBlockType write_close_handler;	// 840 = 0x348
    struct nw_hash_table *multiplexed_flow_table;	// 848 = 0x350
    NSObject<OS_nw_error> *last_error;	// 856 = 0x358
    struct os_unfair_lock_s lock;	// 864 = 0x360
    NSObject<OS_nw_fd_wrapper> *connected_fd_wrapper;	// 872 = 0x368
    unsigned int pending_write_bytes;	// 880 = 0x370
    int pre_connected_fd;	// 884 = 0x374
    NSObject<OS_nw_channel> *channel;	// 888 = 0x378
    struct nw_protocol *socket_protocol;	// 896 = 0x380
    struct _DNSServiceRef_t *sleep_proxy_ref;	// 904 = 0x388
    NWConcrete_nw_endpoint_handler *child_endpoint_handler;	// 912 = 0x390
    NWConcrete_nw_endpoint_handler *connected_endpoint_handler;	// 920 = 0x398
    NSObject<OS_nw_array> *candidate_endpoint_handlers;	// 928 = 0x3a0
    NSObject<OS_xpc_object> *flow_divert_token;	// 936 = 0x3a8
    NSObject<OS_nw_endpoint> *flow_divert_endpoint;	// 944 = 0x3b0
    NSObject<OS_nw_endpoint> *saved_original_endpoint;	// 952 = 0x3b8
    unsigned short protocol_log_id_num;	// 960 = 0x3c0
    unsigned int keepalive_event_enabled:1;	// 962 = 0x3c2
    unsigned long long first_keepalive_time;	// 968 = 0x3c8
    unsigned int keepalive_count;	// 976 = 0x3d0
    unsigned int configured_keepalive_count;	// 980 = 0x3d4
    unsigned int configured_keepalive_interval;	// 984 = 0x3d8
    unsigned int restart_count;	// 988 = 0x3dc
    unsigned int adaptive_read_count;	// 992 = 0x3e0
    unsigned int adaptive_write_count;	// 996 = 0x3e4
    CDUnknownBlockType adaptive_read_event_handler;	// 1000 = 0x3e8
    CDUnknownBlockType adaptive_write_event_handler;	// 1008 = 0x3f0
    CDUnknownBlockType keepalive_event_handler;	// 1016 = 0x3f8
    CDUnknownBlockType metadata_changed_event_handler;	// 1024 = 0x400
    NSObject<OS_nw_array> *connected_metadata;	// 1032 = 0x408
    NSObject<OS_nw_array> *connection_wide_metadata;	// 1040 = 0x410
    unsigned long long sent_application_byte_count;	// 1048 = 0x418
    unsigned long long received_application_byte_count;	// 1056 = 0x420
    unsigned char connection_uuid[16];	// 1064 = 0x428
}

- (id).cxx_construct;	// IMP=0x0000000000815880
- (void).cxx_destruct;	// IMP=0x0000000000815670
- (_Bool)applyWithHandler:(id)arg1 toChildren:(CDUnknownBlockType)arg2;	// IMP=0x0000000000814ef0
- (void)updatePathWithHandler:(id)arg1;	// IMP=0x0000000000813280
- (void)cancelWithHandler:(id)arg1 forced:(_Bool)arg2;	// IMP=0x0000000000812700
- (void)startWithHandler:(id)arg1;	// IMP=0x0000000000810010
- (void)dealloc;	// IMP=0x000000000080f830
- (id)init;	// IMP=0x000000000080f5f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
