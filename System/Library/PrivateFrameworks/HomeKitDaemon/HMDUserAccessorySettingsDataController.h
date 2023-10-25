//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDManagedObjectContext, NSArray, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDUserAccessorySettingsDataController : NSObject
{
    NSUUID *_userModelID;	// 8 = 0x8
    HMDManagedObjectContext *_moc;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006ab521
- (id)_updatedAccessorySetFromAccessoryUUIDs:(id)arg1 currentAccessories:(id)arg2 error:(id *)arg3;	// IMP=0x00000000006ab07a
- (void)handleRemovedAccessoryWithModelID:(id)arg1;	// IMP=0x00000000006ab074
- (void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006aaf57
- (void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)arg1 activityNotificationsEnabledForPersonalRequests:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000006aae31
@property(readonly, copy) NSArray *mediaContentProfileAccessControlAccessoriesToEncode;
@property(readonly, copy) NSArray *assistantAccessControlAccessoriesToEncode;
@property(readonly) _Bool assistantAccessControlActivityNotificationsEnabledForPersonalRequests;
- (id)initWithUserModelID:(id)arg1 managedObjectContext:(id)arg2;	// IMP=0x00000000006aa97a

@end
