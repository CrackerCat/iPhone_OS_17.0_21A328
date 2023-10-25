//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, OKProducerPreset, PUSlideshowMediaItem, PUSlideshowSession, PUSlideshowSettingsViewControllerSpec, PUSlideshowSettingsViewModel, UITableView;
@protocol PUSlideshowSettingsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowSettingsViewController : UIViewController
{
    PUSlideshowSession *_session;	// 8 = 0x8
    PUSlideshowSettingsViewModel *_settingsViewModel;	// 16 = 0x10
    PUSlideshowSettingsViewControllerSpec *_spec;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
    _Bool _shouldHideTableViewWhenViewWillDisappear;	// 40 = 0x28
    _Bool __needsUpdateSpec;	// 41 = 0x29
    _Bool __needsUpdateTableView;	// 42 = 0x2a
    _Bool __needsUpdateNavigationBar;	// 43 = 0x2b
    _Bool __needsUpdatePreset;	// 44 = 0x2c
    _Bool __needsUpdateMediaItem;	// 45 = 0x2d
    _Bool __needsUpdateMusicOn;	// 46 = 0x2e
    id <PUSlideshowSettingsViewControllerDelegate> _delegate;	// 48 = 0x30
    OKProducerPreset *__pendingPreset;	// 56 = 0x38
    PUSlideshowMediaItem *__pendingMediaItem;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000522029
@property(retain, nonatomic, setter=_setPendingMediaItem:) PUSlideshowMediaItem *_pendingMediaItem; // @synthesize _pendingMediaItem=__pendingMediaItem;
@property(retain, nonatomic, setter=_setPendingPreset:) OKProducerPreset *_pendingPreset; // @synthesize _pendingPreset=__pendingPreset;
@property(nonatomic, setter=_setNeedsUpdateMusicOn:) _Bool _needsUpdateMusicOn; // @synthesize _needsUpdateMusicOn=__needsUpdateMusicOn;
@property(nonatomic, setter=_setNeedsUpdateMediaItem:) _Bool _needsUpdateMediaItem; // @synthesize _needsUpdateMediaItem=__needsUpdateMediaItem;
@property(nonatomic, setter=_setNeedsUpdatePreset:) _Bool _needsUpdatePreset; // @synthesize _needsUpdatePreset=__needsUpdatePreset;
@property(nonatomic, setter=_setNeedsUpdateNavigationBar:) _Bool _needsUpdateNavigationBar; // @synthesize _needsUpdateNavigationBar=__needsUpdateNavigationBar;
@property(nonatomic, setter=_setNeedsUpdateTableView:) _Bool _needsUpdateTableView; // @synthesize _needsUpdateTableView=__needsUpdateTableView;
@property(nonatomic, setter=_setNeedsUpdateSpec:) _Bool _needsUpdateSpec; // @synthesize _needsUpdateSpec=__needsUpdateSpec;
@property(nonatomic) __weak id <PUSlideshowSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)PUSlideshowSpeedCell:(id)arg1 stepDurationDidChange:(double)arg2;	// IMP=0x0000000000521ebb
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x0000000000521e6a
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;	// IMP=0x0000000000521e13
- (void)musicPickerDidFinish:(id)arg1;	// IMP=0x0000000000521dc9
- (void)musicPicker:(id)arg1 didPickMediaItem:(id)arg2;	// IMP=0x0000000000521d0b
- (void)themePickerDidFinish:(id)arg1;	// IMP=0x0000000000521cc1
- (void)themePicker:(id)arg1 didPickPreset:(id)arg2;	// IMP=0x0000000000521bfc
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x0000000000521ba5
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000521a30
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000521344
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000521339
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000052132e
- (void)_toggleMusic:(id)arg1;	// IMP=0x00000000005212ba
- (void)_toggleRepeat:(id)arg1;	// IMP=0x0000000000521246
- (void)_didTapDoneButton:(id)arg1;	// IMP=0x0000000000521195
- (void)_synchronizedChangedSettings;	// IMP=0x0000000000520ff9
- (void)_updateMusicOnIfNeeded;	// IMP=0x0000000000520f69
- (void)_updateMediaItemIfNeeded;	// IMP=0x0000000000520ed9
- (void)_updatePresetIfNeeded;	// IMP=0x0000000000520e88
- (void)_updateNavigationBarIfNeeded;	// IMP=0x0000000000520df1
- (void)_updateTableViewIfNeeded;	// IMP=0x0000000000520d07
- (void)_updateSpecIfNeeded;	// IMP=0x0000000000520c08
- (void)_updateIfNeeded;	// IMP=0x0000000000520b12
- (void)_invalidateMusicOn;	// IMP=0x0000000000520adf
- (void)_invalidateMediaItem;	// IMP=0x0000000000520aac
- (void)_invalidatePreset;	// IMP=0x0000000000520a79
- (void)_invalidateNavigationBar;	// IMP=0x0000000000520a46
- (void)_invalidateTableView;	// IMP=0x0000000000520a13
- (void)_invalidateSpec;	// IMP=0x00000000005209e0
- (void)_setNeedsUpdate;	// IMP=0x00000000005209da
- (_Bool)_needsUpdate;	// IMP=0x0000000000520965
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000520817
- (void)viewDidLayoutSubviews;	// IMP=0x00000000005206ff
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000005206ab
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000005205c7
- (void)viewDidLoad;	// IMP=0x0000000000520403
- (void)dealloc;	// IMP=0x0000000000520394
- (id)initWithSession:(id)arg1;	// IMP=0x0000000000520234

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
