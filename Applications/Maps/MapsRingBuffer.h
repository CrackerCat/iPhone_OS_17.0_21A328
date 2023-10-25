//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableArray;

@interface MapsRingBuffer : NSObject
{
    unsigned long long _length;	// 8 = 0x8
    NSMutableArray *_array;	// 16 = 0x10
    unsigned long long _position;	// 24 = 0x18
    MISSING_TYPE *_mutation;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000c798b8
@property(nonatomic) unsigned long long mutation; // @synthesize mutation=_mutation;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0010000000c796fc
- (id)_orderedObjects;	// IMP=0x0010000000c795a0
- (id)debugDescription;	// IMP=0x0010000000c794d1
@property(readonly, nonatomic) id lastObject;
@property(readonly, nonatomic) id firstObject;
@property(readonly, nonatomic) unsigned long long count;
- (void)removeAllObjects;	// IMP=0x0010000000c79253
- (void)push:(id)arg1;	// IMP=0x0010000000c78fea
- (id)initWithLength:(unsigned long long)arg1;	// IMP=0x0010000000c78eb1

@end
