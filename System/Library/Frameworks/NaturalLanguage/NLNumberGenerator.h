//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NLNumberGenerator : NSObject
{
    unsigned long long state[2];	// 8 = 0x8
}

- (unsigned long long)numberInRange:(struct _NSRange)arg1;	// IMP=0x000000000000337c
- (void)resetWithSeed:(unsigned long long)arg1;	// IMP=0x000000000000336e
- (void)reset;	// IMP=0x0000000000003357
- (id)init;	// IMP=0x000000000000330b

@end
