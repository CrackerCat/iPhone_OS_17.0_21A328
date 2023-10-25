//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableIndexSet, SHSignature;

__attribute__((visibility("hidden")))
@interface SHQueryMediaTimelineAdjuster : NSObject
{
    SHSignature *_querySignature;	// 8 = 0x8
    NSMutableIndexSet *_matchWindows;	// 16 = 0x10
    NSMutableIndexSet *_noMatchWindows;	// 24 = 0x18
    NSMutableArray *_mediaTimelineAdjustmentValues;	// 32 = 0x20
    NSArray *_queryMatchOffsetRanges;	// 40 = 0x28
}

+ (struct _NSRange)NSRangeFromSHRange:(id)arg1;	// IMP=0x0060000000018d44
+ (double)timelineShiftDurationForOffset:(double)arg1 usingTimelineAdjustmentValues:(id)arg2;	// IMP=0x0060000000018b35
- (void).cxx_destruct;	// IMP=0x0000000000018e21
@property(readonly, nonatomic) NSArray *queryMatchOffsetRanges; // @synthesize queryMatchOffsetRanges=_queryMatchOffsetRanges;
@property(readonly, nonatomic) NSMutableArray *mediaTimelineAdjustmentValues; // @synthesize mediaTimelineAdjustmentValues=_mediaTimelineAdjustmentValues;
@property(readonly, nonatomic) NSMutableIndexSet *noMatchWindows; // @synthesize noMatchWindows=_noMatchWindows;
@property(readonly, nonatomic) NSMutableIndexSet *matchWindows; // @synthesize matchWindows=_matchWindows;
@property(readonly, nonatomic) SHSignature *querySignature; // @synthesize querySignature=_querySignature;
- (double)adjustedUpperBoundFromTimeRange:(id)arg1;	// IMP=0x000000000001898b
- (id)adjustedRangeFromTimeRange:(id)arg1;	// IMP=0x00000000000185ab
- (id)adjustedTimeRangesFromTimeRanges:(id)arg1;	// IMP=0x000000000001837f
- (void)buildMediaTimelineAdjustmentValues;	// IMP=0x0000000000017ed0
- (id)initWithQuerySignature:(id)arg1 queryMatchOffsetRanges:(id)arg2;	// IMP=0x0000000000017d60

@end
