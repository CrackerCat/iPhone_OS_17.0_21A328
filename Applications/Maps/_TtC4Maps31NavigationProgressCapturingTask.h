//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC4Maps31NavigationProgressCapturingTask : NSObject
{
    MISSING_TYPE *platformController;	// 8 = 0x8
    MISSING_TYPE *routeInfoProvider;	// 16 = 0x10
    MISSING_TYPE *session;	// 24 = 0x18
    MISSING_TYPE *activeRouteIdentifier;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0040000000162ab0
- (id)init;	// IMP=0x0010000000162a50
- (void)navigationRouteInterrupter:(id)arg1 finishedInteruptingEntryWithIdentifier:(id)arg2;	// IMP=0x0010000000162990
- (id)initWithPlatformController:(id)arg1 session:(id)arg2 navigationService:(id)arg3;	// IMP=0x0010000000162940

@end
