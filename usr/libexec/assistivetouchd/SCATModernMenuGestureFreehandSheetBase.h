//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol SCATModernMenuGestureFreehandSheetDelegate;

@interface SCATModernMenuGestureFreehandSheetBase
{
    id <SCATModernMenuGestureFreehandSheetDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000bf001
@property(nonatomic) __weak id <SCATModernMenuGestureFreehandSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (Class)_menuItemClass;	// IMP=0x00100000000befc3
- (void)didChangeOrientation;	// IMP=0x00100000000bee4c
- (id)elementProvider;	// IMP=0x00100000000bec4a
- (void)setMenuItems:(id)arg1;	// IMP=0x00100000000bea9e
- (void)menuItem:(id)arg1 didBecomeFocused:(_Bool)arg2;	// IMP=0x00100000000be9a7
- (void)menuItemWasActivated:(id)arg1;	// IMP=0x00100000000be5de
- (_Bool)delegatesScannerControl;	// IMP=0x00000000000be5d6
- (unsigned long long)presentationMode;	// IMP=0x00100000000be5cb
- (_Bool)shouldKeepScannerAwake;	// IMP=0x00100000000be5c3
- (_Bool)shouldUpdateMenuItem:(id)arg1;	// IMP=0x00100000000be1cb
- (id)_titleForLocalizableString:(id)arg1 state:(_Bool)arg2;	// IMP=0x00100000000be138
- (id)_imageNameForPrefix:(id)arg1;	// IMP=0x00100000000be087
- (_Bool)isLandscape;	// IMP=0x00100000000be03c
- (void)pushFreehandSheetOfClass:(Class)arg1;	// IMP=0x00100000000bdf6f
- (id)autoPressLiftItems;	// IMP=0x00100000000bdd98
- (id)moveToolbarMenuItem;	// IMP=0x00100000000bdd24
- (id)touchToggleMenuItemWithPreferredNumberOfLines:(unsigned long long)arg1;	// IMP=0x00100000000bdcbf
- (id)bendMenuItemWithPreferredNumberOfLines:(unsigned long long)arg1;	// IMP=0x00100000000bdc20
- (id)rotateMenuItemWithPreferredNumberOfLines:(unsigned long long)arg1;	// IMP=0x00100000000bdb81
- (id)moveMenuItemWithPreferredNumberOfLines:(unsigned long long)arg1;	// IMP=0x00100000000bdae2
- (id)pathMenuItems;	// IMP=0x00100000000bd9f3
- (_Bool)shouldUpdateItemsOnOrientationChange;	// IMP=0x00100000000bd9eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
