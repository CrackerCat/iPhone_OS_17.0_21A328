//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSArray;

@interface _TtC4Maps39CarEVChargingAvailabilityViewController : UIViewController
{
    MISSING_TYPE *viewModal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x004000000014a230
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000014a1d0
- (void)configureForModalPresentation;	// IMP=0x001000000014a0a0
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) NSArray *focusOrderSubItems;
- (void)evChargingViewModelDidUpdate:(id)arg1;	// IMP=0x0010000000149eb0
- (void)viewDidLoad;	// IMP=0x0010000000149dd0
- (void)loadView;	// IMP=0x0010000000149480
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001493c0
- (id)initWithViewModal:(id)arg1;	// IMP=0x0010000000149330

@end
