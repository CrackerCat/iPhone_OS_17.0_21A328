//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@protocol TSProxyContainerProvider
@property(readonly, copy, nonatomic) NSArray *assemblies;
@property(readonly, copy, nonatomic) NSArray *bundleAssemblies;
- (id)createCarPlaySceneContainer;
- (id)createSceneContainer;
@end
