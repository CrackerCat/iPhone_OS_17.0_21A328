//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHomeManagerHomeHandle, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeManagerHomeModel
{
}

+ (id)modelForHomeUUID:(id)arg1;	// IMP=0x00100000004defc9
+ (id)properties;	// IMP=0x00100000004def99
+ (id)deriveUUIDFromHomeUUID:(id)arg1;	// IMP=0x00100000004def79
+ (Class)cd_entityClass;	// IMP=0x00100000002f6d71
+ (id)cd_parentReferenceName;	// IMP=0x00100000002f6d64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) HMDHomeManagerHomeHandle *handle; // @dynamic handle;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
