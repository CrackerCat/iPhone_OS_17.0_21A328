//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPDocument, CPPage, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPObject : NSObject
{
    CPObject *parent;	// 8 = 0x8
    NSMutableArray *children;	// 16 = 0x10
    CPDocument *document;	// 24 = 0x18
    CPPage *page;	// 32 = 0x20
    long long zOrder;	// 40 = 0x28
}

- (int)depth;	// IMP=0x0000000000068e8b
- (id)page;	// IMP=0x0000000000068e2e
- (void)setPage:(id)arg1;	// IMP=0x0000000000068e24
- (id)firstDescendantsOfClass:(Class)arg1;	// IMP=0x0000000000068d24
- (void)clearCachedInfo;	// IMP=0x0000000000068d07
- (void)setZOrder:(long long)arg1;	// IMP=0x0000000000068cfd
- (void)updateZOrder:(long long)arg1;	// IMP=0x0000000000068cd6
- (void)recomputeZOrder;	// IMP=0x0000000000068c11
- (long long)zOrder;	// IMP=0x0000000000068c07
- (id)document;	// IMP=0x0000000000068bfd
- (void)setDocument:(id)arg1;	// IMP=0x0000000000068b7e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000068b4f
- (unsigned long long)indexOf:(id)arg1;	// IMP=0x0000000000068b39
- (void)accept:(id)arg1;	// IMP=0x0000000000068b33
- (unsigned int)countOfFirstDescendantsOfClass:(Class)arg1;	// IMP=0x0000000000068a72
- (id)lastDescendantOfClass:(Class)arg1;	// IMP=0x00000000000689da
- (id)firstDescendantOfClass:(Class)arg1;	// IMP=0x000000000006893b
- (id)descendantsOfClass:(Class)arg1 omitTraversing:(Class)arg2;	// IMP=0x0000000000068818
- (id)shallowDescendantsOfClass:(Class)arg1;	// IMP=0x0000000000068804
- (id)descendantsOfClass:(Class)arg1;	// IMP=0x00000000000687ed
- (void)descendantsOfClass:(Class)arg1 to:(id)arg2;	// IMP=0x0000000000068742
- (id)descendantsOfClass:(Class)arg1 deep:(_Bool)arg2;	// IMP=0x0000000000068650
- (id)children;	// IMP=0x0000000000068646
- (void)map:(SEL)arg1 target:(id)arg2 last:(_Bool)arg3;	// IMP=0x00000000000685cc
- (void)map:(SEL)arg1 target:(id)arg2;	// IMP=0x000000000006855f
- (void)mapSafely:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3;	// IMP=0x0000000000068456
- (void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3;	// IMP=0x00000000000683fe
- (void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 last:(_Bool)arg4;	// IMP=0x000000000006839b
- (void)commonMapFuncCall:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 ofCount:(int)arg4;	// IMP=0x0000000000068322
- (void)performSelector:(SEL)arg1;	// IMP=0x000000000006830c
- (id)childrenNotOfClass:(Class)arg1;	// IMP=0x0000000000068257
- (id)childrenOfClass:(Class)arg1;	// IMP=0x00000000000681a2
- (void)childrenOfClass:(Class)arg1 into:(id)arg2;	// IMP=0x0000000000068110
- (id)ancestorOfClass:(Class)arg1;	// IMP=0x00000000000680c9
- (void)promoteChildren;	// IMP=0x000000000006802d
- (void)removeAll;	// IMP=0x0000000000068004
- (void)removeObjectAtIndex:(unsigned int)arg1;	// IMP=0x0000000000067fb0
- (void)remove;	// IMP=0x0000000000067f90
- (void)removeLastChild;	// IMP=0x0000000000067f40
- (void)removeFirstChild;	// IMP=0x0000000000067eee
- (void)remove:(id)arg1;	// IMP=0x0000000000067eab
- (void)addChildrenOf:(id)arg1;	// IMP=0x0000000000067de5
- (void)addChildren:(id)arg1;	// IMP=0x0000000000067d70
- (void)add:(id)arg1 atIndex:(unsigned int)arg2;	// IMP=0x0000000000067ce0
- (void)add:(id)arg1;	// IMP=0x0000000000067c6e
- (id)firstSibling;	// IMP=0x0000000000067c25
- (id)lastSibling;	// IMP=0x0000000000067bde
- (id)previousSibling;	// IMP=0x0000000000067b69
- (id)nextSibling;	// IMP=0x0000000000067ad7
- (id)lastChild;	// IMP=0x0000000000067a9a
- (id)firstChild;	// IMP=0x0000000000067a59
- (id)childAtIndex:(unsigned int)arg1;	// IMP=0x0000000000067a41
- (unsigned int)countOfClass:(Class)arg1;	// IMP=0x00000000000679c4
- (unsigned int)count;	// IMP=0x00000000000679ae
- (id)parent;	// IMP=0x00000000000679a4
- (void)setParent:(id)arg1;	// IMP=0x000000000006799a
- (id)newTakeChildrenAmong:(id)arg1;	// IMP=0x0000000000067849
- (id)newTakeChildren;	// IMP=0x00000000000677bd
- (id)copyAndSplitChildrenAtIndex:(unsigned int)arg1;	// IMP=0x00000000000676d2
- (id)copyWithoutChildren;	// IMP=0x00000000000676a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006756b
- (void)disposeDescendants;	// IMP=0x00000000000674c1
- (void)dealloc;	// IMP=0x0000000000067425
- (id)initSuper;	// IMP=0x00000000000673f6
- (id)init;	// IMP=0x00000000000673a3
- (void)print;	// IMP=0x0000000000180edf
- (void)_printWithIndent:(int)arg1;	// IMP=0x0000000000180cc7

@end
