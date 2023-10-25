//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface SSSScreenshotManager : NSObject
{
    NSMutableArray *_screenshots;	// 8 = 0x8
    NSMutableArray *_environmentDescriptionIdentifiersUIIsInterestedIn;	// 16 = 0x10
    NSMutableArray *_environmentDescriptionIdentifiersGoingAway;	// 24 = 0x18
    NSMutableArray *_environmentDescriptionIdentifiersInActiveDragSession;	// 32 = 0x20
    NSMutableArray *_environmentDescriptionIdentifiersBeingRemoved;	// 40 = 0x28
    NSMutableArray *_environmentDescriptionIdentifiersBeingSaved;	// 48 = 0x30
    NSMutableArray *_imageIdentifierUpdateObservers;	// 56 = 0x38
}

+ (id)sharedScreenshotManager;	// IMP=0x0020000000018347
+ (void)_createTemporarySavingQueue;	// IMP=0x001000000001699b
- (void).cxx_destruct;	// IMP=0x00200000000183cc
@property(readonly, nonatomic) NSArray *environmentDescriptionIdentifiersBeingSaved;
@property(readonly, nonatomic) NSArray *environmentDescriptionIdentifiersBeingRemoved;
@property(readonly, nonatomic) NSArray *environmentDescriptionIdentifiersInActiveDragSession;
- (id)environmentDescriptionIdentifiersGoingAway;	// IMP=0x001000000001830f
@property(readonly, nonatomic) NSArray *environmentDescriptionIdentifiersUIIsInterestedIn;
@property(readonly, nonatomic) NSArray *environmentDescriptionIdentifiersBeingTracked;
- (id)description;	// IMP=0x0010000000017e8b
- (id)init;	// IMP=0x0010000000017d53
- (void)_trackingChanged;	// IMP=0x0010000000017cf9
- (void)_reevaluateTrackingForScreenshotWithEnvironmentDescriptionIdentifier:(id)arg1;	// IMP=0x0010000000017a3e
- (void)performIfNoScreenshotsAreActive:(CDUnknownBlockType)arg1;	// IMP=0x0010000000017a01
- (void)screenshotLeftDragSession:(id)arg1;	// IMP=0x0010000000017975
- (void)screenshotEnteredDragSession:(id)arg1;	// IMP=0x00100000000178ec
- (void)userInterfaceStoppedBeingInterestedInScreenshot:(id)arg1;	// IMP=0x0010000000017860
- (void)userInterfaceWillStopBeingInterestedInScreenshot:(id)arg1;	// IMP=0x00100000000177e4
- (void)userInterfaceBecameInterestedInScreenshot:(id)arg1;	// IMP=0x001000000001775b
- (_Bool)_areAnyScreenshotsActive;	// IMP=0x00100000000175fa
- (_Bool)_screenshotIsBeingRemoved:(id)arg1;	// IMP=0x0010000000017584
- (_Bool)_screenshotIsGoingAway:(id)arg1;	// IMP=0x001000000001750e
- (void)removeTemporaryScreenshotLocation:(id)arg1 deleteOptions:(unsigned long long)arg2;	// IMP=0x0010000000017377
- (void)removeScreenshot:(id)arg1 deleteOptions:(unsigned long long)arg2;	// IMP=0x0010000000016f0d
- (void)saveScreenshotsToTemporaryLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000169eb
- (_Bool)_screenshotIsBeingSaved:(id)arg1;	// IMP=0x0010000000016925
- (void)saveEditsToScreenshotIfNecessary:(id)arg1 inTransition:(_Bool)arg2;	// IMP=0x0010000000015d99
- (void)removeImageIdentifierUpdateObserver:(id)arg1;	// IMP=0x0010000000015d83
- (void)addImageIdentifierUpdateObserver:(id)arg1;	// IMP=0x0010000000015bcf
- (void)processEnvironmentElementDocumentUpdate:(id)arg1;	// IMP=0x0010000000015832
- (_Bool)processEnvironmentElementMetadataUpdate:(id)arg1;	// IMP=0x0010000000015468
- (_Bool)shouldCaptureDocumentForMetadataUpdate:(id)arg1;	// IMP=0x0010000000015199
- (void)processImageIdentifierUpdate:(id)arg1;	// IMP=0x0010000000014edc
- (id)_screenshotWithEnvironmentElementWithIdentifier:(id)arg1;	// IMP=0x0010000000014b90
- (id)_screenshotWithEnvironmentDescriptionIdentifier:(id)arg1;	// IMP=0x001000000001498a
- (id)createScreenshotWithEnvironmentDescription:(id)arg1;	// IMP=0x001000000001491d

@end
