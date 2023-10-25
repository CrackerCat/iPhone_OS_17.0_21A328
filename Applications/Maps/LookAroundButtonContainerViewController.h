//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CardView, MISSING_TYPE, MKLookAroundContainerView, MKMapItem, NSArray, UIButton;
@protocol LookAroundButtonContainerViewControllerDelegate;

@interface LookAroundButtonContainerViewController
{
    CardView *_cardView;	// 8 = 0x8
    UIButton *_lookAroundButton;	// 16 = 0x10
    MKLookAroundContainerView *_lookAroundContainerView;	// 24 = 0x18
    _Bool _expanded;	// 32 = 0x20
    NSArray *_constraints;	// 40 = 0x28
    long long _animationCount;	// 48 = 0x30
    id <LookAroundButtonContainerViewControllerDelegate> _delegate;	// 56 = 0x38
    MISSING_TYPE *_mapItem;	// 64 = 0x40
    unsigned long long _containerStyle;	// 72 = 0x48
}

+ (_Bool)isIncompleteMapItem:(id)arg1;	// IMP=0x00400000005b0cfe
+ (double)expandedHeight;	// IMP=0x00100000005b0cc6
+ (struct CGSize)sizeForPreviewSize:(long long)arg1;	// IMP=0x00100000005b0c8a
+ (long long)previewSizeWithContainerStyle:(unsigned long long)arg1;	// IMP=0x00100000005b0b4d
- (void).cxx_destruct;	// IMP=0x00200000005b0df7
@property(nonatomic) unsigned long long containerStyle; // @synthesize containerStyle=_containerStyle;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) __weak id <LookAroundButtonContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tappedLookAroundPreview:(id)arg1;	// IMP=0x00100000005b0acb
- (void)tappedLookAroundButton:(id)arg1;	// IMP=0x00100000005b0a6e
- (id)_buttonTintColorForExpanded:(_Bool)arg1;	// IMP=0x00100000005b0a27
- (struct CGAffineTransform)_collapsedPreviewTransform;	// IMP=0x00100000005b0881
- (struct CGAffineTransform)_expandedButtonTransform;	// IMP=0x00100000005b0739
- (struct CGSize)_previewSize;	// IMP=0x00100000005b06e1
- (struct CGSize)_buttonSize;	// IMP=0x00100000005b06d0
- (void)_updateBadgeLayout;	// IMP=0x00100000005b065c
- (void)_applyViewPropertiesForState:(long long)arg1;	// IMP=0x00100000005b0219
- (void)_updateConstraints;	// IMP=0x00100000005af815
- (void)_invalidateConstraints;	// IMP=0x00100000005af7cc
- (void)_unloadLookAroundContainerView;	// IMP=0x00100000005af6a8
- (void)_loadLookAroundContainerView;	// IMP=0x00100000005af4b6
- (void)updateLookAroundViewWithMapItem:(id)arg1 willChangeHidden:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00100000005aef01
- (void)setMapItem:(id)arg1 willChangeHidden:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00100000005aec47
- (void)viewDidLoad;	// IMP=0x00100000005ae9a4
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000005ae99c

@end
