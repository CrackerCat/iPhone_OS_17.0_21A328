//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraRecordingSessionSignificantEvent, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraClipAddSignificantEventOperation
{
    HMDCameraRecordingSessionSignificantEvent *_significantEvent;	// 8 = 0x8
    NSDictionary *_homePresenceByPairingIdentity;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0010000000712baa
+ (unsigned long long)cameraClipOperationType;	// IMP=0x0010000000712b9f
- (void).cxx_destruct;	// IMP=0x0000000000712b6e
@property(readonly) NSDictionary *homePresenceByPairingIdentity; // @synthesize homePresenceByPairingIdentity=_homePresenceByPairingIdentity;
@property(readonly, copy) HMDCameraRecordingSessionSignificantEvent *significantEvent; // @synthesize significantEvent=_significantEvent;
- (id)attributeDescriptions;	// IMP=0x00000000007129c4
- (void)updateMirrorOutputModel:(id)arg1;	// IMP=0x00000000007126fc
- (id)modelsToAdd;	// IMP=0x0000000000711ec2
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 dataSource:(id)arg5;	// IMP=0x0000000000711d5a
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4;	// IMP=0x0000000000711c97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
