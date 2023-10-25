//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMMDateProvider, NSDate;
@protocol HMDTimeBasedFlagContext;

__attribute__((visibility("hidden")))
@interface HMDTimeBasedFlagDaily : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <HMDTimeBasedFlagContext> _context;	// 16 = 0x10
    HMMDateProvider *_dateProvider;	// 24 = 0x18
    unsigned long long _bits;	// 32 = 0x20
    NSDate *_bit0Date;	// 40 = 0x28
}

+ (id)convertLegacyFlagBits:(id)arg1 lastSaveTIme:(id)arg2;	// IMP=0x00100000003932de
- (void).cxx_destruct;	// IMP=0x00000000003931ad
@property(retain) NSDate *bit0Date; // @synthesize bit0Date=_bit0Date;
@property unsigned long long bits; // @synthesize bits=_bits;
@property(readonly, nonatomic) HMMDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) __weak id <HMDTimeBasedFlagContext> context; // @synthesize context=_context;
- (id)description;	// IMP=0x00000000003930d5
- (id)serializeToDictionary;	// IMP=0x0000000000392f9b
- (unsigned long long)bitsForDate:(id)arg1 bitCount:(long long)arg2 outValidBitCount:(long long *)arg3;	// IMP=0x0000000000392dfb
- (unsigned long long)currentBits;	// IMP=0x0000000000392d7f
- (unsigned long long)_bitMaskForDate:(id)arg1;	// IMP=0x0000000000392c15
- (void)setBitForDate:(id)arg1;	// IMP=0x0000000000392b0d
- (void)setCurrentBit;	// IMP=0x0000000000392a9f
- (id)initWithSerializedFlag:(id)arg1 context:(id)arg2 dateProvider:(id)arg3;	// IMP=0x00000000003928fc
- (id)initWithContext:(id)arg1 dateProvider:(id)arg2;	// IMP=0x0000000000392812

@end
