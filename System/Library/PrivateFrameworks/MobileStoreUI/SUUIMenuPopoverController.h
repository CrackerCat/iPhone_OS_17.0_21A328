//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SUUIMenuViewController, UIPopoverController;
@protocol SUUIMenuPopoverDelegate;

__attribute__((visibility("hidden")))
@interface SUUIMenuPopoverController : NSObject
{
    id <SUUIMenuPopoverDelegate> _delegate;	// 8 = 0x8
    SUUIMenuViewController *_menuViewController;	// 16 = 0x10
    UIPopoverController *_popoverController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001322b
@property(nonatomic) __weak id <SUUIMenuPopoverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_destroyPopoverController;	// IMP=0x000000000001319d
- (void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;	// IMP=0x0000000000013106
- (void)popoverControllerDidDismissPopover:(id)arg1;	// IMP=0x0000000000013075
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;	// IMP=0x0000000000012fe3
- (void)presentFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;	// IMP=0x0000000000012e79
@property(readonly, nonatomic) NSArray *menuTitles;
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x0000000000012e06
- (void)dealloc;	// IMP=0x0000000000012da7
- (id)initWithMenuTitles:(id)arg1 selectedIndex:(long long)arg2;	// IMP=0x0000000000012cf4
- (id)initWithMenuTitles:(id)arg1;	// IMP=0x0000000000012cdb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
