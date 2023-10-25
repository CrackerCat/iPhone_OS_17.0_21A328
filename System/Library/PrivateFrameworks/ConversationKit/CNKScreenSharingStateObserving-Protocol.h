//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CNKScreenSharingStateMonitorProtocol;

@protocol CNKScreenSharingStateObserving

@optional
- (void)screenSharingStateMonitorDidUpdateScreenInfoForParticipant:(id <CNKScreenSharingStateMonitorProtocol>)arg1;
- (void)screenSharingStateMonitor:(id <CNKScreenSharingStateMonitorProtocol>)arg1 didUpdateScreenSharingState:(_Bool)arg2;
- (void)screenSharingStateMonitor:(id <CNKScreenSharingStateMonitorProtocol>)arg1 didUpdateScreenSharingBroadcastingState:(_Bool)arg2;
@end
