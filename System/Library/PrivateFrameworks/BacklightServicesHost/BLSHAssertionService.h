//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSHLocalAssertionService, BLSHXPCAssertionServiceHostServer;

__attribute__((visibility("hidden")))
@interface BLSHAssertionService : NSObject
{
    BLSHXPCAssertionServiceHostServer *_server;	// 8 = 0x8
    BLSHLocalAssertionService *_localAssertionService;	// 16 = 0x10
}

+ (id)serviceWithOSInterfaceProvider:(id)arg1 localOnly:(_Bool)arg2;	// IMP=0x006000000007a6a4
- (void).cxx_destruct;	// IMP=0x000000000007ac95
@property(readonly, nonatomic) BLSHLocalAssertionService *localAssertionService; // @synthesize localAssertionService=_localAssertionService;
- (id)initWithOSInterfaceProvider:(id)arg1 localOnly:(_Bool)arg2;	// IMP=0x000000000007a6fa

@end
