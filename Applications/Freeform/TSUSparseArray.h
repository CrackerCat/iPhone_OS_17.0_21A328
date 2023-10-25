//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface TSUSparseArray : NSObject
{
    struct tsuSaPage *_topPage;	// 8 = 0x8
    unsigned long long _nonNilCount;	// 16 = 0x10
    unsigned int _depth;	// 24 = 0x18
}

+ (id)array;	// IMP=0x0020000000232a82
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;	// IMP=0x002000000023373f
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x001000000023372d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002336d2
@property(readonly) NSIndexSet *populatedKeys;
@property(readonly) unsigned long long maxKey;
@property(readonly) unsigned long long minKey;
@property(readonly) unsigned long long count;
- (void)clear;	// IMP=0x0010000000233609
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x0010000000233593
- (void)foreach:(CDUnknownBlockType)arg1;	// IMP=0x0010000000233538
- (void)removeObjectForKey:(unsigned long long)arg1;	// IMP=0x0010000000233521
- (_Bool)hasObjectForKey:(unsigned long long)arg1;	// IMP=0x00100000002334ee
- (void)setObject:(id)arg1 forKey:(unsigned long long)arg2;	// IMP=0x00100000002332df
- (void)increaseDepth;	// IMP=0x001000000023300e
- (id)objectForKey:(unsigned long long)arg1;	// IMP=0x0010000000232f31
- (unsigned long long)maxIndexForCurrentDepth;	// IMP=0x0010000000232cc0
- (id)description;	// IMP=0x0010000000232ae4
- (void)dealloc;	// IMP=0x0010000000232a9c

@end
