//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_$s12GameCenterUI18BaseViewControllerCN.h"

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI31AchievementDetailViewController : _$s12GameCenterUI18BaseViewControllerCN
{
    MISSING_TYPE *bootstrapPresenter;	// 48 = 0x30
    MISSING_TYPE *selectedAchievement;	// 56 = 0x38
    MISSING_TYPE *hostingController;	// 64 = 0x40
    MISSING_TYPE *pageMetricsPresenter;	// 72 = 0x48
    MISSING_TYPE *achievement;	// 80 = 0x50
    MISSING_TYPE *pageContext;	// 88 = 0x58
    MISSING_TYPE *currentTheme;	// 89 = 0x59
    MISSING_TYPE *loadWithCustomDetent;	// 90 = 0x5a
}

- (void).cxx_destruct;	// IMP=0x00000000004ee85a
- (id)init;	// IMP=0x00000000004ee7c8
- (void)showAppStoreProductPage:(id)arg1;	// IMP=0x00000000004ee75b
- (void)lockupViewDidFinishRequest:(id)arg1;	// IMP=0x00000000004ee2ce
- (id)presentingViewControllerForLockupView:(id)arg1;	// IMP=0x00000000004ee079
- (void)didTapDone;	// IMP=0x00000000004ee042
- (void)shareButtonPressed;	// IMP=0x00000000004ee002
- (void)updateThePreferredSheetDetents;	// IMP=0x00000000004edd4c
- (void)viewIsAppearing:(_Bool)arg1;	// IMP=0x00000000004eda93
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000004eda29
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000004ed95b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000004ed8e1
- (void)viewDidLoad;	// IMP=0x00000000004ed863
- (id)contentScrollViewForEdge:(unsigned long long)arg1;	// IMP=0x00000000004ed18d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004ed145

@end
