//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class CALayer, CAPackage, CAStateController, NSArray, NSMutableArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface CKTipKitOnboardingCollectionViewCell : UICollectionViewCell
{
    UIView *_tipUIView;	// 8 = 0x8
    NSArray *_recommendedPinningConversations;	// 16 = 0x10
    CAPackage *_package;	// 24 = 0x18
    CALayer *_packageLayer;	// 32 = 0x20
    CAStateController *_stateController;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    UIView *_micaView;	// 56 = 0x38
    NSArray *_layerNames;	// 64 = 0x40
    NSMutableArray *_avatarViews;	// 72 = 0x48
}

+ (id)reuseIdentifier;	// IMP=0x001000000033239f
- (void).cxx_destruct;	// IMP=0x0000000000332613
@property(retain, nonatomic) NSMutableArray *avatarViews; // @synthesize avatarViews=_avatarViews;
@property(retain, nonatomic) NSArray *layerNames; // @synthesize layerNames=_layerNames;
@property(retain, nonatomic) UIView *micaView; // @synthesize micaView=_micaView;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) CAStateController *stateController; // @synthesize stateController=_stateController;
@property(retain, nonatomic) CALayer *packageLayer; // @synthesize packageLayer=_packageLayer;
@property(retain, nonatomic) CAPackage *package; // @synthesize package=_package;
@property(retain, nonatomic) NSArray *recommendedPinningConversations; // @synthesize recommendedPinningConversations=_recommendedPinningConversations;
@property(retain, nonatomic) UIView *tipUIView; // @synthesize tipUIView=_tipUIView;
- (void)didUpdateContentForAvatarView:(id)arg1;	// IMP=0x00000000003323b4
- (id)presentingViewControllerForAvatarView:(id)arg1;	// IMP=0x00000000003323ac
- (void)stepThroughOnboardingTipAnimationForLayer:(id)arg1;	// IMP=0x000000000033222b
- (void)updateTipAnimationIfNeeded;	// IMP=0x000000000033126c
- (void)setTipUIView:(id)arg1 withRecommendedPinningConversations:(id)arg2;	// IMP=0x00000000003311ae
- (void)resetViews;	// IMP=0x0000000000330fcd
- (void)stopAnimations;	// IMP=0x0000000000330f76
- (void)startAnimations;	// IMP=0x0000000000330f13
- (void)prepareForReuse;	// IMP=0x0000000000330ed5
- (void)didEndDisplaying;	// IMP=0x0000000000330ec3
- (void)willDisplayCell;	// IMP=0x0000000000330eb1
- (void)dealloc;	// IMP=0x0000000000330c09
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000330ba0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
