//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ICCloudSchemaCatchUpSyncSchedulingStateStorage;

@interface ICUserDefaults : NSObject
{
    id <ICCloudSchemaCatchUpSyncSchedulingStateStorage> _cloudSchemaCatchUpSyncSchedulingStateStorage;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000005e4a8
@property(retain, nonatomic) id <ICCloudSchemaCatchUpSyncSchedulingStateStorage> cloudSchemaCatchUpSyncSchedulingStateStorage; // @synthesize cloudSchemaCatchUpSyncSchedulingStateStorage=_cloudSchemaCatchUpSyncSchedulingStateStorage;
- (id)userDefaults;	// IMP=0x001000000005e436
- (id)init;	// IMP=0x000000000005e3dc
- (id)initWithCloudSchemaCatchUpSyncSchedulingStateStorage:(id)arg1;	// IMP=0x001000000005e374

@end
