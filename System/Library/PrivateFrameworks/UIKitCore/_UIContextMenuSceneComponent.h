//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, UIScene;

__attribute__((visibility("hidden")))
@interface _UIContextMenuSceneComponent : NSObject
{
    UIScene *_scene;	// 8 = 0x8
    NSMutableSet *_activePresentations;	// 16 = 0x10
}

+ (id)sceneComponentForView:(id)arg1;	// IMP=0x0010000000f5854f
- (void).cxx_destruct;	// IMP=0x0000000000f5860e
@property(retain, nonatomic) NSMutableSet *activePresentations; // @synthesize activePresentations=_activePresentations;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (void)dismissActiveMenus;	// IMP=0x0000000000f58420
- (void)removePresentation:(id)arg1;	// IMP=0x0000000000f583b7
- (void)registerPresentation:(id)arg1;	// IMP=0x0000000000f5834e
- (id)initWithScene:(id)arg1;	// IMP=0x0000000000f5820d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
