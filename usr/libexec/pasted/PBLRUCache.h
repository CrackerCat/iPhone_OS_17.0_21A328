//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;

@interface PBLRUCache : NSObject
{
    NSMutableOrderedSet *_cache;	// 8 = 0x8
    unsigned long long _limit;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000002828
- (id)evictedObjectForUsedObject:(id)arg1;	// IMP=0x0010000000002751
- (id)initWithLimit:(unsigned long long)arg1;	// IMP=0x00100000000026f0

@end
