//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDNotificationRegistryCharacteristicsRequest
{
    NSUUID *_accessoryUUID;	// 40 = 0x28
    NSMutableSet *_characteristicInstanceIDs;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000818b9c
@property(retain) NSMutableSet *characteristicInstanceIDs; // @synthesize characteristicInstanceIDs=_characteristicInstanceIDs;
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)attributeDescriptions;	// IMP=0x0000000000818999
- (id)initWithEnable:(_Bool)arg1 user:(id)arg2 deviceIdsDestination:(id)arg3 accessoryUUID:(id)arg4;	// IMP=0x0000000000818866

@end
