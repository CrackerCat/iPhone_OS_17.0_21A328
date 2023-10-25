//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCoordinationPrimaryElectionDetailedLogEvent
{
    _Bool _meshAndPrimaryCandidateCountEqual;	// 10 = 0xa
    _Bool _previousPrimaryInMesh;	// 11 = 0xb
    unsigned long long _electionTriggerReason;	// 16 = 0x10
    unsigned long long _confirmationCriteria;	// 24 = 0x18
}

@property(readonly) _Bool previousPrimaryInMesh; // @synthesize previousPrimaryInMesh=_previousPrimaryInMesh;
@property(readonly) _Bool meshAndPrimaryCandidateCountEqual; // @synthesize meshAndPrimaryCandidateCountEqual=_meshAndPrimaryCandidateCountEqual;
@property(readonly) unsigned long long confirmationCriteria; // @synthesize confirmationCriteria=_confirmationCriteria;
@property(readonly) unsigned long long electionTriggerReason; // @synthesize electionTriggerReason=_electionTriggerReason;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
- (id)initWithIsPrimary:(_Bool)arg1 didChangePrimary:(_Bool)arg2 electionTriggerReason:(unsigned long long)arg3 confirmationCriteria:(unsigned long long)arg4 meshAndPrimaryCandidateCountEqual:(_Bool)arg5 previousPrimaryInMesh:(_Bool)arg6;	// IMP=0x000000000074053f

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end
