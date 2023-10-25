//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMAccessoryCollectionSetting.h>

@interface HMAccessoryCollectionSetting (COMeshAlarmAddOn)
- (void)co_removeAlarm:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x009000000001ec19
- (void)co_updateAlarm:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x009000000001eb87
- (void)co_addAlarm:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x009000000001eaf5
- (id)co_rawAlarms;	// IMP=0x009000000001e83c
- (id)co_alarms;	// IMP=0x009000000001e7bb
- (void)co_setMappedAlarms:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x009000000001ff3f
- (id)co_mappedAlarms;	// IMP=0x009000000001fc4f
- (void)co_setCachedWrite:(id)arg1;	// IMP=0x009000000001f8cb
- (id)co_cachedWrite;	// IMP=0x009000000001f7b7
- (void)co_flushQueue;	// IMP=0x009000000001f2fc
- (void)co_enqueueOperation:(id)arg1;	// IMP=0x009000000001ece8
- (void)co_withLock:(CDUnknownBlockType)arg1;	// IMP=0x009000000001ecab
@end
