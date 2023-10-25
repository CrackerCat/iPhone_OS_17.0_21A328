//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UIEditMenuPresentationServer : NSObject
{
    NSMutableDictionary *_configurations;	// 8 = 0x8
    NSMutableDictionary *_presentations;	// 16 = 0x10
    NSMutableDictionary *_connections;	// 24 = 0x18
}

+ (id)sharedPresentationServer;	// IMP=0x001000000113da04
- (void).cxx_destruct;	// IMP=0x000000000113ea70
@property(retain, nonatomic) NSMutableDictionary *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSMutableDictionary *presentations; // @synthesize presentations=_presentations;
@property(retain, nonatomic) NSMutableDictionary *configurations; // @synthesize configurations=_configurations;
- (void)_editMenuPresentation:(id)arg1 willDismissMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000113e854
- (void)_editMenuPresentation:(id)arg1 willPresentMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000113e734
- (struct CGRect)_editMenuPresentation:(id)arg1 targetRectForConfiguration:(id)arg2;	// IMP=0x000000000113e5bf
- (void)_editMenuPresentation:(id)arg1 didTransitionMenuForConfiguration:(id)arg2;	// IMP=0x000000000113e5b9
- (id)_editMenuPresentation:(id)arg1 titleViewForMenu:(id)arg2 configuration:(id)arg3;	// IMP=0x000000000113e5b1
- (void)_editMenuPresentation:(id)arg1 preparedMenuForDisplay:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000113e35b
- (void)_editMenuPresentation:(id)arg1 didSelectMenuLeaf:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000113df94
- (void)_sendLifecycleEvent:(long long)arg1 forMenuWithIdentifier:(id)arg2;	// IMP=0x000000000113ded3
- (void)updateUserInterfaceStyleForMenuWithIdentifier:(id)arg1 userInterfaceStyle:(long long)arg2;	// IMP=0x000000000113de3d
- (void)replaceEditMenuForIdentifier:(id)arg1 updatedMenu:(id)arg2 reason:(long long)arg3;	// IMP=0x000000000113dd90
- (void)dismissEditMenuForIdentifier:(id)arg1 hideReason:(long long)arg2;	// IMP=0x000000000113dcfa
- (void)presentEditMenuWithConfiguration:(id)arg1 originContext:(id)arg2 inDisplayDelegate:(id)arg3 forConnection:(id)arg4;	// IMP=0x000000000113daf1
- (id)init;	// IMP=0x000000000113da59

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
