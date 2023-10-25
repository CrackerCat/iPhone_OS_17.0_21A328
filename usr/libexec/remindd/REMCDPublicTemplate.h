//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString, NSUUID, REMCDAccount, REMColor, REMObjectID;

@interface REMCDPublicTemplate : NSManagedObject
{
}

+ (id)objectIDWithUUID:(id)arg1;	// IMP=0x00200000006c3110
+ (id)newObjectID;	// IMP=0x00100000006c3040
+ (id)cdEntityName;	// IMP=0x00100000006c2fd0
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00400000006c31f0
@property(nonatomic, readonly) REMObjectID *remObjectID;

// Remaining properties
@property(nonatomic, retain) REMCDAccount *account; // @dynamic account;
@property(nonatomic, copy) NSString *badgeEmblem; // @dynamic badgeEmblem;
@property(nonatomic, retain) REMColor *color; // @dynamic color;
@property(nonatomic, copy) NSData *encodedSavedReminders; // @dynamic encodedSavedReminders;
@property(nonatomic, copy) NSString *name; // @dynamic name;
@property(nonatomic, copy) NSDate *publicLinkExpirationDate; // @dynamic publicLinkExpirationDate;
@property(nonatomic, copy) NSUUID *publicLinkURLUUID; // @dynamic publicLinkURLUUID;
@property(nonatomic, copy) NSString *sortingStyle; // @dynamic sortingStyle;

@end
