//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFNotificationRegistrationCharacteristicDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFCharacteristic, MKFHome, MKFUser;

__attribute__((visibility("hidden")))
@interface _MKFNotificationRegistrationCharacteristic
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000d207d4
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000d20720
+ (id)fetchRequest;	// IMP=0x0010000000d359f2
@property(readonly) id <MKFHome> home;
- (id)castIfNotificationRegistrationCharacteristic;	// IMP=0x0000000000d2081b
@property(readonly, copy, nonatomic) MKFNotificationRegistrationCharacteristicDatabaseID *databaseID;

// Remaining properties
@property(retain, nonatomic) id <MKFCharacteristic> characteristic; // @dynamic characteristic;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *deviceIdsDestination;
@property(copy, nonatomic) NSNumber *enabled;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSDate *lastModified;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFUser> user;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end
