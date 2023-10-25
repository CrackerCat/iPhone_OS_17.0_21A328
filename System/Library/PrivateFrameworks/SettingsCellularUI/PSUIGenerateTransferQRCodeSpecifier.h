//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@class NSString, PSListController, TSSIMSetupFlow, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface PSUIGenerateTransferQRCodeSpecifier : PSSpecifier
{
    _Bool _popViewControllerOnPlanDeletion;	// 184 = 0xb8
    PSListController *_hostController;	// 192 = 0xc0
    TSSIMSetupFlow *_flow;	// 200 = 0xc8
    NSString *_iccid;	// 208 = 0xd0
    NSString *_carrierName;	// 216 = 0xd8
    UIActivityIndicatorView *_spinner;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x0000000000075da8
@property(retain) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(readonly, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(readonly, nonatomic) NSString *iccid; // @synthesize iccid=_iccid;
@property(retain) TSSIMSetupFlow *flow; // @synthesize flow=_flow;
@property(nonatomic) _Bool popViewControllerOnPlanDeletion; // @synthesize popViewControllerOnPlanDeletion=_popViewControllerOnPlanDeletion;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
- (id)getLogger;	// IMP=0x0000000000075ccb
- (void)simSetupFlowCompleted:(unsigned long long)arg1;	// IMP=0x0000000000075afa
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000075956
- (void)showSpinner:(_Bool)arg1;	// IMP=0x0000000000075817
- (void)generateTransferQRCodeCellPressed:(id)arg1;	// IMP=0x000000000007540b
- (id)initWithHostController:(id)arg1 iccid:(id)arg2 carrierName:(id)arg3;	// IMP=0x000000000007520d

@end
