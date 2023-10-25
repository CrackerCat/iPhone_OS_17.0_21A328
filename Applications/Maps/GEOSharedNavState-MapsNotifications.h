//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOSharedNavState.h>

@class NSString;

@interface GEOSharedNavState (MapsNotifications)
- (id)arrivalMessage;	// IMP=0x001000000041898a
- (id)arrivalNotificationBody;	// IMP=0x001000000041882c
- (id)arrivalNotificationSubtitle;	// IMP=0x001000000041876d
- (id)waypointResumeMessage;	// IMP=0x00100000004185ae
- (id)waypointResumeNotificationBody;	// IMP=0x00100000004183ac
- (id)waypointResumeNotificationSubtitle;	// IMP=0x00100000004182ed
- (id)intermediateArrivalMessage;	// IMP=0x00100000004181b0
- (id)intermediateArrivalNotificationBody;	// IMP=0x0010000000418027
- (id)intermediateArrivalNotificationSubtitle;	// IMP=0x0010000000417f68
- (id)chargingStopMessage;	// IMP=0x0010000000417e8d
- (id)chargingStopNotificationBody;	// IMP=0x0010000000417d8a
- (id)chargingStopNotificationSubtitle;	// IMP=0x0010000000417ccb
- (id)updateMessage;	// IMP=0x0010000000417aee
- (id)updateNotificationBody;	// IMP=0x00100000004178c8
- (id)updateNotificationSubtitle;	// IMP=0x0010000000417809
- (id)initialMessage;	// IMP=0x0010000000417639
- (id)initialNotificationBody;	// IMP=0x001000000041742e
- (id)initialNotificationSubtitle;	// IMP=0x001000000041736f
- (id)senderNameIncludingHandleIfNecessary;	// IMP=0x0010000000417260
- (void)updateModel:(id)arg1;	// IMP=0x0010000000480114
- (id)_transportTypeStringForAnalytics;	// IMP=0x00100000008a8bb1
- (id)carPlayListCellSubtitle;	// IMP=0x00100000009bc7fa
- (id)carPlayListCellTitle;	// IMP=0x00100000009bc7e8
- (id)listCellSubtitle;	// IMP=0x00100000009bc7d6
- (id)listCellTitle;	// IMP=0x00100000009bc7c4
- (id)_lastUpdatedStringWithElapsedTime:(id)arg1;	// IMP=0x00100000009bc705
- (id)_arrivingAroundStringWithETATimeString:(id)arg1;	// IMP=0x00100000009bc62c
- (id)_transportTypeString;	// IMP=0x00100000009bc43d
- (id)homeCellSubtitle;	// IMP=0x00100000009bbe4f
- (id)homeCellTitle;	// IMP=0x00100000009bb916
- (id)alertMessageForClosedTrip;	// IMP=0x00100000009bb7fd
- (id)alertMessageForTransportOrProtocolError;	// IMP=0x00100000009bb42b
- (id)alertMessageForChinaError;	// IMP=0x00100000009bb1db
- (id)alertTitleForDisallowedDetails;	// IMP=0x00100000009bb173
- (_Bool)_disallowDetailsForAnyReason;	// IMP=0x00100000009bb126
- (_Bool)disallowDetailsForProtocolVersion;	// IMP=0x00100000009bb0d7
- (_Bool)disallowDetailsForTransportType;	// IMP=0x00100000009bb082
- (_Bool)disallowDetailsForChina;	// IMP=0x00100000009bb04c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
