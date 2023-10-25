//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class AXMChartDescriptor, UIViewController;

@interface AXSBUIAudiographRootViewController : SBUIRemoteAlertServiceViewController
{
    AXMChartDescriptor *_chartDescriptor;	// 8 = 0x8
    UIViewController *_hostingController;	// 16 = 0x10
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0020000000015c85
- (void).cxx_destruct;	// IMP=0x002000000001634e
@property(retain, nonatomic) UIViewController *hostingController; // @synthesize hostingController=_hostingController;
@property(retain, nonatomic) AXMChartDescriptor *chartDescriptor; // @synthesize chartDescriptor=_chartDescriptor;
- (_Bool)accessibilityPostScreenChangedForChildViewController:(id)arg1 isAddition:(_Bool)arg2;	// IMP=0x00100000000162fc
- (void)_setupRemoteProxy;	// IMP=0x0010000000016265
- (void)dismiss;	// IMP=0x00100000000161d6
- (void)toggleAudiographPlaybackState:(id)arg1;	// IMP=0x001000000001616b
- (void)selectedSeriesChanged:(id)arg1;	// IMP=0x0010000000016100
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000015e99
- (void)viewDidLoad;	// IMP=0x0010000000015dc5
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015c9f
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015c8d

@end
