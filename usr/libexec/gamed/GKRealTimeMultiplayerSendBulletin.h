//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface GKRealTimeMultiplayerSendBulletin
{
    NSString *_bundleIdentifier;	// 136 = 0x88
    NSNumber *_sendReason;	// 144 = 0x90
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00400000001d1129
- (void).cxx_destruct;	// IMP=0x00200000001d240a
@property(retain) NSNumber *sendReason; // @synthesize sendReason=_sendReason;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001d0f24
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001d0cfe
- (id)initWithPushNotification:(id)arg1;	// IMP=0x00100000001d0ad7

@end
