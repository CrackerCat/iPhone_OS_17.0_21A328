//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FMFindingUI/ARSessionObserver-Protocol.h>
#import <FMFindingUI/SCNSceneRendererDelegate-Protocol.h>

@class ARAnchor, SCNNode;
@protocol SCNSceneRenderer;

@protocol ARSCNViewDelegate <SCNSceneRendererDelegate, ARSessionObserver>

@optional
- (void)renderer:(id <SCNSceneRenderer>)arg1 didRemoveNode:(SCNNode *)arg2 forAnchor:(ARAnchor *)arg3;
- (void)renderer:(id <SCNSceneRenderer>)arg1 didUpdateNode:(SCNNode *)arg2 forAnchor:(ARAnchor *)arg3;
- (void)renderer:(id <SCNSceneRenderer>)arg1 willUpdateNode:(SCNNode *)arg2 forAnchor:(ARAnchor *)arg3;
- (void)renderer:(id <SCNSceneRenderer>)arg1 didAddNode:(SCNNode *)arg2 forAnchor:(ARAnchor *)arg3;
- (SCNNode *)renderer:(id <SCNSceneRenderer>)arg1 nodeForAnchor:(ARAnchor *)arg2;
@end
