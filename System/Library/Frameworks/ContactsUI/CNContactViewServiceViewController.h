//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CNContactContentViewController, NSString;

__attribute__((visibility("hidden")))
@interface CNContactViewServiceViewController : UIViewController
{
    CNContactContentViewController *_contactContentVC;	// 8 = 0x8
}

+ (Class)classForContentViewControllerImpl;	// IMP=0x0010000000097108
- (void).cxx_destruct;	// IMP=0x00000000000970f5
@property(retain, nonatomic) CNContactContentViewController *contactContentVC; // @synthesize contactContentVC=_contactContentVC;
- (void)viewDidAppearForContactViewController:(id)arg1;	// IMP=0x00000000000970be
- (void)presentCancelConfirmationAlert;	// IMP=0x0000000000097081
- (void)didExecuteDeleteFromDowntimeWhitelistAction;	// IMP=0x0000000000097044
- (void)didExecuteClearRecentsDataAction;	// IMP=0x0000000000097007
- (void)viewDidAppear;	// IMP=0x0000000000096fca
- (void)didChangePreferredContentSize:(struct CGSize)arg1;	// IMP=0x0000000000096f71
- (void)isPresentingEditingController:(_Bool)arg1;	// IMP=0x0000000000096f27
- (void)isPresentingFullscreen:(_Bool)arg1;	// IMP=0x0000000000096edd
- (void)didDeleteContact:(id)arg1;	// IMP=0x0000000000096e74
- (void)didCompleteWithContact:(id)arg1;	// IMP=0x0000000000096e0b
- (void)updateEditing:(_Bool)arg1 doneButtonEnabled:(_Bool)arg2 doneButtonText:(id)arg3;	// IMP=0x0000000000096d93
- (_Bool)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;	// IMP=0x0000000000096cf1
- (void)viewDidLoad;	// IMP=0x0000000000096c80
- (id)init;	// IMP=0x0000000000096ba5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
