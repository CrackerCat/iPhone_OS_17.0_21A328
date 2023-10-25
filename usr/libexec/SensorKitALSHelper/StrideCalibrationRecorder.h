//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RDLaunchEvents, SRSensorWriter;
@protocol OS_dispatch_queue;

@interface StrideCalibrationRecorder : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    RDLaunchEvents *_launchEvents;	// 16 = 0x10
    SRSensorWriter *_sensorWriter;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x00200000000050b6
- (void)launchEventRunActivity:(id)arg1;	// IMP=0x00200000000053a4
- (void)sensorWriterDidStopMonitoring:(id)arg1;	// IMP=0x00100000000052e3
- (void)sensorWriterWillStartMonitoring:(id)arg1;	// IMP=0x0010000000005227
- (void)dealloc;	// IMP=0x00100000000051c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
