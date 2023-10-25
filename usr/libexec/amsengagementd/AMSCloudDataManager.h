//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol AMSCloudDataManagerDataSource;

@interface AMSCloudDataManager : NSObject
{
    NSMutableDictionary *_containers;	// 8 = 0x8
    id <AMSCloudDataManagerDataSource> _dataSource;	// 16 = 0x10
}

+ (void)handleRecordZoneFetchFailed:(id)arg1 inDatabase:(id)arg2 withError:(id)arg3;	// IMP=0x004000000016994a
- (void).cxx_destruct;	// IMP=0x0020000000169eab
@property(retain, nonatomic) id <AMSCloudDataManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSMutableDictionary *containers; // @synthesize containers=_containers;
- (void)handlePushNotification:(id)arg1;	// IMP=0x00100000001698e1
- (id)containerWithContainerIdentifier:(id)arg1 options:(id)arg2;	// IMP=0x00100000001697cd
- (id)containerWithContainerIdentifier:(id)arg1;	// IMP=0x00100000001697b9
@property(readonly, nonatomic) NSString *pushNotificationTopic;
- (id)initWithDataSource:(id)arg1;	// IMP=0x00100000001696e4

@end
