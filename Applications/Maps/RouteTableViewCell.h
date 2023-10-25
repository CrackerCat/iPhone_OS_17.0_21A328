//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, MapsLargerHitTargetButton, NSLayoutAnchor, NSLayoutConstraint, Route, RouteTableViewCellButtonConstraintsController, _MKUILabel;
@protocol RouteTableViewCellDelegate;

@interface RouteTableViewCell
{
    _MKUILabel *_primaryLabel;	// 8 = 0x8
    _MKUILabel *_secondaryLabel;	// 16 = 0x10
    NSLayoutConstraint *_leftPaddingConstraint;	// 24 = 0x18
    NSLayoutConstraint *_secondaryLabelToContentViewConstraint;	// 32 = 0x20
    NSLayoutConstraint *_primaryToTopViewConstraint;	// 40 = 0x28
    NSLayoutConstraint *_secondaryToPrimaryConstraint;	// 48 = 0x30
    NSLayoutConstraint *_secondaryLabelToBottomConstraint;	// 56 = 0x38
    _Bool _useRoutePreviewDescription;	// 64 = 0x40
    _Bool __maps_shouldHaveFullLengthBottomSeparator;	// 65 = 0x41
    _Bool _showDisclosureButton;	// 66 = 0x42
    Route *_route;	// 72 = 0x48
    MapsLargerHitTargetButton *_disclosureButton;	// 80 = 0x50
    RouteTableViewCellButtonConstraintsController *_buttonConstraintsController;	// 88 = 0x58
    id <RouteTableViewCellDelegate> _delegate;	// 96 = 0x60
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00400000006b1d54
+ (MISSING_TYPE *)estimatedHeight;	// IMP=0x00100000006b18a3
+ (id)reuseIdentifier;	// IMP=0x00100000006b1899
- (void).cxx_destruct;	// IMP=0x00200000006b305d
@property(nonatomic) __weak id <RouteTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) RouteTableViewCellButtonConstraintsController *buttonConstraintsController; // @synthesize buttonConstraintsController=_buttonConstraintsController;
@property(nonatomic) _Bool showDisclosureButton; // @synthesize showDisclosureButton=_showDisclosureButton;
@property(readonly, nonatomic) MapsLargerHitTargetButton *disclosureButton; // @synthesize disclosureButton=_disclosureButton;
@property(nonatomic) _Bool _maps_shouldHaveFullLengthBottomSeparator; // @synthesize _maps_shouldHaveFullLengthBottomSeparator=__maps_shouldHaveFullLengthBottomSeparator;
@property(nonatomic) _Bool useRoutePreviewDescription; // @synthesize useRoutePreviewDescription=_useRoutePreviewDescription;
@property(retain, nonatomic) Route *route; // @synthesize route=_route;
- (void)_disclosureButtonTapped:(id)arg1;	// IMP=0x00100000006b2f81
@property(readonly, nonatomic) RouteTableViewCellButtonConstraintsController *_buttonConstraintsController;
- (id)_disclosureButtonFont;	// IMP=0x00100000006b2e6c
- (id)_disclosureButton;	// IMP=0x00100000006b2cf0
- (void)setSeparatorInset:(struct UIEdgeInsets)arg1;	// IMP=0x00100000006b2b6b
- (void)_setShouldHaveFullLengthBottomSeparator:(_Bool)arg1;	// IMP=0x00100000006b2b0b
- (void)_updateCellLabels;	// IMP=0x00100000006b273c
- (void)_updateFonts;	// IMP=0x00100000006b25d8
- (void)_localeDidChange:(id)arg1;	// IMP=0x00100000006b25c6
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00100000006b258b
@property(readonly, nonatomic) double _distanceToPositionPrimaryLabelFirstBaseline;
@property(readonly, nonatomic) NSLayoutAnchor *_anchorFromWhichToPositionPrimaryLabelFirstBaseline;
- (void)_updateConstraintValues;	// IMP=0x00100000006b2311
- (id)_autolayoutConstraints;	// IMP=0x00100000006b1d5c
- (void)didMoveToWindow;	// IMP=0x00100000006b1d13
- (void)_createSubviews;	// IMP=0x00100000006b1b0d
- (void)dealloc;	// IMP=0x00100000006b1a98
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000006b1988
- (id)init;	// IMP=0x00100000006b192b

@end
