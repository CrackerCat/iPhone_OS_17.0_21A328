//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class EKDayOccurrenceView, EKEvent, EKUIVisualEffectView, NSMutableArray, NSMutableDictionary, NSString, UIColor, UILabel, UIScrollView;
@protocol EKDayAllDayViewDelegate;

__attribute__((visibility("hidden")))
@interface EKDayAllDayView : UIView
{
    long long _orientation;	// 8 = 0x8
    NSMutableArray *_occurrenceViews;	// 16 = 0x10
    UILabel *_allDay;	// 24 = 0x18
    _Bool _allDayLabelHighlighted;	// 32 = 0x20
    UIScrollView *_scroller;	// 40 = 0x28
    double _occurrenceInset;	// 48 = 0x30
    _Bool _allowSelection;	// 56 = 0x38
    _Bool _showSelection;	// 57 = 0x39
    EKEvent *_selectedEvent;	// 64 = 0x40
    _Bool _usesSmallText;	// 72 = 0x48
    _Bool _smallTextSettingLocked;	// 73 = 0x49
    _Bool _showBirthdayCount;	// 74 = 0x4a
    long long _birthdayCount;	// 80 = 0x50
    long long _targetSizeClass;	// 88 = 0x58
    UIView *_dividerLineViewTop;	// 96 = 0x60
    UIView *_dividerLineViewBottom;	// 104 = 0x68
    EKUIVisualEffectView *_dividerLineSuperview;	// 112 = 0x70
    UIColor *_dividerLineVisualEffectColor;	// 120 = 0x78
    EKDayOccurrenceView *_birthdayCountOccurrenceView;	// 128 = 0x80
    NSMutableDictionary *_temporaryViewCache;	// 136 = 0x88
    _Bool _showsBorderLines;	// 144 = 0x90
    _Bool _showsLabel;	// 145 = 0x91
    _Bool _hideOccurrenceBackground;	// 146 = 0x92
    _Bool _forceSingleColumnLayout;	// 147 = 0x93
    int _maxVisibleRows;	// 148 = 0x94
    id <EKDayAllDayViewDelegate> _delegate;	// 152 = 0x98
    double _fixedHeight;	// 160 = 0xa0
    EKEvent *_dimmedOccurrence;	// 168 = 0xa8
}

+ (id)allDayLabelBoldFont;	// IMP=0x00100000001730a1
+ (id)allDayLabelFont;	// IMP=0x0010000000172ff7
+ (id)unscaledAllDayFont;	// IMP=0x0010000000172fd6
- (void).cxx_destruct;	// IMP=0x0000000000177498
@property(retain, nonatomic) EKEvent *dimmedOccurrence; // @synthesize dimmedOccurrence=_dimmedOccurrence;
@property(nonatomic) int maxVisibleRows; // @synthesize maxVisibleRows=_maxVisibleRows;
@property(nonatomic) double fixedHeight; // @synthesize fixedHeight=_fixedHeight;
@property(nonatomic) _Bool forceSingleColumnLayout; // @synthesize forceSingleColumnLayout=_forceSingleColumnLayout;
@property(nonatomic) _Bool hideOccurrenceBackground; // @synthesize hideOccurrenceBackground=_hideOccurrenceBackground;
@property(nonatomic) _Bool showsLabel; // @synthesize showsLabel=_showsLabel;
@property(nonatomic) _Bool showsBorderLines; // @synthesize showsBorderLines=_showsBorderLines;
@property(nonatomic) __weak id <EKDayAllDayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2;	// IMP=0x000000000017737d
- (void)setDividerLineVisualEffect:(id)arg1;	// IMP=0x00000000001771b1
- (void)updateLabelFont;	// IMP=0x000000000017712d
- (void)setTopBorderLineHidden:(_Bool)arg1;	// IMP=0x00000000001770dc
- (void)setBorderColor:(id)arg1;	// IMP=0x000000000017706f
- (void)setAllDayLabelColor:(id)arg1;	// IMP=0x0000000000176ec7
- (_Bool)isAllDayLabelHighlighted;	// IMP=0x0000000000176eb7
- (void)setAllDayLabelHighlighted:(_Bool)arg1;	// IMP=0x0000000000176ccf
@property(readonly, nonatomic) double naturalHeight;
- (double)_height;	// IMP=0x0000000000176bb8
- (void)attemptDisplayReviewPrompt;	// IMP=0x0000000000176b1e
- (id)selectedEventsForEditMenu;	// IMP=0x0000000000176ad8
- (id)presentationControllerForEditMenu;	// IMP=0x0000000000176a92
- (void)dayOccurrenceViewSelected:(id)arg1 source:(unsigned long long)arg2;	// IMP=0x00000000001769c8
@property(nonatomic) _Bool showsSelection;
@property(nonatomic) _Bool allowsOccurrenceSelection;
- (id)occurrenceViews;	// IMP=0x00000000001768bc
@property(nonatomic) _Bool showBirthdayCountInsteadOfEvents;
- (void)_setUpBirthdayCountViewIfNeeded;	// IMP=0x0000000000176410
- (void)_clearTemporaryViews;	// IMP=0x00000000001762b2
- (void)_saveTemporaryViews;	// IMP=0x00000000001760c4
- (void)setOccurrences:(id)arg1;	// IMP=0x0000000000175aa0
- (void)_configureOccurrenceViewMarginAndPadding:(id)arg1;	// IMP=0x0000000000175975
- (void)configureOccurrenceViewForGestureController:(id)arg1;	// IMP=0x0000000000175789
- (double)_borderLineWidth;	// IMP=0x0000000000175777
- (double)_allDayAreaHeightForEventCount:(long long)arg1;	// IMP=0x00000000001754f2
- (double)_languageAwareAllDayEventHeight:(id)arg1;	// IMP=0x0000000000175406
- (void)removeAllOccurrenceViews;	// IMP=0x00000000001752ac
- (void)_smallTextSettingChanged;	// IMP=0x00000000001751f3
- (void)setOrientation:(long long)arg1;	// IMP=0x00000000001751b4
- (void)lockUseOfSmallTextToState:(_Bool)arg1;	// IMP=0x000000000017518d
- (void)setOccurrenceInset:(double)arg1 labelInset:(double)arg2;	// IMP=0x0000000000174fca
- (void)selectEvent:(id)arg1;	// IMP=0x0000000000174e19
- (id)selectedEvent;	// IMP=0x0000000000174e04
- (_Bool)containsEvent:(id)arg1;	// IMP=0x0000000000174c57
- (void)addViewToScroller:(id)arg1;	// IMP=0x0000000000174b15
- (double)nextAvailableOccurrenceViewYOrigin;	// IMP=0x0000000000174a3f
- (id)occurrenceViewForEvent:(id)arg1;	// IMP=0x0000000000174873
- (long long)_sizeClass;	// IMP=0x0000000000174827
- (double)firstEventYOffset;	// IMP=0x0000000000174819
- (void)didMoveToWindow;	// IMP=0x00000000001747fa
- (void)layoutSubviews;	// IMP=0x0000000000173699
- (id)_findSelectedCopySubviewOfView:(id)arg1;	// IMP=0x000000000017351c
- (id)_selectedCopyView;	// IMP=0x00000000001734c7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000017349f
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001733b6
- (id)initWithFrame:(struct CGRect)arg1 sizeClass:(long long)arg2;	// IMP=0x0000000000173162
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000017314b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
