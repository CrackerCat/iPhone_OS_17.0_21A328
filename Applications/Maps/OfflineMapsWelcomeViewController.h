//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class GEOMapRegion, NSString, OfflineMapsWelcomeSnapshotView;

@interface OfflineMapsWelcomeViewController : UIViewController
{
    CDUnknownBlockType _completion;	// 8 = 0x8
    GEOMapRegion *_mapRegion;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    OfflineMapsWelcomeSnapshotView *_snapshotView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000595170
@property(retain, nonatomic) OfflineMapsWelcomeSnapshotView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
- (_Bool)presentationControllerShouldDismiss:(id)arg1;	// IMP=0x00100000005950f9
- (void)_remindMeLaterPressed;	// IMP=0x0010000000594fcd
- (void)_continuePressed;	// IMP=0x0010000000594d20
- (id)_obViewController;	// IMP=0x0010000000594947
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000594874
- (void)viewDidLoad;	// IMP=0x0010000000594692
- (id)initWithRegion:(id)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000005945ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
