//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonViewController.h"

@class AMSUIErrorView, NSError, NSString;
@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSUICommonErrorViewController : AMSUICommonViewController
{
    NSString *_logKey;	// 8 = 0x8
    id <AMSBagProtocol> _bag;	// 16 = 0x10
    CDUnknownBlockType _cancelAction;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    AMSUIErrorView *_errorView;	// 40 = 0x28
    CDUnknownBlockType _retryAction;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000024b5a
@property(copy, nonatomic) CDUnknownBlockType retryAction; // @synthesize retryAction=_retryAction;
@property(retain, nonatomic) AMSUIErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType cancelAction; // @synthesize cancelAction=_cancelAction;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
- (void)_setup;	// IMP=0x0000000000024344
- (void)_cancelButtonAction;	// IMP=0x0000000000024311
- (void)_showCancelButton;	// IMP=0x00000000000241bc
- (void)_setupNavigationItem;	// IMP=0x000000000002403b
- (id)navigationItem;	// IMP=0x0000000000023f4a
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000023e81
- (void)viewDidLoad;	// IMP=0x0000000000023e40
- (void)loadView;	// IMP=0x0000000000023da9
- (id)initWithError:(id)arg1 logKey:(id)arg2 bag:(id)arg3 retryAction:(CDUnknownBlockType)arg4 cancelAction:(CDUnknownBlockType)arg5;	// IMP=0x0000000000023c75

@end
