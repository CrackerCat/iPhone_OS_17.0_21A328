//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_nw_advertise_descriptor, OS_nw_array, OS_nw_browse_descriptor, OS_nw_endpoint, OS_nw_group_descriptor, OS_nw_interface, OS_nw_parameters, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_path : NSObject
{
    struct os_unfair_lock_s lock;	// 8 = 0x8
    struct os_unfair_lock_s description_lock;	// 12 = 0xc
    NSObject<OS_nw_parameters> *parameters;	// 16 = 0x10
    NSObject<OS_nw_endpoint> *endpoint;	// 24 = 0x18
    NSObject<OS_nw_group_descriptor> *group_descriptor;	// 32 = 0x20
    NSObject<OS_nw_browse_descriptor> *browse_descriptor;	// 40 = 0x28
    NSObject<OS_nw_advertise_descriptor> *advertise_descriptor;	// 48 = 0x30
    NSObject<OS_nw_array> *discovered_endpoints;	// 56 = 0x38
    NSObject<OS_nw_array> *resolved_endpoints;	// 64 = 0x40
    NSObject<OS_nw_array> *flows;	// 72 = 0x48
    NSObject<OS_nw_endpoint> *override_local_endpoint;	// 80 = 0x50
    NSObject<OS_nw_interface> *override_interface;	// 88 = 0x58
    NSObject<OS_nw_interface> *direct;	// 96 = 0x60
    NSObject<OS_nw_interface> *delegate;	// 104 = 0x68
    NSObject<OS_nw_interface> *fallback_interface;	// 112 = 0x70
    unsigned char client_id[16];	// 120 = 0x78
    unsigned char flow_registration_id[16];	// 136 = 0x88
    unsigned char fallback_agent[16];	// 152 = 0x98
    NSObject<OS_xpc_object> *fallback_agent_domains;	// 168 = 0xa8
    NSObject<OS_xpc_object> *fallback_agent_types;	// 176 = 0xb0
    NSObject<OS_nw_array> *resolver_configs;	// 184 = 0xb8
    NSObject<OS_nw_array> *override_resolver_configs;	// 192 = 0xc0
    NSObject<OS_nw_array> *override_extra_interface_options;	// 200 = 0xc8
    NSObject<OS_nw_array> *gateways;	// 208 = 0xd0
    NSObject<OS_nw_array> *group_members;	// 216 = 0xd8
    NSObject<OS_xpc_object> *network_agent_dictionary;	// 224 = 0xe0
    NSObject<OS_nw_array> *proxy_configs;	// 232 = 0xe8
    NSObject<OS_xpc_object> *proxy_settings;	// 240 = 0xf0
    char *reason_description;	// 248 = 0xf8
    NSString *description;	// 256 = 0x100
    struct nw_path_necp_result policy_result;	// 264 = 0x108
    unsigned int effective_mtu;	// 360 = 0x168
    unsigned int effective_traffic_class;	// 364 = 0x16c
    unsigned int interface_time_delta;	// 368 = 0x170
    unsigned int fallback_generation;	// 372 = 0x174
    int status;	// 376 = 0x178
    int reason;	// 380 = 0x17c
    unsigned short custom_ethertype;	// 384 = 0x180
    unsigned char custom_ip_protocol;	// 386 = 0x182
    struct necp_client_result_estimated_throughput estimates;	// 387 = 0x183
    struct ipv6_prefix nat64_prefixes[4];	// 392 = 0x188
    unsigned char recommended_mss;	// 472 = 0x1d8
    unsigned int weak_fallback:1;	// 473 = 0x1d9
    unsigned int no_fallback_timer:1;	// 473 = 0x1d9
    unsigned int fallback_is_forced:1;	// 473 = 0x1d9
    unsigned int fallback_is_preferred:1;	// 473 = 0x1d9
    unsigned int is_local:1;	// 473 = 0x1d9
    unsigned int is_direct:1;	// 473 = 0x1d9
    unsigned int has_ipv4:1;	// 473 = 0x1d9
    unsigned int has_ipv6:1;	// 473 = 0x1d9
    unsigned int has_nat64:1;	// 474 = 0x1da
    unsigned int traffic_mgmt_background:1;	// 474 = 0x1da
    unsigned int necp_satisfied:1;	// 474 = 0x1da
    unsigned int override_viable:1;	// 474 = 0x1da
    unsigned int changed_from_previous:1;	// 474 = 0x1da
    unsigned int probe_connectivity:1;	// 474 = 0x1da
    unsigned int link_quality_abort:1;	// 474 = 0x1da
    unsigned int checked_dns:1;	// 474 = 0x1da
    unsigned int is_listener:1;	// 475 = 0x1db
    unsigned int is_interpose:1;	// 475 = 0x1db
    unsigned int specific_listener:1;	// 475 = 0x1db
    unsigned int override_is_expensive:1;	// 475 = 0x1db
    unsigned int override_is_constrained:1;	// 475 = 0x1db
    unsigned int override_is_roaming:1;	// 475 = 0x1db
    unsigned int override_uses_wifi:1;	// 475 = 0x1db
    unsigned int override_uses_cellular:1;	// 475 = 0x1db
    unsigned int override_interface_scoped:1;	// 476 = 0x1dc
    unsigned int merged_proxy_configs:1;	// 476 = 0x1dc
    unsigned int has_kext_filter:1;	// 476 = 0x1dc
    unsigned int has_pf_rules:1;	// 476 = 0x1dc
    unsigned int has_application_level_firewall:1;	// 476 = 0x1dc
    unsigned int has_parental_controls:1;	// 476 = 0x1dc
    unsigned int __pad_bits:2;	// 476 = 0x1dc
}

- (void).cxx_destruct;	// IMP=0x0000000000724b20
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000724a60
- (id)redactedDescription;	// IMP=0x0000000000724a40
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000007235e0
- (id)init;	// IMP=0x00000000007233a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
