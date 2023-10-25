//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADPeerConnection, CLLocationManager, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ADPeerLocationRemote : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADPeerConnection *_peerConnection;	// 16 = 0x10
    CLLocationManager *_locationManager;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_bestLocationTimer;	// 32 = 0x20
    CDUnknownBlockType _bestLocationCompletion;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000107d5e
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x0010000000107cd9
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x0010000000107c54
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x0010000000107ac2
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000001079fb
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0010000000107929
- (void)peerConnection:(id)arg1 handlePBSubclass:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000107845
- (void)_executeBestLocationCompletionWithLocationErrorWithCode:(long long)arg1;	// IMP=0x00100000001077dc
- (void)_executeBestLocationCompletionWithLocation:(id)arg1;	// IMP=0x00100000001077c8
- (void)_executeBestLocationCompletionWithLocation:(id)arg1 error:(id)arg2;	// IMP=0x00100000001074bf
- (void)_getBestLocationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000107432
- (_Bool)_hasActiveBestLocationRequest;	// IMP=0x0010000000107424
- (void)_startUpdatingLocation;	// IMP=0x0010000000107363
- (void)_cancelBestLocationTimer;	// IMP=0x00100000001072ac
- (void)_startBestLocationTimer;	// IMP=0x001000000010718a
- (id)_locationManager;	// IMP=0x00100000001070e2
- (void)dealloc;	// IMP=0x00100000001070a4
- (id)init;	// IMP=0x0010000000106fc7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
