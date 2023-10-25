//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSString, PUSlideshowMediaItem, PUSlideshowSettingsViewControllerSpec, UITableView;
@protocol PUSlideshowMusicDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowMusicViewController : UIViewController
{
    NSArray *_mediaItems;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    PUSlideshowSettingsViewControllerSpec *_spec;	// 24 = 0x18
    _Bool _shouldHideTableViewWhenViewWillDisappear;	// 32 = 0x20
    _Bool __needsUpdateSpec;	// 33 = 0x21
    _Bool __needsUpdateBackgroundView;	// 34 = 0x22
    _Bool __needsUpdateTableView;	// 35 = 0x23
    PUSlideshowMediaItem *_currentMediaItem;	// 40 = 0x28
    id <PUSlideshowMusicDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000051b261
@property(nonatomic, setter=_setNeedsUpdateTableView:) _Bool _needsUpdateTableView; // @synthesize _needsUpdateTableView=__needsUpdateTableView;
@property(nonatomic, setter=_setNeedsUpdateBackgroundView:) _Bool _needsUpdateBackgroundView; // @synthesize _needsUpdateBackgroundView=__needsUpdateBackgroundView;
@property(nonatomic, setter=_setNeedsUpdateSpec:) _Bool _needsUpdateSpec; // @synthesize _needsUpdateSpec=__needsUpdateSpec;
@property(nonatomic) __weak id <PUSlideshowMusicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PUSlideshowMediaItem *currentMediaItem; // @synthesize currentMediaItem=_currentMediaItem;
- (_Bool)pu_wantsNavigationBarVisible;	// IMP=0x000000000051b1bb
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000051b13f
- (void)mediaPickerDidCancel:(id)arg1;	// IMP=0x000000000051b125
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;	// IMP=0x000000000051b05e
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000000051af38
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000051af27
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000051ad5b
- (void)_didPickMediaItem:(id)arg1;	// IMP=0x000000000051acb2
- (void)_didFinish;	// IMP=0x000000000051ac01
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000051a8eb
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000051a8c2
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000051a8b7
- (void)_updateTableViewIfNeeded;	// IMP=0x000000000051a866
- (void)_updateBackgroundViewIfNeeded;	// IMP=0x000000000051a7d9
- (void)_updateSpecIfNeeded;	// IMP=0x000000000051a6da
- (void)_updateIfNeeded;	// IMP=0x000000000051a60b
- (void)_invalidateTableView;	// IMP=0x000000000051a5d8
- (void)_invalidateBackgroundView;	// IMP=0x000000000051a5a5
- (void)_invalidateSpec;	// IMP=0x000000000051a572
- (void)_setNeedsUpdate;	// IMP=0x000000000051a56c
- (_Bool)_needsUpdate;	// IMP=0x000000000051a533
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000051a4dd
- (void)viewDidLayoutSubviews;	// IMP=0x000000000051a366
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000051a265
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000051a1bf
- (void)viewDidLoad;	// IMP=0x000000000051a022
- (void)dealloc;	// IMP=0x0000000000519fd6
- (id)init;	// IMP=0x0000000000519f22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
