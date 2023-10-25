//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFUserNotificationCenterObserver, NSCondition, NSMutableArray, _MFMailNotificationSoundControllerAutoFetchData;

@interface MFUserNotificationSoundController : NSObject
{
    NSCondition *_fetchSoundDataCondition;	// 8 = 0x8
    MFUserNotificationCenterObserver *_observer;	// 16 = 0x10
    NSMutableArray *_soundsToPlay;	// 24 = 0x18
    _MFMailNotificationSoundControllerAutoFetchData *_autoFetchData;	// 32 = 0x20
    unsigned long long _autoFetchPushCount;	// 40 = 0x28
    unsigned long long _soundsToPlayWaitTimeoutTS;	// 48 = 0x30
    NSMutableArray *_pushFetchTimestamps;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000c8eed
@property(retain, nonatomic) NSMutableArray *pushFetchTimestamps; // @synthesize pushFetchTimestamps=_pushFetchTimestamps;
@property unsigned long long soundsToPlayWaitTimeoutTS; // @synthesize soundsToPlayWaitTimeoutTS=_soundsToPlayWaitTimeoutTS;
@property unsigned long long autoFetchPushCount; // @synthesize autoFetchPushCount=_autoFetchPushCount;
@property(retain) _MFMailNotificationSoundControllerAutoFetchData *autoFetchData; // @synthesize autoFetchData=_autoFetchData;
@property(readonly, nonatomic) NSMutableArray *soundsToPlay; // @synthesize soundsToPlay=_soundsToPlay;
@property(readonly, nonatomic) MFUserNotificationCenterObserver *observer; // @synthesize observer=_observer;
- (void)_autoFetchPushFinished:(id)arg1;	// IMP=0x00100000000c8b9b
- (void)_autoFetchPushStarted:(id)arg1;	// IMP=0x00100000000c898b
- (void)_autoFetchFinished:(id)arg1;	// IMP=0x00100000000c8828
- (void)_fetchFinished:(id)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00100000000c838c
- (void)_autoFetchJobCompleted:(id)arg1;	// IMP=0x00100000000c8301
- (void)_fetchJobCompleted:(id)arg1 autoFetchData:(id)arg2;	// IMP=0x00100000000c802d
- (void)_autoFetchStarted:(id)arg1;	// IMP=0x00100000000c7fe0
- (void)addRemindMeSoundForNotificationContent:(id)arg1;	// IMP=0x00100000000c7f15
- (void)addSoundIfNecessaryForNotificationContent:(id)arg1 suppressionContexts:(id)arg2;	// IMP=0x00100000000c76c5
- (id)initWithUserNotificationCenterObserver:(id)arg1;	// IMP=0x00100000000c743a

@end
