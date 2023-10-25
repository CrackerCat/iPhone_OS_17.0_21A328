//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BDSServiceNotificationStoreDataFile, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BDSServiceNotificationStore : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    BDSServiceNotificationStoreDataFile *_dataFile;	// 16 = 0x10
    NSMutableDictionary *_notificationInfosByName;	// 24 = 0x18
    long long _currentChangeToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000006ae52
@property long long currentChangeToken; // @synthesize currentChangeToken=_currentChangeToken;
@property(retain, nonatomic) NSMutableDictionary *notificationInfosByName; // @synthesize notificationInfosByName=_notificationInfosByName;
@property(retain, nonatomic) BDSServiceNotificationStoreDataFile *dataFile; // @synthesize dataFile=_dataFile;
- (void)_q_save:(id)arg1;	// IMP=0x001000000006ad35
- (void)q_save;	// IMP=0x001000000006acaa
- (void)q_load;	// IMP=0x001000000006aa23
- (void)q_updateNotificationInfoWithName:(id)arg1 changeToken:(long long)arg2;	// IMP=0x001000000006a91d
- (void)q_enqueueNotificationName:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006a853
- (void)q_fetchNotificationNamesAfterToken:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006a4f2
- (void)enqueueNotificationName:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006a27c
- (void)fetchNotificationNamesAfterToken:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000069feb
- (id)init;	// IMP=0x0010000000069eaa

@end
