//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ADSystemMuteModeObserver : NSObject
{
    int _ringerStateToken;	// 8 = 0x8
    long long _muteMode;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00400000001d49df
- (void).cxx_destruct;	// IMP=0x00200000001d494d
- (void)_unregisterForRingerMuteStateNotifications;	// IMP=0x00100000001d4921
- (void)_registerForRingerMuteStateNotifications;	// IMP=0x00100000001d47dd
- (int)_ringerStateToken;	// IMP=0x00100000001d47b0
- (void)_updateRingerMuteState:(int)arg1;	// IMP=0x00100000001d46ee
- (long long)muteMode;	// IMP=0x00100000001d4662
- (void)dealloc;	// IMP=0x00100000001d4624
- (id)init;	// IMP=0x00100000001d4528

@end
