//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface TMLArray : NSObject
{
    NSMutableArray *_array;	// 8 = 0x8
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;	// IMP=0x006000000002ba6d
- (void).cxx_destruct;	// IMP=0x000000000002bf9c
@property(retain, nonatomic) NSArray *array; // @synthesize array=_array;
- (void)removeAllObjects;	// IMP=0x000000000002bf40
- (void)remove:(unsigned long long)arg1;	// IMP=0x000000000002bec7
- (void)append:(id)arg1;	// IMP=0x000000000002bda9
- (void)set:(unsigned long long)arg1 value:(id)arg2;	// IMP=0x000000000002bc54
- (id)get:(unsigned long long)arg1;	// IMP=0x000000000002bc05
@property(readonly, nonatomic) unsigned long long count;
- (id)init;	// IMP=0x000000000002bb83
- (id)initWithArray:(id)arg1;	// IMP=0x000000000002bb1b

@end
