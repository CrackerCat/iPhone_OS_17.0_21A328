//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, ODDAlgorithm, ODDPoint, ODDShape;

__attribute__((visibility("hidden")))
@interface ODILayoutNode : NSObject
{
    ODDPoint *mPoint;	// 8 = 0x8
    ODDAlgorithm *mAlgorithm;	// 16 = 0x10
    ODDShape *mShape;	// 24 = 0x18
    NSMutableArray *mChildren;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000033fa2e
- (id)initWithLayoutNode:(id)arg1 point:(id)arg2;	// IMP=0x000000000033f994
- (void)processShape:(id)arg1 state:(struct ODILayoutNodeState *)arg2;	// IMP=0x000000000034005e
- (void)processAlgorithm:(id)arg1 state:(struct ODILayoutNodeState *)arg2;	// IMP=0x000000000034004d
- (void)processForEach:(id)arg1 state:(struct ODILayoutNodeState *)arg2;	// IMP=0x000000000033fe95
- (void)processChoose:(id)arg1 state:(struct ODILayoutNodeState *)arg2;	// IMP=0x000000000033fda4
- (void)processLayoutNode:(id)arg1 state:(struct ODILayoutNodeState *)arg2;	// IMP=0x000000000033fd0e
- (void)processLayoutObjects:(id)arg1 state:(struct ODILayoutNodeState *)arg2;	// IMP=0x000000000033fb6d
- (id)initWithLayoutNode:(id)arg1 state:(struct ODILayoutNodeState *)arg2;	// IMP=0x000000000033fa6c

@end
