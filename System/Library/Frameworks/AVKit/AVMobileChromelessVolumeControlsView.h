//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVMobileChromelessSlider, AVMobileVolumeChromelessButtonControl, NSString, UIBlurEffect, UIView, UIViewPropertyAnimator;
@protocol AVMobileChromelessVolumeControlsViewDelegate;

__attribute__((visibility("hidden")))
@interface AVMobileChromelessVolumeControlsView
{
    UIView *_volumeControls;	// 8 = 0x8
    UIViewPropertyAnimator *_emphasizedAnimator;	// 16 = 0x10
    UIBlurEffect *_enabledFilledBarViewEffect;	// 24 = 0x18
    UIBlurEffect *_enabledUnfilledBarViewEffect;	// 32 = 0x20
    struct CGRect _sliderShadowPathRect;	// 40 = 0x28
    struct CGRect _buttonShadowPathRect;	// 72 = 0x48
    _Bool _drawsShadow;	// 104 = 0x68
    _Bool _allowsVolumeAdjustment;	// 105 = 0x69
    _Bool _prefersVolumeSliderIncluded;	// 106 = 0x6a
    _Bool _emphasized;	// 107 = 0x6b
    _Bool _mute;	// 108 = 0x6c
    _Bool _volumeSliderHidesWithAlphaChange;	// 109 = 0x6d
    id <AVMobileChromelessVolumeControlsViewDelegate> _delegate;	// 112 = 0x70
    double _volume;	// 120 = 0x78
    AVMobileVolumeChromelessButtonControl *_volumeButton;	// 128 = 0x80
    AVMobileChromelessSlider *_volumeSlider;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000001259cf
@property(retain, nonatomic) AVMobileChromelessSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(retain, nonatomic) AVMobileVolumeChromelessButtonControl *volumeButton; // @synthesize volumeButton=_volumeButton;
@property(nonatomic) _Bool volumeSliderHidesWithAlphaChange; // @synthesize volumeSliderHidesWithAlphaChange=_volumeSliderHidesWithAlphaChange;
@property(readonly, nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic, getter=isMuted) _Bool mute; // @synthesize mute=_mute;
@property(nonatomic, getter=isEmphasized) _Bool emphasized; // @synthesize emphasized=_emphasized;
@property(nonatomic) _Bool prefersVolumeSliderIncluded; // @synthesize prefersVolumeSliderIncluded=_prefersVolumeSliderIncluded;
@property __weak id <AVMobileChromelessVolumeControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isTrackingEnabled) _Bool allowsVolumeAdjustment; // @synthesize allowsVolumeAdjustment=_allowsVolumeAdjustment;
- (void)_volumeSliderValueDidChange;	// IMP=0x000000000012588f
- (void)_updateVolumeButtonIconState;	// IMP=0x000000000012575f
- (void)_setVolume:(double)arg1 forUpdateReason:(unsigned long long)arg2;	// IMP=0x0000000000125722
- (void)_setSliderValue:(double)arg1 forUpdateReason:(unsigned long long)arg2;	// IMP=0x000000000012567a
- (void)_layoutVolumeControlView;	// IMP=0x00000000001255c9
- (void)_handleVolumeControlButtonTap;	// IMP=0x000000000012552c
- (void)sliderDidEndTracking:(id)arg1;	// IMP=0x000000000012548f
- (void)sliderDidBeginTracking:(id)arg1;	// IMP=0x00000000001253f2
- (void)volumeControlButton:(id)arg1 didContinuePanningWithXDelta:(double)arg2;	// IMP=0x00000000001252a8
- (void)volumeControlButtonDidEndPanning:(id)arg1;	// IMP=0x000000000012520b
- (void)volumeControlButtonDidBeginPanning:(id)arg1;	// IMP=0x000000000012516e
- (_Bool)volumeControlButtonCanBeginPanning:(id)arg1;	// IMP=0x000000000012515e
@property(nonatomic) _Bool drawsShadow;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000125076
- (void)layoutSubviews;	// IMP=0x0000000000124b3b
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000124ae6
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001249c6
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000124972
- (void)didMoveToWindow;	// IMP=0x0000000000124850
- (void)setVolume:(double)arg1 forUpdateReason:(unsigned long long)arg2;	// IMP=0x000000000012483e
@property(readonly, nonatomic) _Bool isTracking;
- (id)init;	// IMP=0x0000000000123e45

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
