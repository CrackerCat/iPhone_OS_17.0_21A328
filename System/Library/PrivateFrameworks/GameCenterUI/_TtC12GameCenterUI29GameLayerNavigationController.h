//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI29GameLayerNavigationController : UINavigationController
{
    MISSING_TYPE *showsDoneButton;	// 8 = 0x8
    MISSING_TYPE *doneHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002320a5
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000232057
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;	// IMP=0x000000000023202c
- (void)didTapDone;	// IMP=0x0000000000231fe5
- (_Bool)_requiresCustomPresentationController;	// IMP=0x0000000000231d58
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0000000000231cd8
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000231bab
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000231908
- (void)viewDidLoad;	// IMP=0x00000000002318b0
@property(nonatomic) struct CGSize preferredContentSize;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000023169d
- (id)initWithRootViewController:(id)arg1;	// IMP=0x0000000000231606

@end
