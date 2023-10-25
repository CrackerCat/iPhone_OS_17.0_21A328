//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLSensorRecorderAlmanacListener : NSObject
{
    int _subscriptionType;	// 8 = 0x8
    void *_notifier;	// 16 = 0x10
}

@property int subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property void *notifier; // @synthesize notifier=_notifier;
- (void)sensorWriter:(id)arg1 didReceiveUpdateToConfigurationRequests:(id)arg2;	// IMP=0x0010000000d26c0f
- (id)classNameForSensorIdentifier:(id)arg1;	// IMP=0x0010000000d26b8f
- (void)sensorWriterWillStartMonitoring:(id)arg1;	// IMP=0x0010000000d2660d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
