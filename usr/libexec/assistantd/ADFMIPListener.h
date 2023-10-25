//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSString;
@protocol OS_dispatch_queue;

@interface ADFMIPListener : NSObject
{
    APSConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedListener;	// IMP=0x002000000027e75f
- (void).cxx_destruct;	// IMP=0x002000000027e690
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x001000000027e51b
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x001000000027e494
- (void)startListening;	// IMP=0x001000000027e449
- (id)init;	// IMP=0x001000000027e384

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
