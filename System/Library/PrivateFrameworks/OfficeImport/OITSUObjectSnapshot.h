//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface OITSUObjectSnapshot : NSObject
{
    unsigned long long mEntryCount;	// 8 = 0x8
    void **mSnapshot;	// 16 = 0x10
    NSArray *mCompared;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x000000000028adcd
- (void)p_clear;	// IMP=0x000000000028ad80
- (void)compare;	// IMP=0x000000000028ac9c
- (void)calibrate:(id)arg1;	// IMP=0x000000000028aba5
- (id)init;	// IMP=0x000000000028ab62

@end
