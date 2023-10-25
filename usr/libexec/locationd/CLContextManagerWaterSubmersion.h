//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLTimer, CLWaterTemperatureEstimator;

@interface CLContextManagerWaterSubmersion
{
    double _lastPressureTimestampSaved;	// 152 = 0x98
    CLWaterTemperatureEstimator *_tempEstimator;	// 160 = 0xa0
    CLTimer *_forceGPSTimer;	// 168 = 0xa8
    struct unique_ptr<CLPowerAssertion, std::default_delete<CLPowerAssertion>> _powerAssertionGPS;	// 176 = 0xb0
    struct unique_ptr<CLLocationController_Type::Client, std::default_delete<CLLocationController_Type::Client>> _locationControllerClient;	// 184 = 0xb8
    _Bool _forcingGPS;	// 192 = 0xc0
    double _calibrationTimeOffset;	// 200 = 0xc8
}

+ (double)calculateDepthFromPressure:(double)arg1 withSurfacePressure:(double)arg2;	// IMP=0x00400000006662d9
- (id).cxx_construct;	// IMP=0x0020000000666345
- (void).cxx_destruct;	// IMP=0x00100000006662f3
- (void)onEnableEasySubmersion:(_Bool)arg1;	// IMP=0x001000000066610d
- (void)onCharger:(_Bool)arg1;	// IMP=0x0010000000665f3d
- (void)retrieveCachedSubmersionState;	// IMP=0x0010000000665e21
- (void)retrieveCachedSurfacePressure;	// IMP=0x00100000006659b1
- (void)saveCachedSurfacePressure:(shared_ptr_1d90f2b7)arg1;	// IMP=0x0010000000665772
- (void)setTimerForGPSOff;	// IMP=0x001000000066574d
- (void)onForcedLocationNotificationSub:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0010000000665747
- (void)forceGPSIfSurfaceCalStale;	// IMP=0x0010000000665144
- (void)sendSurfacePressureToAOP:(shared_ptr_1d90f2b7)arg1;	// IMP=0x00100000006650ff
- (float)calculateFilterSurfaceCal:(deque_14119af9)arg1 withSuccess:(_Bool *)arg2;	// IMP=0x0010000000663e24
- (void)updateSurfaceCalWithSource:(unsigned long long)arg1 andPressureQueue:(deque_14119af9)arg2;	// IMP=0x00100000006634b0
- (void)sourceUpdated:(unsigned long long)arg1;	// IMP=0x0010000000662c2c
- (void)setUpGPSSubscriptionForSurfaceCal;	// IMP=0x0010000000662914
- (void)clientConnected:(id)arg1 withNotification:(unsigned long long)arg2;	// IMP=0x00100000006628c6
- (void)dealloc;	// IMP=0x0010000000662813
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 withBuffer:(void *)arg3 withSourceAggregator:(id)arg4;	// IMP=0x00100000006624d6

@end
