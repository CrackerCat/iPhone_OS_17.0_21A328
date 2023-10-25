//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDSettingGroupModel : HMBModel
{
}

+ (id)hmbProperties;	// IMP=0x001000000007ab20
- (id)copyWithNewParentModelID:(id)arg1;	// IMP=0x000000000007aa62
@property(readonly, nonatomic) NSString *nameForKeyPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *hmbModelID;
@property(readonly, nonatomic) NSUUID *hmbParentModelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly) Class superclass;

@end
