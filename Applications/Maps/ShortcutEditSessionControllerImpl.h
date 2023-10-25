//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AddShortcutViewController, CNContact, CNLabeledValue, ContainerViewController, EditLocationViewController, EditShortcutViewController, MISSING_TYPE, MeCardShortcutViewController, NSString, RAPPersonalPlaceRefinementCoordinator, ShortcutEditSession, UIPopoverPresentationController, UIViewController;
@protocol ContaineeProtocol, ShortcutEditSessionControllerDelegate;

@interface ShortcutEditSessionControllerImpl : NSObject
{
    AddShortcutViewController *_addShortcutViewController;	// 8 = 0x8
    EditShortcutViewController *_editShortcutViewController;	// 16 = 0x10
    EditLocationViewController *_refineCoordinateViewController;	// 24 = 0x18
    MeCardShortcutViewController *_meCardSetupViewController;	// 32 = 0x20
    UIViewController<ContaineeProtocol> *_presentingViewController;	// 40 = 0x28
    ShortcutEditSession *_shortcutEditSession;	// 48 = 0x30
    RAPPersonalPlaceRefinementCoordinator *_homeWorkCoordinator;	// 56 = 0x38
    CNContact *_meCardContact;	// 64 = 0x40
    CNLabeledValue *_addressToAdd;	// 72 = 0x48
    UIPopoverPresentationController *_popoverPresentationController;	// 80 = 0x50
    id <ShortcutEditSessionControllerDelegate> _delegate;	// 88 = 0x58
    ContainerViewController *_containerViewController;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000007ec8e9
@property(nonatomic) __weak ContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak id <ShortcutEditSessionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentationControllerWillDismiss:(id)arg1;	// IMP=0x00100000007ec87d
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;	// IMP=0x00100000007ec66d
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x00100000007ec5f7
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;	// IMP=0x00100000007ec157
- (void)presentChoicePickerFrom:(id)arg1;	// IMP=0x00100000007ebcb2
- (void)_presentContactVC:(id)arg1;	// IMP=0x00100000007ebad5
- (void)_showContactPicker;	// IMP=0x00100000007eba59
- (MISSING_TYPE *)_showContactCard: /* Error: Ran out of types for this method. */;	// IMP=0x00100000007eb998
- (void)_createNewContactCard;	// IMP=0x00100000007eb8a8
- (void)showMeCardWithAddress:(id)arg1 from:(id)arg2;	// IMP=0x00100000007eb661
- (void)showMeCard;	// IMP=0x00100000007eb421
@property(readonly, nonatomic) CNContact *meCardContact;
- (void)closeViewController:(id)arg1;	// IMP=0x00100000007eb2ba
- (void)endSession;	// IMP=0x00100000007eb214
- (void)removeShortcut:(id)arg1;	// IMP=0x00100000007eb147
- (void)_presentViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3;	// IMP=0x00100000007eaee1
- (void)editShortcut:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3;	// IMP=0x00100000007eabe2
- (void)editShortcut:(id)arg1;	// IMP=0x00100000007eabae
- (void)addFavoriteButtonShortcut:(id)arg1;	// IMP=0x00100000007eaa81
- (void)showAddContact:(id)arg1;	// IMP=0x00100000007ea9b3
- (void)_meCard_showAddShortcut:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3;	// IMP=0x00100000007ea8a9
- (void)showAddShortcut:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3;	// IMP=0x00100000007ea1fa
- (void)showAddShortcut:(id)arg1;	// IMP=0x00100000007ea1c6
- (void)_doneLocationRefinement;	// IMP=0x00100000007ea0a7
- (void)_closeLocationRefinement;	// IMP=0x00100000007e9f7c
- (void)showRefineLocation:(id)arg1;	// IMP=0x00100000007e9e85
- (void)refinementCoordinatorDidComplete:(id)arg1;	// IMP=0x00100000007e9e6f
- (void)refinementCoordinator:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00100000007e9cbf
- (void)refinementCoordinator:(id)arg1 finishedRefiningCoordinate:(struct CLLocationCoordinate2D)arg2 withShortcut:(id)arg3;	// IMP=0x00100000007e9b15
- (void)refinementCoordinatorRequestsChangeAddress:(id)arg1 withShortcut:(id)arg2;	// IMP=0x00100000007e9a54
- (void)capturePresenter;	// IMP=0x00100000007e99fd
- (_Bool)shortcutsContainItem:(id)arg1;	// IMP=0x00100000007e99e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
