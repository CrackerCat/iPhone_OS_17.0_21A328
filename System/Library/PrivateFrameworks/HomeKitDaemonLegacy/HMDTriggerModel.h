//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice, HMDUser, NSArray, NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDTriggerModel
{
}

+ (id)properties;	// IMP=0x006000000001c69d
- (id)dependentUUIDs;	// IMP=0x000000000001c448
- (id)createPayload;	// IMP=0x000000000001c26e

// Remaining properties
@property(copy, nonatomic) NSNumber *active; // @dynamic active;
@property(retain, nonatomic) NSNumber *autoDelete; // @dynamic autoDelete;
@property(retain, nonatomic) NSString *configuredName; // @dynamic configuredName;
@property(retain, nonatomic) NSArray *currentActionSets; // @dynamic currentActionSets;
@property(copy, nonatomic) NSDate *mostRecentFireDate; // @dynamic mostRecentFireDate;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) HMDUser *owner; // @dynamic owner;
@property(retain, nonatomic) HMDDevice *owningDevice; // @dynamic owningDevice;

@end
