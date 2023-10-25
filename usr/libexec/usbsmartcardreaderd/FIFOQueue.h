//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FIFOQueue : NSObject
{
    NSMutableArray *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000006b0c
- (unsigned char)resetSequence;	// IMP=0x0010000000006904
- (void)dequeueAllBlocks;	// IMP=0x00100000000068ee
- (void)enqueueArray:(id)arg1;	// IMP=0x00100000000068d8
- (void)enqueueBlock:(id)arg1;	// IMP=0x00100000000068c2
- (id)dequeueBlock;	// IMP=0x0010000000006875
- (id)firstBlock;	// IMP=0x001000000000685f
@property(readonly) unsigned long long count;
- (id)initWithArray:(id)arg1;	// IMP=0x00100000000067c7
- (id)init;	// IMP=0x0010000000006761

@end
