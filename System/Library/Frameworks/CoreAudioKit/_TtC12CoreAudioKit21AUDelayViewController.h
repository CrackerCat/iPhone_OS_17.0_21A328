//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12CoreAudioKit21AUDelayViewController
{
    MISSING_TYPE *headerView;	// 80 = 0x50
    MISSING_TYPE *edgeControlSection;	// 88 = 0x58
    MISSING_TYPE *graphView;	// 96 = 0x60
    MISSING_TYPE *modeControl;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_decimalFormatter;	// 112 = 0x70
    MISSING_TYPE *timeFormatter;	// 120 = 0x78
    MISSING_TYPE *zoomInButton;	// 128 = 0x80
    MISSING_TYPE *zoomOutButton;	// 136 = 0x88
    MISSING_TYPE *mixKnob;	// 144 = 0x90
    MISSING_TYPE *cutoffKnob;	// 152 = 0x98
    MISSING_TYPE *rightWidthConstraint;	// 160 = 0xa0
    MISSING_TYPE *zoomFactor;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000007f510
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007f400
- (id)init;	// IMP=0x000000000007f150
- (void)knobTouchedWithNotification:(id)arg1;	// IMP=0x000000000007e950
- (void)knobValueChangedWithNotification:(id)arg1;	// IMP=0x000000000007e570
- (void)modeControlChanged;	// IMP=0x000000000007d700
- (void)zoomOut;	// IMP=0x000000000007d660
- (void)zoomIn;	// IMP=0x000000000007d590
- (void)auParameterValueChangedWithNotification:(id)arg1;	// IMP=0x000000000007d4e0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000007cf60
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000007cea0
- (void)viewDidLoad;	// IMP=0x000000000007ce70

@end
