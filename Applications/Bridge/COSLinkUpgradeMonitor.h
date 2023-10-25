//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTimer;

@interface COSLinkUpgradeMonitor : NSObject
{
    _Bool _observingLinkChange;	// 8 = 0x8
    _Bool _wirelessCredentialsExchangeComplete;	// 9 = 0x9
    _Bool _initialPropertyExchangeComplete;	// 10 = 0xa
    _Bool _updatedNRToEnterNormalState;	// 11 = 0xb
    _Bool _backupRestoreStepComplete;	// 12 = 0xc
    _Bool _softwareUpdateStateResolved;	// 13 = 0xd
    _Bool _waitingForAWDLupgradeTimeout;	// 14 = 0xe
    _Bool _pendingLinkUpgradeRequest;	// 15 = 0xf
    _Bool _everConnectedOnAWDL;	// 16 = 0x10
    NSTimer *_awdlUpgradeTimeoutTimer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000013a003
@property(nonatomic) _Bool everConnectedOnAWDL; // @synthesize everConnectedOnAWDL=_everConnectedOnAWDL;
@property(nonatomic) _Bool pendingLinkUpgradeRequest; // @synthesize pendingLinkUpgradeRequest=_pendingLinkUpgradeRequest;
@property(nonatomic) _Bool waitingForAWDLupgradeTimeout; // @synthesize waitingForAWDLupgradeTimeout=_waitingForAWDLupgradeTimeout;
@property(retain, nonatomic) NSTimer *awdlUpgradeTimeoutTimer; // @synthesize awdlUpgradeTimeoutTimer=_awdlUpgradeTimeoutTimer;
@property(nonatomic) _Bool softwareUpdateStateResolved; // @synthesize softwareUpdateStateResolved=_softwareUpdateStateResolved;
@property(nonatomic) _Bool backupRestoreStepComplete; // @synthesize backupRestoreStepComplete=_backupRestoreStepComplete;
@property(nonatomic) _Bool updatedNRToEnterNormalState; // @synthesize updatedNRToEnterNormalState=_updatedNRToEnterNormalState;
@property(nonatomic) _Bool initialPropertyExchangeComplete; // @synthesize initialPropertyExchangeComplete=_initialPropertyExchangeComplete;
@property(nonatomic) _Bool wirelessCredentialsExchangeComplete; // @synthesize wirelessCredentialsExchangeComplete=_wirelessCredentialsExchangeComplete;
@property(nonatomic) _Bool observingLinkChange; // @synthesize observingLinkChange=_observingLinkChange;
- (void)indicateSoftwareUpdateStateResolved;	// IMP=0x0010000000139f30
- (void)indicateBackupRestoreStepCompleted;	// IMP=0x0010000000139f1a
- (void)_updateNanoRegistryToNormalStateIfNeeded;	// IMP=0x0010000000139f14
- (void)resetMonitor;	// IMP=0x0010000000139f0e
- (void)wirelessCredentialUpdateCompletedWithResult:(_Bool)arg1;	// IMP=0x0010000000139f08
- (void)_performLinkUpgradeToInfraWiFi;	// IMP=0x0010000000139f02
- (void)_awdlUpgradeTimedout;	// IMP=0x0010000000139efc
- (void)_updateCompanionLinkPreferenceToAWDLforBTUUID:(id)arg1;	// IMP=0x0010000000139ef6
- (void)_sendWirelessCredentialsToWatch;	// IMP=0x0010000000139cc4
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;	// IMP=0x0010000000139a47
- (void)resetCompanionLinkPreference;	// IMP=0x0010000000139a41
- (void)_onInitialPropertyExchangeComplete;	// IMP=0x0010000000139987
- (void)_enteredCompatibilityState:(id)arg1;	// IMP=0x001000000013981f
- (void)requestLinkUpgrade;	// IMP=0x0010000000139819

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
