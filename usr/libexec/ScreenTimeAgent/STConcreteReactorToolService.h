//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol STReactorToolServiceDelegate;

@interface STConcreteReactorToolService : NSObject
{
    id <STReactorToolServiceDelegate> delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000209d5
@property __weak id <STReactorToolServiceDelegate> delegate; // @synthesize delegate;
- (void)currentMessageTransportReachabilityMap:(CDUnknownBlockType)arg1;	// IMP=0x0010000000020945
- (void)scheduleFailStuckMessagesActivity:(CDUnknownBlockType)arg1;	// IMP=0x00100000000208dc
- (void)scheduleStoreCleanupActivity:(CDUnknownBlockType)arg1;	// IMP=0x0010000000020873
- (void)scheduleMessageRetryActivity:(CDUnknownBlockType)arg1;	// IMP=0x001000000002080a
- (void)shutdownReactorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000207a1

@end
