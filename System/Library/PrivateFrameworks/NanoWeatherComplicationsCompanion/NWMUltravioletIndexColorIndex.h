//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoWeatherKitUICompanion/NWKUIColorIndex.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWMUltravioletIndexColorIndex : NWKUIColorIndex
{
}

+ (double)lastValue;	// IMP=0x0010000000005ee8
+ (id)allIndices;	// IMP=0x001000000000586a
+ (id)indexWithUltravioletIndexValue:(double)arg1 color:(id)arg2;	// IMP=0x00100000000057dc
- (id)initWithUltravioletIndexValue:(double)arg1 color:(id)arg2;	// IMP=0x000000000000583b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
