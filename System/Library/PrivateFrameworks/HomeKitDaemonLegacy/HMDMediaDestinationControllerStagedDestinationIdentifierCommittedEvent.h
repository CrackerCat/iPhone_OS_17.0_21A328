//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent
{
    NSUUID *_stagedDestinationIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000006ee2a3
@property(readonly, copy) NSUUID *stagedDestinationIdentifier; // @synthesize stagedDestinationIdentifier=_stagedDestinationIdentifier;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithStagedDestinationIdentifier:(id)arg1 isTriggeredOnControllerDevice:(id)arg2 userPrivilege:(id)arg3;	// IMP=0x00000000006ee07e

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end
