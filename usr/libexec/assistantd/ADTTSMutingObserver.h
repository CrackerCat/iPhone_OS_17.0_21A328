//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADTTSMutingObserver : NSObject
{
    struct __CFBag *_observers;	// 8 = 0x8
    long long _useDeviceSpeakerForTTSPreference;	// 16 = 0x10
    struct os_unfair_lock_s _handsFreeLock;	// 24 = 0x18
    _Bool _currentRouteIsHandsFree;	// 28 = 0x1c
}

+ (id)sharedInstance;	// IMP=0x00200000001bcad6
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerResetNotification:(id)arg2;	// IMP=0x00200000001bc5f4
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerLostNotification:(id)arg2;	// IMP=0x00100000001bc507
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000001bc41a
- (void)removeHandsFreeStateObserver:(id)arg1;	// IMP=0x00100000001bc391
- (void)addHandsFreeStateObserver:(id)arg1;	// IMP=0x00100000001bc308
- (void)_useDeviceSpeakerForTTSPreferenceChanged;	// IMP=0x00100000001bc1f1
- (void)_stopListeningForMuteStateChanges;	// IMP=0x00100000001bc11b
- (void)_listenForMuteStateChanges;	// IMP=0x00100000001bc00f
- (void)_stopListeningForAudioRouteChanges;	// IMP=0x00100000001bbf1f
- (void)_listenForAudioRouteChanges;	// IMP=0x00100000001bbe2f
- (void)_muteStateChanged:(id)arg1;	// IMP=0x00100000001bbd42
- (void);	// IMP=0x00100000001bbd16
- (void)_updateAudioRouteOnMainThread;	// IMP=0x00100000001bb9a9
- (void)_cleanupAudioRouteOnMainThread;	// IMP=0x00100000001bb983
- (_Bool)_currentRouteIsHandsFree;	// IMP=0x00100000001bb95b
- (void)dealloc;	// IMP=0x00100000001bb91c
- (id)init;	// IMP=0x00100000001bb873

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
