//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface SFFluidCollectionViewReuseRegistration : NSObject
{
    CDUnknownBlockType _viewCreationBlock;	// 8 = 0x8
    NSMutableSet *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000030a07
@property(readonly, nonatomic) NSMutableSet *queue; // @synthesize queue=_queue;
@property(readonly, copy, nonatomic) CDUnknownBlockType viewCreationBlock; // @synthesize viewCreationBlock=_viewCreationBlock;
- (id)initWithViewCreationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030946

@end
