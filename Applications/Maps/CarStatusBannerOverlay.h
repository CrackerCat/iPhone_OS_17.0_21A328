//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarChromeViewController, CarStatusBannerLabel, NSArray, NSLayoutConstraint, NSString, UIView;
@protocol CarStatusBannerDelegate, ChromeOverlayHosting;

@interface CarStatusBannerOverlay : NSObject
{
    UIView *_containerView;	// 8 = 0x8
    NSLayoutConstraint *_heightConstraint;	// 16 = 0x10
    CarStatusBannerLabel *_titleLabel;	// 24 = 0x18
    CarChromeViewController *_chromeVC;	// 32 = 0x20
    id <ChromeOverlayHosting> _host;	// 40 = 0x28
    id <CarStatusBannerDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000242c4d
@property(nonatomic) __weak id <CarStatusBannerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ChromeOverlayHosting> host; // @synthesize host=_host;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (void)_reloadContent;	// IMP=0x0010000000242aec
- (void)_tappedLabel;	// IMP=0x0010000000242aaf
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000002428a5
@property(nonatomic, getter=isHidden) _Bool hidden;
- (void)reloadAnimated:(_Bool)arg1;	// IMP=0x0010000000242799
- (void)setContentView:(id)arg1 layoutGuide:(id)arg2;	// IMP=0x0010000000242102
- (void)dealloc;	// IMP=0x0010000000241f84
- (id)initWithChromeViewController:(id)arg1;	// IMP=0x0010000000241f19

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
