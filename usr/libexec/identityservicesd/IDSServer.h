//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTMessageDelivery;
@protocol OS_dispatch_queue;

@interface IDSServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    FTMessageDelivery *_messageDelivery;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000045025b
@property(readonly, nonatomic) FTMessageDelivery *messageDelivery; // @synthesize messageDelivery=_messageDelivery;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_authenticateMessageForRequest:(id)arg1;	// IMP=0x001000000044ffaf
- (id)_DSAuthIDForPushToken:(id)arg1;	// IMP=0x001000000044feca
- (id)_stringRepresentationForRealm:(long long)arg1;	// IMP=0x001000000044feb0
- (id)authenticatePhoneUserWithRequest:(id)arg1;	// IMP=0x001000000044fdfb
- (id)initWithQueue:(id)arg1 messageDelivery:(id)arg2;	// IMP=0x001000000044fd62
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000044fca9

@end
