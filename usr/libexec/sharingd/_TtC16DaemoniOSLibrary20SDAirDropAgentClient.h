//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol OS_nw_agent_client;

@interface _TtC16DaemoniOSLibrary20SDAirDropAgentClient : NSObject
{
    MISSING_TYPE *client;	// 8 = 0x8
    MISSING_TYPE *id;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *bundleID;	// 0 = 0x0
    MISSING_TYPE *pid;	// 6023672 = 0x5be9f8
    MISSING_TYPE *applicationServiceEndpointsOnly;	// 2212 = 0x8a4
    MISSING_TYPE *startTime;	// 6023672 = 0x5be9f8
    MISSING_TYPE *browseResponse;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000004bd3b0
- (void)updateBrowseResultsWithEndpoints:(id)arg1;	// IMP=0x00100000004bd2d0
- (id)initWithClient:(id)arg1 browseDescriptor:(id)arg2 browseResponse:(CDUnknownBlockType)arg3;	// IMP=0x00100000004bd230
- (id)init;	// IMP=0x00100000004bd1f0
@property(nonatomic, readonly) id <OS_nw_agent_client> client; // @synthesize client;

@end
