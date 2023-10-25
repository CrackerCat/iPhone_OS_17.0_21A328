//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager;

__attribute__((visibility("hidden")))
@interface HMDCloudManagerDataSource : HMFObject
{
    HMDHomeManager *_homeManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000080b5b0
@property(readonly) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (id)queryDatabaseOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000080b57e
- (unsigned long long)dataMigrationOptions;	// IMP=0x000000000080b570
- (_Bool)isKeychainSyncEnabled;	// IMP=0x000000000080b525
- (_Bool)isControllerKeyAvailable;	// IMP=0x000000000080b4bd
- (id)initWithHomeManager:(id)arg1;	// IMP=0x000000000080b456

@end
