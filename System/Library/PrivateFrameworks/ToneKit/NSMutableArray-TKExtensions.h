//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (TKExtensions)
- (void)tk_ensureHasItemsOrNullUpToIndex:(unsigned long long)arg1;	// IMP=0x009000000002546c
- (id)tk_nextDequeuedObject;	// IMP=0x0090000000029f29
- (id)tk_lastEnqueuedObject;	// IMP=0x0090000000029f15
- (id)tk_dequeueObject;	// IMP=0x0090000000029ecd
- (void)tk_enqueueObject:(id)arg1;	// IMP=0x0090000000029eb9
@end
