//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface QRSelfAllocationArray : NSObject
{
    NSMutableArray *_allocations;	// 8 = 0x8
    unsigned int _nextIndex;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000029aac1
- (void)addAllocation:(id)arg1;	// IMP=0x001000000029aaab
- (id)getAllocation;	// IMP=0x001000000029aa55
- (id)init;	// IMP=0x001000000029a9f8

@end
