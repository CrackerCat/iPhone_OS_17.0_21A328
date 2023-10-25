//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NWConcrete_nw_connection;
@protocol OS_nw_array, OS_nw_endpoint, OS_nw_ids_info, OS_nw_listener, OS_nw_parameters, OS_nw_path_evaluator, OS_nw_path_flow_registration, OS_nw_resolver;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_candidate_manager : NSObject
{
    unsigned long long log_id;	// 8 = 0x8
    NSObject<OS_nw_endpoint> *service;	// 16 = 0x10
    NSObject<OS_nw_ids_info> *ids_info;	// 24 = 0x18
    NSObject<OS_nw_resolver> *service_resolver;	// 32 = 0x20
    NSObject<OS_nw_resolver> *awdl_service_resolver;	// 40 = 0x28
    NSObject<OS_nw_endpoint> *awdl_endpoint;	// 48 = 0x30
    NSObject<OS_nw_listener> *listener;	// 56 = 0x38
    NSObject<OS_nw_parameters> *parameters;	// 64 = 0x40
    NSMutableDictionary *hostname_resolvers;	// 72 = 0x48
    void *delay_timer;	// 80 = 0x50
    NSObject<OS_nw_endpoint> *original_remote_endpoint;	// 88 = 0x58
    CDUnknownBlockType add_eligible_details;	// 96 = 0x60
    CDUnknownBlockType remove_eligible_details;	// 104 = 0x68
    CDUnknownBlockType modify_ids_parameters;	// 112 = 0x70
    NWConcrete_nw_connection *connection;	// 120 = 0x78
    NSObject<OS_nw_array> *candidates;	// 128 = 0x80
    int state;	// 136 = 0x88
    CDUnknownBlockType state_handler;	// 144 = 0x90
    CDUnknownBlockType new_connection_handler;	// 152 = 0x98
    NSObject<OS_nw_path_evaluator> *ids_path_evaluator;	// 160 = 0xa0
    NSObject<OS_nw_path_flow_registration> *ids_flow_registration;	// 168 = 0xa8
    unsigned int currently_using_awdl:1;	// 176 = 0xb0
    unsigned int started_injecting:1;	// 176 = 0xb0
    unsigned int started_ids_injecting:1;	// 176 = 0xb0
    unsigned int should_connect:1;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000000e1cc0
@property(readonly, copy) NSString *description;
- (id)init:(id)arg1;	// IMP=0x00000000000e17f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
