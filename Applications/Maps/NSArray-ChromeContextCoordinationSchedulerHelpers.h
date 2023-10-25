//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (ChromeContextCoordinationSchedulerHelpers)
+ (id)_navigation_newArrayWithDefaultValue:(id)arg1 withCapacity:(unsigned long long)arg2;	// IMP=0x001000000069f858
+ (_Bool)array:(id)arg1 isEqualToArray:(id)arg2;	// IMP=0x0010000000b9ba17
+ (id)_maps_commonPrefixSharedBetweenArray:(id)arg1 suffix:(out id *)arg2 andArray:(id)arg3 suffix:(out id *)arg4;	// IMP=0x0010000000cf6f5d
- (id)_maps_subarrayToIndex:(unsigned long long)arg1;	// IMP=0x00200000001ef2aa
- (id)_maps_subarrayFromIndex:(unsigned long long)arg1;	// IMP=0x00100000001ef223
- (id)_maps_lastContextOfClass:(Class)arg1;	// IMP=0x00100000001ef0ed
- (id)_maps_firstContextOfClass:(Class)arg1;	// IMP=0x00100000001eef94
- (_Bool)_maps_containsContextOfClass:(Class)arg1;	// IMP=0x00100000001eef0d
- (_Bool)_maps_containsSearchResultEqualToResult:(id)arg1 forPurpose:(long long)arg2;	// IMP=0x00100000009f6455
- (id)_maps_lastModeOfClass:(Class)arg1;	// IMP=0x0010000000a70b2b
- (id)_maps_firstModeOfClass:(Class)arg1;	// IMP=0x0010000000a709d2
- (_Bool)_maps_containsModeOfClass:(Class)arg1;	// IMP=0x0010000000a7094b
- (id)_maps_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x0010000000b9bc4e
- (id)_maps_map:(CDUnknownBlockType)arg1;	// IMP=0x0010000000b9ba8b
- (_Bool)_maps_isPrefixOfArray:(id)arg1;	// IMP=0x0010000000cf6d58
@property(readonly, nonatomic) NSArray *carShortenedArray;
@end
