//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _MKSpatialColliderPairSet;

__attribute__((visibility("hidden")))
@interface MKSpatialCollider : NSObject
{
    long long _options;	// 8 = 0x8
    _MKSpatialColliderPairSet *_previousCollisionPairs;	// 16 = 0x10
    _MKSpatialColliderPairSet *_registeredCollisonPairs;	// 24 = 0x18
    _Bool _isVertical;	// 32 = 0x20
    struct vector<MKAnnotationView *, std::allocator<MKAnnotationView *>> _sortedAnnotationViews;	// 40 = 0x28
    double _maxLength;	// 64 = 0x40
    unsigned long long mutator;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x0000000000191127
- (void).cxx_destruct;	// IMP=0x000000000019110b
- (id)registeredCollissions;	// IMP=0x00000000001910f4
- (id)viewsCollidingWithAnnotationView:(id)arg1 inCollidableList:(_Bool)arg2 fromIndex:(long long)arg3 length:(double)arg4;	// IMP=0x00000000001907ce
- (id)viewsCollidingWithAnnotationViewAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000190758
- (id)viewsCollidingWithAnnotationView:(id)arg1 inCollidableList:(_Bool)arg2;	// IMP=0x00000000001905f1
- (unsigned long long)insertAnnotationView:(id)arg1;	// IMP=0x00000000001902d1
- (id)annotationViewAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001902c3
- (unsigned long long)viewCount;	// IMP=0x00000000001902b1
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000019027f
- (void)dealloc;	// IMP=0x0000000000190235
- (id)initWithAnnotationViews:(id)arg1 previousCollissions:(id)arg2 options:(long long)arg3;	// IMP=0x000000000018fe3a

@end
