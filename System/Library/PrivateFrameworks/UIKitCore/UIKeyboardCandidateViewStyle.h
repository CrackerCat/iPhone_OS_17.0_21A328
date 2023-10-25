//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont, UIImage;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateViewStyle : NSObject
{
    _Bool _arrowButtonBackgroundHidden;	// 8 = 0x8
    _Bool _doNotClipToBounds;	// 9 = 0x9
    _Bool _hasShadow;	// 10 = 0xa
    _Bool _roundsArrowButtonEdge;	// 11 = 0xb
    _Bool _shouldJustifyRow;	// 12 = 0xc
    _Bool _darkBackdrop;	// 13 = 0xd
    _Bool _scrollDisabled;	// 14 = 0xe
    _Bool _dragGestureDisabled;	// 15 = 0xf
    _Bool _allowCandidateGridExpanding;	// 16 = 0x10
    _Bool _showsIndex;	// 17 = 0x11
    _Bool _showExtraLineBeforeFirstRow;	// 18 = 0x12
    _Bool _fillGridWithLines;	// 19 = 0x13
    _Bool _dontSelectLastItemByBackwardMoving;	// 20 = 0x14
    _Bool _showOneMoreCandidate;	// 21 = 0x15
    _Bool _disableSwitchingSortingMethodByTabKey;	// 22 = 0x16
    _Bool _skipInlineCandidate;	// 23 = 0x17
    _Bool _hidesPartialCandidates;	// 24 = 0x18
    UIFont *_candidateFont;	// 32 = 0x20
    UIFont *_supplementalLexiconCandidateFont;	// 40 = 0x28
    UIFont *_annotationTextFont;	// 48 = 0x30
    UIFont *_alternativeTextFont;	// 56 = 0x38
    UIFont *_candidateNumberFont;	// 64 = 0x40
    UIFont *_sortControlFont;	// 72 = 0x48
    UIColor *_textColor;	// 80 = 0x50
    UIColor *_highlightedTextColor;	// 88 = 0x58
    UIColor *_alternativeTextColor;	// 96 = 0x60
    UIColor *_highlightedAlternativeTextColor;	// 104 = 0x68
    UIColor *_candidateNumberColor;	// 112 = 0x70
    UIColor *_highlightedCandidateNumberColor;	// 120 = 0x78
    UIColor *_backgroundColor;	// 128 = 0x80
    UIColor *_cellBackgroundColor;	// 136 = 0x88
    UIColor *_arrowButtonBackgroundColor;	// 144 = 0x90
    UIColor *_arrowButtonColor;	// 152 = 0x98
    UIColor *_gridBackgroundColor;	// 160 = 0xa0
    UIColor *_highlightedBackgroundColor;	// 168 = 0xa8
    UIColor *_highlightedRowBackgroundColor;	// 176 = 0xb0
    UIColor *_groupHeaderBackgroundColor;	// 184 = 0xb8
    UIColor *_transliterationCandidateBackgroundColor;	// 192 = 0xc0
    UIColor *_lineColor;	// 200 = 0xc8
    UIColor *_sortControlColor;	// 208 = 0xd0
    UIColor *_sortControlBackgroundColor;	// 216 = 0xd8
    NSString *_arrowButtonImageName;	// 224 = 0xe0
    UIImage *_cellSeparatorImage;	// 232 = 0xe8
    UIImage *_slottedCellSeparatorImage;	// 240 = 0xf0
    UIImage *_leftEdgeSeparatorImage;	// 248 = 0xf8
    UIImage *_rightEdgeSeparatorImage;	// 256 = 0x100
    UIImage *_arrowButtonSeparatorImage;	// 264 = 0x108
    UIImage *_leftEdgeMaskImage;	// 272 = 0x110
    UIImage *_rightEdgeMaskImage;	// 280 = 0x118
    UIImage *_cellBackgroundImage;	// 288 = 0x120
    UIImage *_highlightedCellBackgroundImage;	// 296 = 0x128
    UIImage *_transliterationCandidateBackgroundImage;	// 304 = 0x130
    double _rowHeight;	// 312 = 0x138
    double _arrowButtonHeight;	// 320 = 0x140
    double _cornerRadius;	// 328 = 0x148
    double _cellCornerRadius;	// 336 = 0x150
    unsigned long long _maskedCorners;	// 344 = 0x158
    unsigned long long _gridMaskedCorners;	// 352 = 0x160
    double _foregroundOpacity;	// 360 = 0x168
    double _backgroundOpacity;	// 368 = 0x170
    long long _layoutOrientation;	// 376 = 0x178
    unsigned long long _columnsCount;	// 384 = 0x180
    unsigned long long _maxNumberOfProactiveCells;	// 392 = 0x188
    double _minimumCellPadding;	// 400 = 0x190
    double _minimumCellWidth;	// 408 = 0x198
    double _minimumInterItemSpacing;	// 416 = 0x1a0
    double _maximumIconWidth;	// 424 = 0x1a8
    double _singleSlottedCellMargin;	// 432 = 0x1b0
    long long _cellTextAlignment;	// 440 = 0x1b8
    long long _alternativeTextAlignment;	// 448 = 0x1c0
    long long _lineBreakMode;	// 456 = 0x1c8
    long long _minimumNumberOfCandidates;	// 464 = 0x1d0
    struct CGPoint _gridLineOffset;	// 472 = 0x1d8
    struct UIEdgeInsets _extraCellPadding;	// 488 = 0x1e8
    struct UIEdgeInsets _arrowButtonPadding;	// 520 = 0x208
    struct UIEdgeInsets _gridPadding;	// 552 = 0x228
    struct UIEdgeInsets _gridLinePadding;	// 584 = 0x248
    struct UIEdgeInsets _sortControlPadding;	// 616 = 0x268
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;	// IMP=0x0010000000aa2cb5
+ (id)tvGridStyleForDarkKeyboard:(_Bool)arg1;	// IMP=0x0010000000aa28b0
+ (id)tvLinearStyleForDarkKeyboard:(_Bool)arg1;	// IMP=0x0010000000aa24de
+ (id)disambiguationStyleForDarkKeyboard:(_Bool)arg1;	// IMP=0x0010000000aa24ac
+ (id)styleForDarkKeyboard:(_Bool)arg1;	// IMP=0x0010000000aa247a
+ (id)darkKeyboardStyleForDisambiguation;	// IMP=0x0010000000aa21f4
+ (id)lightKeyboardStyleForDisambiguation;	// IMP=0x0010000000aa1fbc
+ (id)darkKeyboardStyle;	// IMP=0x0010000000aa1b6b
+ (id)lightKeyboardStyle;	// IMP=0x0010000000aa171a
- (void).cxx_destruct;	// IMP=0x0000000000aa3650
@property(nonatomic) long long minimumNumberOfCandidates; // @synthesize minimumNumberOfCandidates=_minimumNumberOfCandidates;
@property(nonatomic) _Bool hidesPartialCandidates; // @synthesize hidesPartialCandidates=_hidesPartialCandidates;
@property(nonatomic) _Bool skipInlineCandidate; // @synthesize skipInlineCandidate=_skipInlineCandidate;
@property(nonatomic) _Bool disableSwitchingSortingMethodByTabKey; // @synthesize disableSwitchingSortingMethodByTabKey=_disableSwitchingSortingMethodByTabKey;
@property(nonatomic) _Bool showOneMoreCandidate; // @synthesize showOneMoreCandidate=_showOneMoreCandidate;
@property(nonatomic) _Bool dontSelectLastItemByBackwardMoving; // @synthesize dontSelectLastItemByBackwardMoving=_dontSelectLastItemByBackwardMoving;
@property(nonatomic) _Bool fillGridWithLines; // @synthesize fillGridWithLines=_fillGridWithLines;
@property(nonatomic) _Bool showExtraLineBeforeFirstRow; // @synthesize showExtraLineBeforeFirstRow=_showExtraLineBeforeFirstRow;
@property(nonatomic) _Bool showsIndex; // @synthesize showsIndex=_showsIndex;
@property(nonatomic) _Bool allowCandidateGridExpanding; // @synthesize allowCandidateGridExpanding=_allowCandidateGridExpanding;
@property(nonatomic) _Bool dragGestureDisabled; // @synthesize dragGestureDisabled=_dragGestureDisabled;
@property(nonatomic) _Bool scrollDisabled; // @synthesize scrollDisabled=_scrollDisabled;
@property(nonatomic) _Bool darkBackdrop; // @synthesize darkBackdrop=_darkBackdrop;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) long long alternativeTextAlignment; // @synthesize alternativeTextAlignment=_alternativeTextAlignment;
@property(nonatomic) long long cellTextAlignment; // @synthesize cellTextAlignment=_cellTextAlignment;
@property(nonatomic) struct UIEdgeInsets sortControlPadding; // @synthesize sortControlPadding=_sortControlPadding;
@property(nonatomic) struct CGPoint gridLineOffset; // @synthesize gridLineOffset=_gridLineOffset;
@property(nonatomic) struct UIEdgeInsets gridLinePadding; // @synthesize gridLinePadding=_gridLinePadding;
@property(nonatomic) struct UIEdgeInsets gridPadding; // @synthesize gridPadding=_gridPadding;
@property(nonatomic) struct UIEdgeInsets arrowButtonPadding; // @synthesize arrowButtonPadding=_arrowButtonPadding;
@property(nonatomic) struct UIEdgeInsets extraCellPadding; // @synthesize extraCellPadding=_extraCellPadding;
@property(nonatomic) double singleSlottedCellMargin; // @synthesize singleSlottedCellMargin=_singleSlottedCellMargin;
@property(nonatomic) _Bool shouldJustifyRow; // @synthesize shouldJustifyRow=_shouldJustifyRow;
@property(nonatomic) double maximumIconWidth; // @synthesize maximumIconWidth=_maximumIconWidth;
@property(nonatomic) double minimumInterItemSpacing; // @synthesize minimumInterItemSpacing=_minimumInterItemSpacing;
@property(nonatomic) double minimumCellWidth; // @synthesize minimumCellWidth=_minimumCellWidth;
@property(nonatomic) double minimumCellPadding; // @synthesize minimumCellPadding=_minimumCellPadding;
@property(nonatomic) unsigned long long maxNumberOfProactiveCells; // @synthesize maxNumberOfProactiveCells=_maxNumberOfProactiveCells;
@property(nonatomic) unsigned long long columnsCount; // @synthesize columnsCount=_columnsCount;
@property(nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(nonatomic) _Bool roundsArrowButtonEdge; // @synthesize roundsArrowButtonEdge=_roundsArrowButtonEdge;
@property(nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(nonatomic) _Bool doNotClipToBounds; // @synthesize doNotClipToBounds=_doNotClipToBounds;
@property(nonatomic) double backgroundOpacity; // @synthesize backgroundOpacity=_backgroundOpacity;
@property(nonatomic) double foregroundOpacity; // @synthesize foregroundOpacity=_foregroundOpacity;
@property(nonatomic) unsigned long long gridMaskedCorners; // @synthesize gridMaskedCorners=_gridMaskedCorners;
@property(nonatomic) unsigned long long maskedCorners; // @synthesize maskedCorners=_maskedCorners;
@property(nonatomic) double cellCornerRadius; // @synthesize cellCornerRadius=_cellCornerRadius;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double arrowButtonHeight; // @synthesize arrowButtonHeight=_arrowButtonHeight;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(readonly, nonatomic) UIImage *transliterationCandidateBackgroundImage; // @synthesize transliterationCandidateBackgroundImage=_transliterationCandidateBackgroundImage;
@property(retain, nonatomic) UIImage *highlightedCellBackgroundImage; // @synthesize highlightedCellBackgroundImage=_highlightedCellBackgroundImage;
@property(retain, nonatomic) UIImage *cellBackgroundImage; // @synthesize cellBackgroundImage=_cellBackgroundImage;
@property(retain, nonatomic) UIImage *rightEdgeMaskImage; // @synthesize rightEdgeMaskImage=_rightEdgeMaskImage;
@property(retain, nonatomic) UIImage *leftEdgeMaskImage; // @synthesize leftEdgeMaskImage=_leftEdgeMaskImage;
@property(retain, nonatomic) UIImage *arrowButtonSeparatorImage; // @synthesize arrowButtonSeparatorImage=_arrowButtonSeparatorImage;
@property(retain, nonatomic) UIImage *rightEdgeSeparatorImage; // @synthesize rightEdgeSeparatorImage=_rightEdgeSeparatorImage;
@property(retain, nonatomic) UIImage *leftEdgeSeparatorImage; // @synthesize leftEdgeSeparatorImage=_leftEdgeSeparatorImage;
@property(retain, nonatomic) UIImage *slottedCellSeparatorImage; // @synthesize slottedCellSeparatorImage=_slottedCellSeparatorImage;
@property(retain, nonatomic) UIImage *cellSeparatorImage; // @synthesize cellSeparatorImage=_cellSeparatorImage;
@property(copy, nonatomic) NSString *arrowButtonImageName; // @synthesize arrowButtonImageName=_arrowButtonImageName;
@property(retain, nonatomic) UIColor *sortControlBackgroundColor; // @synthesize sortControlBackgroundColor=_sortControlBackgroundColor;
@property(retain, nonatomic) UIColor *sortControlColor; // @synthesize sortControlColor=_sortControlColor;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain, nonatomic) UIColor *transliterationCandidateBackgroundColor; // @synthesize transliterationCandidateBackgroundColor=_transliterationCandidateBackgroundColor;
@property(retain, nonatomic) UIColor *groupHeaderBackgroundColor; // @synthesize groupHeaderBackgroundColor=_groupHeaderBackgroundColor;
@property(retain, nonatomic) UIColor *highlightedRowBackgroundColor; // @synthesize highlightedRowBackgroundColor=_highlightedRowBackgroundColor;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *gridBackgroundColor; // @synthesize gridBackgroundColor=_gridBackgroundColor;
@property(retain, nonatomic) UIColor *arrowButtonColor; // @synthesize arrowButtonColor=_arrowButtonColor;
@property(nonatomic) _Bool arrowButtonBackgroundHidden; // @synthesize arrowButtonBackgroundHidden=_arrowButtonBackgroundHidden;
@property(retain, nonatomic) UIColor *arrowButtonBackgroundColor; // @synthesize arrowButtonBackgroundColor=_arrowButtonBackgroundColor;
@property(retain, nonatomic) UIColor *cellBackgroundColor; // @synthesize cellBackgroundColor=_cellBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *highlightedCandidateNumberColor; // @synthesize highlightedCandidateNumberColor=_highlightedCandidateNumberColor;
@property(retain, nonatomic) UIColor *candidateNumberColor; // @synthesize candidateNumberColor=_candidateNumberColor;
@property(retain, nonatomic) UIColor *highlightedAlternativeTextColor; // @synthesize highlightedAlternativeTextColor=_highlightedAlternativeTextColor;
@property(retain, nonatomic) UIColor *alternativeTextColor; // @synthesize alternativeTextColor=_alternativeTextColor;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *sortControlFont; // @synthesize sortControlFont=_sortControlFont;
@property(retain, nonatomic) UIFont *candidateNumberFont; // @synthesize candidateNumberFont=_candidateNumberFont;
@property(retain, nonatomic) UIFont *alternativeTextFont; // @synthesize alternativeTextFont=_alternativeTextFont;
@property(retain, nonatomic) UIFont *annotationTextFont; // @synthesize annotationTextFont=_annotationTextFont;
@property(retain, nonatomic) UIFont *supplementalLexiconCandidateFont; // @synthesize supplementalLexiconCandidateFont=_supplementalLexiconCandidateFont;
@property(retain, nonatomic) UIFont *candidateFont; // @synthesize candidateFont=_candidateFont;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000aa0e70
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000aa0a45

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
