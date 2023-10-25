//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol AKProximityEngineController, OS_dispatch_queue;

@protocol AKProximityEngine <NSObject>
@property(readonly, nonatomic, getter=isActivated) _Bool activated;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property(readonly, nonatomic) __weak id <AKProximityEngineController> controller;
- (void)invalidate;
- (void)activate;
- (void)prepareWithController:(id <AKProximityEngineController>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
@end
