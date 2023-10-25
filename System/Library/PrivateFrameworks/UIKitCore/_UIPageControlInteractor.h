//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIHyperInteractor;

__attribute__((visibility("hidden")))
@interface _UIPageControlInteractor : NSObject
{
    double _scrubbingOffset;	// 8 = 0x8
    double _lowerBound;	// 16 = 0x10
    double _upperBound;	// 24 = 0x18
    _UIHyperInteractor *_interactor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000005b9c0f
@property(retain, nonatomic) _UIHyperInteractor *interactor; // @synthesize interactor=_interactor;
- (void)reduceScrubOffsetByOffset:(double)arg1;	// IMP=0x00000000005b9bbe
- (void)reduceScrubOffsetByRatio:(double)arg1;	// IMP=0x00000000005b9baa
- (void)commitTranslation;	// IMP=0x00000000005b9b6d
- (void)setTranslation:(double)arg1 velocity:(double)arg2;	// IMP=0x00000000005b9a10
- (void)setUnconstrainedPosition:(double)arg1 offset:(double)arg2;	// IMP=0x00000000005b99a4
- (void)updateRubberbandLowerBound:(double)arg1 upperBound:(double)arg2;	// IMP=0x00000000005b989b
- (void)updateScrubLowerBound:(double)arg1 upperBound:(double)arg2;	// IMP=0x00000000005b988b
@property(readonly, nonatomic) double unboundedScrubPosition;
@property(readonly, nonatomic) double boundedScrubPosition;
@property(readonly, nonatomic) double hyperConstrainedPosition;
@property(readonly, nonatomic) double unconstrainedPosition;
@property(readonly, nonatomic) double joggingDistance;
- (id)initWithMaximumDistance:(double)arg1;	// IMP=0x00000000005b955c

@end
