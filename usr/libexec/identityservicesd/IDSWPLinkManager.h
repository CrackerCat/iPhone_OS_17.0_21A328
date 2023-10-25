//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSWPLinkManagerDelegate, WPContinuity;

@interface IDSWPLinkManager : NSObject
{
    id <WPContinuity> _continuity;	// 8 = 0x8
    _Bool _systemIsFastUserSwitched;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    NSMutableSet *_advertisingTypes;	// 32 = 0x20
    NSMutableSet *_scanningTypes;	// 40 = 0x28
    NSMutableDictionary *_linkIDToLink;	// 48 = 0x30
    NSMutableDictionary *_linkIDsConnecting;	// 56 = 0x38
    NSMutableDictionary *_linkIDsDisconnecting;	// 64 = 0x40
    NSMutableSet *_linkIDsAlwaysConnected;	// 72 = 0x48
    id <IDSWPLinkManagerDelegate> _delegate;	// 80 = 0x50
    NSHashTable *_connectivityDelegates;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x002000000016422f
- (void).cxx_destruct;	// IMP=0x00200000001681ec
- (void)sendReset;	// IMP=0x00100000001681e6
- (unsigned long long)sendData:(id)arg1 peerID:(id)arg2;	// IMP=0x0010000000167f96
- (void)removeLink:(id)arg1;	// IMP=0x0010000000167d69
- (void)disconnectFromPeer:(id)arg1;	// IMP=0x0010000000167c9f
- (void)disconnectOnMainQueueFromPeer:(id)arg1;	// IMP=0x00100000001677b8
- (void)connectToPeer:(id)arg1;	// IMP=0x00100000001676ee
- (void)connectOnMainQueueToPeer:(id)arg1;	// IMP=0x0010000000166e6c
- (void)continuityStopTrackingPeer:(id)arg1 forType:(long long)arg2;	// IMP=0x0010000000166e66
- (void)continuityStartTrackingPeer:(id)arg1 forType:(long long)arg2;	// IMP=0x0010000000166e60
- (void)stopScanningForType:(long long)arg1;	// IMP=0x0010000000166c2d
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 boostedScan:(_Bool)arg4 duplicates:(_Bool)arg5;	// IMP=0x00100000001667f4
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(_Bool)arg5 duplicates:(_Bool)arg6;	// IMP=0x001000000016631b
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3;	// IMP=0x0010000000165f7e
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4;	// IMP=0x0010000000165b14
- (void)stopAdvertisingOfType:(long long)arg1;	// IMP=0x00100000001658e1
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;	// IMP=0x0010000000165565
- (void)clientInstancesRemoved;	// IMP=0x0010000000164f75
- (void)clientInstanceCreatedWithMessageContext:(id)arg1;	// IMP=0x0010000000164cac
- (void)setAlwaysConnectedForCBUUID:(id)arg1;	// IMP=0x0010000000164a75
- (void)removeConnectivityDelegate:(id)arg1;	// IMP=0x0010000000164a5f
- (void)addConnectivityDelegate:(id)arg1;	// IMP=0x0010000000164833
- (_Bool)isScanningOrAdvertising;	// IMP=0x00100000001647d8
- (void)setDelegateOnMainQueue:(id)arg1;	// IMP=0x00100000001647ad
- (void)setDelegate:(id)arg1;	// IMP=0x00100000001646e3
- (void)_checkWPContinuitySetup;	// IMP=0x0010000000164485
- (id)init;	// IMP=0x0010000000164284

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
