//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLCanvasRep, CRLSelectionPath, UIViewController, _TtC8Freeform28CRLiOSMiniFormatterPresenter;

@protocol _TtP8Freeform25CRLMiniFormatterPresenter_
- (UIViewController *)crlaxMiniFormatterViewController;
@property(nonatomic, readonly) _TtC8Freeform28CRLiOSMiniFormatterPresenter *asiOSPresenter;
- (void)dismissPresentedMenus;
@property(nonatomic, readonly) _Bool isPinnedToTopOfRep;
- (void)dismissSecondLayerPopover;
- (void)dismissMiniFormatterForRep:(CRLCanvasRep *)arg1;
- (void)dismissMiniFormatter;
- (void)handleSingleTapOnRep:(CRLCanvasRep *)arg1 withSelectionPath:(CRLSelectionPath *)arg2;
- (void)presentMiniFormatterForSelectionPath:(CRLSelectionPath *)arg1;
@property(nonatomic, readonly) _Bool isPresentingSecondLayerPopover;
@property(nonatomic, readonly) _Bool isPresentingMiniFormatter;
@end
