//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXAccessQueue, AXDispatchTimer, AXSSInterDeviceCommunicator, AXSwitchRecipe, AXUIClient, NSMutableSet, NSString, SBSSystemApertureRestrictionService, SCATATVRemoteInputSource, SCATAccessibilityEventInputSource, SCATCameraInputSource, SCATGamepadInputSource, SCATInterDeviceInputSource, SCATKeyboardInputSource, SCATMFIInputSource, SCATMIDIInputSource, SCATRemoteControlInputSource, SCATScreenInputSource;
@protocol BSInvalidatable, SCATInputControllerDelegate;

@interface SCATInputController : NSObject
{
    _Bool _valid;	// 8 = 0x8
    _Bool _isInputHoldEnabled;	// 9 = 0x9
    _Bool _isInputRepeatEnabled;	// 10 = 0xa
    _Bool _isInputCoalesceEnabled;	// 11 = 0xb
    _Bool _hasInitializedInputSources;	// 12 = 0xc
    AXSwitchRecipe *_recipe;	// 16 = 0x10
    SCATKeyboardInputSource *_keyboardInputSource;	// 24 = 0x18
    id <SCATInputControllerDelegate> _delegate;	// 32 = 0x20
    AXAccessQueue *_queue;	// 40 = 0x28
    SCATCameraInputSource *_cameraInputSource;	// 48 = 0x30
    SCATMFIInputSource *_mfiInputSource;	// 56 = 0x38
    SCATScreenInputSource *_screenInputSource;	// 64 = 0x40
    SCATATVRemoteInputSource *_atvRemoteInputSource;	// 72 = 0x48
    SCATMIDIInputSource *_midiInputSource;	// 80 = 0x50
    SCATGamepadInputSource *_gamepadInputSource;	// 88 = 0x58
    SCATRemoteControlInputSource *_remoteControlInputSource;	// 96 = 0x60
    AXSSInterDeviceCommunicator *_interDeviceCommunicator;	// 104 = 0x68
    SCATInterDeviceInputSource *_interDeviceInputSource;	// 112 = 0x70
    SCATAccessibilityEventInputSource *_accessibilityEventInputSource;	// 120 = 0x78
    double _timeIntervalBeforeSendAction;	// 128 = 0x80
    double _timeIntervalBeforeSendLongPressAction;	// 136 = 0x88
    double _timeIntervalBeforeSendRepeatAction;	// 144 = 0x90
    double _timeIntervalBetweenDidSendActions;	// 152 = 0x98
    double _timeIntervalSinceDidSendAction;	// 160 = 0xa0
    AXDispatchTimer *_inputHoldTimer;	// 168 = 0xa8
    AXDispatchTimer *_inputRepeatTimer;	// 176 = 0xb0
    AXDispatchTimer *_inputLongPressTimer;	// 184 = 0xb8
    NSMutableSet *_availableDevices;	// 192 = 0xc0
    SBSSystemApertureRestrictionService *_restrictionService;	// 200 = 0xc8
    id <BSInvalidatable> _systemApertureInvalidatable;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x00200000000741a8
@property(retain, nonatomic) id <BSInvalidatable> systemApertureInvalidatable; // @synthesize systemApertureInvalidatable=_systemApertureInvalidatable;
@property(retain, nonatomic) SBSSystemApertureRestrictionService *restrictionService; // @synthesize restrictionService=_restrictionService;
@property(retain, nonatomic) NSMutableSet *availableDevices; // @synthesize availableDevices=_availableDevices;
@property(nonatomic) _Bool hasInitializedInputSources; // @synthesize hasInitializedInputSources=_hasInitializedInputSources;
@property(retain, nonatomic) AXDispatchTimer *inputLongPressTimer; // @synthesize inputLongPressTimer=_inputLongPressTimer;
@property(retain, nonatomic) AXDispatchTimer *inputRepeatTimer; // @synthesize inputRepeatTimer=_inputRepeatTimer;
@property(retain, nonatomic) AXDispatchTimer *inputHoldTimer; // @synthesize inputHoldTimer=_inputHoldTimer;
@property(nonatomic) _Bool isInputCoalesceEnabled; // @synthesize isInputCoalesceEnabled=_isInputCoalesceEnabled;
@property(nonatomic) _Bool isInputRepeatEnabled; // @synthesize isInputRepeatEnabled=_isInputRepeatEnabled;
@property(nonatomic) _Bool isInputHoldEnabled; // @synthesize isInputHoldEnabled=_isInputHoldEnabled;
@property(nonatomic) double timeIntervalSinceDidSendAction; // @synthesize timeIntervalSinceDidSendAction=_timeIntervalSinceDidSendAction;
@property(nonatomic) double timeIntervalBetweenDidSendActions; // @synthesize timeIntervalBetweenDidSendActions=_timeIntervalBetweenDidSendActions;
@property(nonatomic) double timeIntervalBeforeSendRepeatAction; // @synthesize timeIntervalBeforeSendRepeatAction=_timeIntervalBeforeSendRepeatAction;
@property(nonatomic) double timeIntervalBeforeSendLongPressAction; // @synthesize timeIntervalBeforeSendLongPressAction=_timeIntervalBeforeSendLongPressAction;
@property(nonatomic) double timeIntervalBeforeSendAction; // @synthesize timeIntervalBeforeSendAction=_timeIntervalBeforeSendAction;
@property(retain, nonatomic) SCATAccessibilityEventInputSource *accessibilityEventInputSource; // @synthesize accessibilityEventInputSource=_accessibilityEventInputSource;
@property(retain, nonatomic) SCATInterDeviceInputSource *interDeviceInputSource; // @synthesize interDeviceInputSource=_interDeviceInputSource;
@property(readonly, nonatomic) AXSSInterDeviceCommunicator *interDeviceCommunicator; // @synthesize interDeviceCommunicator=_interDeviceCommunicator;
@property(retain, nonatomic) SCATRemoteControlInputSource *remoteControlInputSource; // @synthesize remoteControlInputSource=_remoteControlInputSource;
@property(retain, nonatomic) SCATGamepadInputSource *gamepadInputSource; // @synthesize gamepadInputSource=_gamepadInputSource;
@property(retain, nonatomic) SCATMIDIInputSource *midiInputSource; // @synthesize midiInputSource=_midiInputSource;
@property(retain, nonatomic) SCATATVRemoteInputSource *atvRemoteInputSource; // @synthesize atvRemoteInputSource=_atvRemoteInputSource;
@property(retain, nonatomic) SCATScreenInputSource *screenInputSource; // @synthesize screenInputSource=_screenInputSource;
@property(retain, nonatomic) SCATMFIInputSource *mfiInputSource; // @synthesize mfiInputSource=_mfiInputSource;
@property(retain, nonatomic) SCATCameraInputSource *cameraInputSource; // @synthesize cameraInputSource=_cameraInputSource;
@property(retain, nonatomic) AXAccessQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <SCATInputControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) SCATKeyboardInputSource *keyboardInputSource; // @synthesize keyboardInputSource=_keyboardInputSource;
@property(retain, nonatomic) AXSwitchRecipe *recipe; // @synthesize recipe=_recipe;
- (void)performSysdiagnose;	// IMP=0x0010000000073e4c
- (void)didReceiveSwitchEvent:(id)arg1 forDeviceWithName:(id)arg2;	// IMP=0x0010000000073dc1
- (void)_invalidateAssertionForSystemApertureInert;	// IMP=0x0010000000073d28
- (void)_restrictSystemApertureLayoutToInert;	// IMP=0x0010000000073c87
- (void)_showState:(id)arg1 forSource:(unsigned long long)arg2;	// IMP=0x0010000000073b80
- (void)_showAlert:(id)arg1 forSource:(unsigned long long)arg2;	// IMP=0x0010000000073a79
- (void)_hideStateForSource:(unsigned long long)arg1;	// IMP=0x0010000000073999
- (void)_hideAlertForSource:(unsigned long long)arg1;	// IMP=0x00100000000738b9
@property(readonly, nonatomic) AXUIClient *userInterfaceClient;
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000737f9
- (void)updateWhetherSwitchConfigurationHasScreenSwitch;	// IMP=0x0010000000073799
- (void)updateWhetherSwitchConfigurationRendersDeviceUnusable;	// IMP=0x00100000000735e9
- (_Bool)_isSwitchWithSource:(id)arg1 isEnabled:(id)arg2;	// IMP=0x00100000000733f3
- (_Bool)isEnabledSwitchWithSource:(id)arg1;	// IMP=0x00100000000733da
- (_Bool)isSwitchWithSource:(id)arg1;	// IMP=0x00100000000733c6
@property(readonly, nonatomic) long long role;
- (id)_allSwitchesInUse;	// IMP=0x0010000000072ed0
- (void)_sharedInit;	// IMP=0x0010000000072570
- (id)initWithInterDeviceCommunicator:(id)arg1;	// IMP=0x00100000000724dc
- (void)dealloc;	// IMP=0x001000000007212e
- (void)_setupInputTimers;	// IMP=0x0010000000072007
- (void)_removeInputTimers;	// IMP=0x0010000000071f59
- (_Bool)_switchConfigurationHasScreenSwitch;	// IMP=0x0010000000071f3d
- (_Bool)_switchConfigurationRendersDeviceUnusable;	// IMP=0x00100000000711e4
- (void)_updateInputSources;	// IMP=0x001000000007112f
- (void)_updateRemoteControlInputSource;	// IMP=0x0010000000071027
- (void)_updateAccessibilityEventInputSource;	// IMP=0x0010000000070e42
- (void)_updateSCNeedsMicrophoneOnLockScreen;	// IMP=0x0010000000070dc6
- (void)_updateInterDeviceInputSource;	// IMP=0x0010000000070cad
- (void)_updateGamepadInputSource;	// IMP=0x0010000000070b75
- (void)_updateScreenInputSource;	// IMP=0x0010000000070a27
- (void)_updateMFIInputSource;	// IMP=0x001000000007093f
- (void)_updateMIDIInputSource;	// IMP=0x0010000000070756
- (void)_updateKeyboardInputSource;	// IMP=0x001000000007061b
- (void)_updateATVRemoteInputSource;	// IMP=0x0010000000070615
- (void)_updateCameraInputSource;	// IMP=0x00100000000704ba
- (void)_removeInputSources;	// IMP=0x001000000006ffce
- (void)_configureMFIAccessoryIfNecessary:(id)arg1;	// IMP=0x001000000006fbab
- (void)remoteControlInputSource:(id)arg1 didReceiveActionWithIdentifier:(long long)arg2 start:(_Bool)arg3 ignoreInputHold:(_Bool)arg4;	// IMP=0x001000000006fb90
- (void)accessibilityEventInputSource:(id)arg1 didReceiveActionWithIdentifier:(long long)arg2 start:(_Bool)arg3 ignoreInputHold:(_Bool)arg4;	// IMP=0x001000000006fb75
- (void)interDeviceInputSource:(id)arg1 didReceiveActionWithIdentifier:(long long)arg2 start:(_Bool)arg3 ignoreInputHold:(_Bool)arg4;	// IMP=0x001000000006fb5a
- (void)screenInputSource:(id)arg1 didReceiveActionWithIdentifier:(long long)arg2 start:(_Bool)arg3 ignoreInputHold:(_Bool)arg4;	// IMP=0x001000000006fb3f
- (void)hardwareInputSource:(id)arg1 didUpdateAvailability:(_Bool)arg2 withDetail:(unsigned long long)arg3;	// IMP=0x001000000006f84a
- (void)hardwareInputSource:(id)arg1 didReceiveActionWithIdentifier:(long long)arg2 start:(_Bool)arg3 ignoreInputHold:(_Bool)arg4;	// IMP=0x001000000006f82f
- (void)cameraInputSource:(id)arg1 didUpdateState:(CDStruct_c305b3b4)arg2;	// IMP=0x001000000006f743
- (void)cameraInputSource:(id)arg1 didUpdateAvailability:(_Bool)arg2 withDetail:(unsigned long long)arg3;	// IMP=0x001000000006f6c4
- (void)cameraInputSource:(id)arg1 didReceiveActionWithIdentifier:(long long)arg2 start:(_Bool)arg3;	// IMP=0x001000000006f6a9
- (void)handleInterDeviceBailOutForInputSource:(id)arg1;	// IMP=0x001000000006f520
- (void)inputSource:(id)arg1 forwardSwitchEvent:(id)arg2;	// IMP=0x001000000006f4b7
- (_Bool)shouldForwardSwitchEventsForInputSource:(id)arg1;	// IMP=0x001000000006f49d
- (void)didEndLongPressForInputSource:(id)arg1;	// IMP=0x001000000006f451
- (void)didBeginLongPressForInputSource:(id)arg1;	// IMP=0x001000000006f405
- (void)_updateIsInputCoalesceEnabled;	// IMP=0x001000000006f3a5
- (void)_updateIsInputRepeatEnabled;	// IMP=0x001000000006f345
- (void)_updateIsInputHoldEnabled;	// IMP=0x001000000006f2e5
- (void)_updateTimeIntervalBetweenDidSendActions;	// IMP=0x001000000006f288
- (void)_updateTimeIntervalBeforeSendRepeatAction;	// IMP=0x001000000006f22b
- (void)_updateTimeIntervalBeforeSendAction;	// IMP=0x001000000006f1ce
- (void)_sendActionWithIdentifier:(long long)arg1;	// IMP=0x001000000006ed84
- (void)_endAction;	// IMP=0x001000000006ed0c
- (void)_didReceiveActionWithIdentifier:(long long)arg1 start:(_Bool)arg2 ignoreInputHold:(_Bool)arg3;	// IMP=0x001000000006eb59
- (_Bool)_handleHoldAtPointForActionIdentifier:(long long)arg1 start:(_Bool)arg2;	// IMP=0x001000000006e87c
- (_Bool)_hasExternalSwitchConfigured;	// IMP=0x001000000006e7e5
- (void)_updateActionsForSource:(id)arg1;	// IMP=0x001000000006e75b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
