//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class AVTimeFormatter, CADisplayLink, CAGradientLayer, MPCPlayerResponse, MPCPlayerResponseItem, MTVisualStylingProvider, NSArray, NSLayoutConstraint, NSString, UILabel, UILayoutGuide, UIView;

__attribute__((visibility("hidden")))
@interface MediaControlsTimeControl : UIControl
{
    NSArray *_defaultConstraints;	// 8 = 0x8
    NSArray *_trackingConstraints;	// 16 = 0x10
    NSArray *_initialConstraints;	// 24 = 0x18
    NSLayoutConstraint *_knobViewXConstraint;	// 32 = 0x20
    CADisplayLink *_displayLink;	// 40 = 0x28
    AVTimeFormatter *_elapsedTimeFormatter;	// 48 = 0x30
    AVTimeFormatter *_remainingTimeFormatter;	// 56 = 0x38
    double _lastRecordedTime;	// 64 = 0x40
    double _currentTimeInTrack;	// 72 = 0x48
    NSString *_elapsedTime;	// 80 = 0x50
    NSString *_remainingTime;	// 88 = 0x58
    _Bool _debugPreviousDisplayLinkPaused;	// 96 = 0x60
    _Bool _transitioning;	// 97 = 0x61
    _Bool _empty;	// 98 = 0x62
    _Bool _timeControlOnScreen;	// 99 = 0x63
    _Bool _currentlyTracking;	// 100 = 0x64
    long long _style;	// 104 = 0x68
    MPCPlayerResponse *_response;	// 112 = 0x70
    MPCPlayerResponseItem *_responseItem;	// 120 = 0x78
    MTVisualStylingProvider *_visualStylingProvider;	// 128 = 0x80
    UIView *_elapsedTrack;	// 136 = 0x88
    UIView *_remainingTrack;	// 144 = 0x90
    UIView *_knobView;	// 152 = 0x98
    UILabel *_elapsedTimeLabel;	// 160 = 0xa0
    UILabel *_remainingTimeLabel;	// 168 = 0xa8
    UILabel *_liveLabel;	// 176 = 0xb0
    UIView *_liveBackground;	// 184 = 0xb8
    CAGradientLayer *_liveBackgroundMask;	// 192 = 0xc0
    UILayoutGuide *_trackLayoutGuide;	// 200 = 0xc8
    double _sliderValue;	// 208 = 0xd0
    CDStruct_fce57115 _durationSnapshot;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000000039d24
@property(nonatomic, getter=isCurrentlyTracking) _Bool currentlyTracking; // @synthesize currentlyTracking=_currentlyTracking;
@property(nonatomic) double sliderValue; // @synthesize sliderValue=_sliderValue;
@property(retain, nonatomic) UILayoutGuide *trackLayoutGuide; // @synthesize trackLayoutGuide=_trackLayoutGuide;
@property(retain, nonatomic) CAGradientLayer *liveBackgroundMask; // @synthesize liveBackgroundMask=_liveBackgroundMask;
@property(retain, nonatomic) UIView *liveBackground; // @synthesize liveBackground=_liveBackground;
@property(retain, nonatomic) UILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(retain, nonatomic) UILabel *remainingTimeLabel; // @synthesize remainingTimeLabel=_remainingTimeLabel;
@property(retain, nonatomic) UILabel *elapsedTimeLabel; // @synthesize elapsedTimeLabel=_elapsedTimeLabel;
@property(retain, nonatomic) UIView *knobView; // @synthesize knobView=_knobView;
@property(retain, nonatomic) UIView *remainingTrack; // @synthesize remainingTrack=_remainingTrack;
@property(retain, nonatomic) UIView *elapsedTrack; // @synthesize elapsedTrack=_elapsedTrack;
@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
@property(nonatomic, getter=isTimeControlOnScreen) _Bool timeControlOnScreen; // @synthesize timeControlOnScreen=_timeControlOnScreen;
@property(nonatomic) CDStruct_fce57115 durationSnapshot; // @synthesize durationSnapshot=_durationSnapshot;
@property(retain, nonatomic) MPCPlayerResponseItem *responseItem; // @synthesize responseItem=_responseItem;
@property(retain, nonatomic) MPCPlayerResponse *response; // @synthesize response=_response;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
- (void)providedStylesDidChangeForProvider:(id)arg1;	// IMP=0x0000000000039a3e
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000039a2c
- (void)updateBackgroundMask;	// IMP=0x00000000000394ae
- (void)invalidateDisplayLinkIfNeeded;	// IMP=0x0000000000039407
- (void)createDisplayLinkIfNeeded;	// IMP=0x000000000003932e
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000039273
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000003926b
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000039199
- (void)_updateDisplayLinkPause;	// IMP=0x0000000000038f0c
- (void)_updateTimeControl;	// IMP=0x0000000000038db1
- (void)_displayLinkTick:(id)arg1;	// IMP=0x0000000000038d9f
- (void)_updateStyle;	// IMP=0x000000000003871d
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000385be
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000003857d
- (void)updateLabelAvoidance;	// IMP=0x000000000003806a
- (void)_updateLabels:(double)arg1 withRemainingDuration:(double)arg2;	// IMP=0x0000000000037e98
- (void)_updateLabels:(CDStruct_fce57115)arg1 withTargetTimestamp:(double)arg2;	// IMP=0x0000000000037e5e
- (void)updateSliderConstraint;	// IMP=0x0000000000037de9
- (void)_updateSliderPosition;	// IMP=0x0000000000037d1c
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000037c1c
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x0000000000037b0e
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000037797
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000375c1
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000374b9
- (void)tintColorDidChange;	// IMP=0x0000000000036e9e
- (void)layoutSubviews;	// IMP=0x0000000000036b0d
- (void)viewDidMoveToSuperview;	// IMP=0x0000000000036acc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000034fd7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
