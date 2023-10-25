//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIRedeemStepViewController.h"

@class SUUIRedeem;

__attribute__((visibility("hidden")))
@interface SUUIRedeemResultsViewController : SUUIRedeemStepViewController
{
    SUUIRedeem *_redeem;	// 8 = 0x8
    long long _redeemCategory;	// 16 = 0x10
}

+ (id)redeemResultsControllerForRedeem:(id)arg1;	// IMP=0x00600000003801f9
+ (_Bool)canShowResultsForRedeem:(id)arg1;	// IMP=0x006000000038016f
- (void).cxx_destruct;	// IMP=0x00000000003808fb
@property(nonatomic) long long redeemCategory; // @synthesize redeemCategory=_redeemCategory;
@property(retain, nonatomic) SUUIRedeem *redeem; // @synthesize redeem=_redeem;
- (void)_doneAction:(id)arg1;	// IMP=0x0000000000380620
- (void)viewDidLoad;	// IMP=0x00000000003804b6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003804a8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000038049a
- (id)initWithRedeem:(id)arg1;	// IMP=0x00000000003803c7

@end
