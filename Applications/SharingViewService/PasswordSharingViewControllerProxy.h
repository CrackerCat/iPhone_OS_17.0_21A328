//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSObject, NSString, NSUUID, PasswordSharingAuthViewController, PasswordSharingDoneViewController, PasswordSharingStartViewController, SFDeviceDiscovery, SFPasswordSharingSession, SVSCommonNavController, UIStoryboard;
@protocol OS_dispatch_source;

@interface PasswordSharingViewControllerProxy
{
    SFDeviceDiscovery *_deviceDiscovery;	// 24 = 0x18
    NSUUID *_deviceIdentifier;	// 32 = 0x20
    _Bool _dismissed;	// 40 = 0x28
    _Bool _missingAck;	// 41 = 0x29
    SFPasswordSharingSession *_passwordSession;	// 48 = 0x30
    _Bool _passwordSent;	// 56 = 0x38
    NSString *_peerContactID;	// 64 = 0x40
    UIStoryboard *_storyboard;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_touchDelayTimer;	// 80 = 0x50
    PasswordSharingAuthViewController *_vcAuth;	// 88 = 0x58
    PasswordSharingDoneViewController *_vcDone;	// 96 = 0x60
    SVSCommonNavController *_vcNav;	// 104 = 0x68
    PasswordSharingStartViewController *_vcStart;	// 112 = 0x70
    NSDate *_visibleClock;	// 120 = 0x78
    _Bool _autoGrant;	// 128 = 0x80
    _Bool _hotspot;	// 129 = 0x81
    _Bool _displayNameIsDevice;	// 130 = 0x82
    _Bool _touchDelayActive;	// 131 = 0x83
    int _shareState;	// 132 = 0x84
    int _testMode;	// 136 = 0x88
    NSDate *_clock;	// 144 = 0x90
    NSString *_peerDisplayName;	// 152 = 0x98
    NSString *_requestSSID;	// 160 = 0xa0
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x004000000017b3b4
- (void).cxx_destruct;	// IMP=0x002000000017af04
@property(nonatomic) _Bool touchDelayActive; // @synthesize touchDelayActive=_touchDelayActive;
@property(nonatomic) int testMode; // @synthesize testMode=_testMode;
@property(nonatomic) int shareState; // @synthesize shareState=_shareState;
@property(retain, nonatomic) NSString *requestSSID; // @synthesize requestSSID=_requestSSID;
@property(nonatomic) _Bool displayNameIsDevice; // @synthesize displayNameIsDevice=_displayNameIsDevice;
@property(retain, nonatomic) NSString *peerDisplayName; // @synthesize peerDisplayName=_peerDisplayName;
@property(nonatomic) _Bool hotspot; // @synthesize hotspot=_hotspot;
- (_Bool);	// IMP=0x001000000017ae1a
@property(retain, nonatomic) NSDate *clock; // @synthesize clock=_clock;
@property(nonatomic) _Bool autoGrant; // @synthesize autoGrant=_autoGrant;
- (void)handleButtonActions:(id)arg1;	// IMP=0x001000000017ac78
- (void)showAuthUIWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2 animated:(_Bool)arg3;	// IMP=0x001000000017ac54
- (void)_sessionHandleProgress:(unsigned int)arg1 info:(id)arg2;	// IMP=0x001000000017a9cd
- (void)_sessionStart;	// IMP=0x001000000017a523
- (void)_handleDeviceNoLongerNeedsPassword;	// IMP=0x001000000017a456
- (void)_deviceLost:(id)arg1;	// IMP=0x001000000017a350
- (void)_deviceFound:(id)arg1;	// IMP=0x001000000017a11d
- (void)_deviceDiscoveryEnsureStarted;	// IMP=0x0010000000179fce
- (void)showDoneUI:(int)arg1;	// IMP=0x0010000000179a68
- (void)ensureStoppedWithDismiss:(_Bool)arg1 reason:(int)arg2;	// IMP=0x0010000000179910
- (void)ensureStoppedWithDismiss:(_Bool)arg1;	// IMP=0x00100000001798f9
- (void)dismiss:(int)arg1;	// IMP=0x001000000017965c
- (void)invalidateTouchDelayTimer;	// IMP=0x001000000017951e
- (void)activateTouchDelayTimer;	// IMP=0x0010000000179318
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000017921e
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000178f8f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000178a6d
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00100000001789a5
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001784ca

@end
