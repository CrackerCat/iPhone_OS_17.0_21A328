//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKUtilityService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00200000000043c4
+ (Class)interfaceClass;	// IMP=0x00100000000043b3
- (oneway void)handleGameControllerHomeButtonPressed;	// IMP=0x0020000000006b58
- (_Bool)shouldUseGameControllerSPI:(id)arg1;	// IMP=0x0010000000006aa2
- (oneway void)openDashboardAsRemoteAlertForGame:(id)arg1 hostPID:(int)arg2 deeplink:(id)arg3;	// IMP=0x0010000000006475
- (oneway void)completeGameRecording;	// IMP=0x0010000000006316
- (oneway void)recordGameStart;	// IMP=0x00100000000062d2
- (oneway void)completeMatchRecording:(id)arg1 matchType:(id)arg2;	// IMP=0x0010000000005fee
- (oneway void)recordSharePlayDevices:(id)arg1;	// IMP=0x0010000000005f81
- (oneway void)recordActiveDevices:(id)arg1;	// IMP=0x0010000000005f14
- (oneway void)recordMatchServer:(id)arg1;	// IMP=0x0010000000005ea7
- (oneway void)recordMatchStart:(id)arg1 minPlayers:(id)arg2 maxPlayers:(id)arg3;	// IMP=0x0010000000005cce
- (oneway void)reportMultiplayerActivityMetricsEvent:(id)arg1;	// IMP=0x0010000000005c16
- (oneway void)reportPerformanceMetricsEvent:(id)arg1;	// IMP=0x0010000000005b5e
- (oneway void)reportMetricsEventWithTopic:(id)arg1 shouldFlush:(id)arg2 metricsFields:(id)arg3;	// IMP=0x0010000000005a64
- (oneway void)viewableThresholdWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005785
- (id)ampController;	// IMP=0x001000000000576c
- (oneway void)openSoftwareUpdateSettings;	// IMP=0x0010000000005728
- (oneway void)openICloudSettings;	// IMP=0x00100000000056e4
- (oneway void)deleteCachedImageDataFromSubdirectory:(id)arg1 withFileName:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005248
- (oneway void)loadCachedImageDataFromSubdirectory:(id)arg1 withFileName:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004e9b
- (oneway void)cacheImageData:(id)arg1 inSubdirectory:(id)arg2 withFileName:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000004a32
- (oneway void)requestImageDataForURL:(id)arg1 subdirectory:(id)arg2 fileName:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000493d
- (id)_bagValuesForKeys:(id)arg1;	// IMP=0x00100000000046d8
- (oneway void)getStoreBagValuesForKeys:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000043d7
- (_Bool)requiresAuthentication;	// IMP=0x00100000000043cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
