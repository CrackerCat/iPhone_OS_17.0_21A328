//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface CloudGeniusUtilities : NSObject
{
    NSDictionary *_ml3TrackPropertyToGeniusTrackPropertyMap;	// 8 = 0x8
    NSDictionary *_ml3TrackPropertyTransformMap;	// 16 = 0x10
    NSDictionary *_ml3ContainerPropertyToGeniusPlaylistPropertyMap;	// 24 = 0x18
    NSDictionary *_ml3ContainerPropertyTransformMap;	// 32 = 0x20
    NSArray *_allML3TrackPropertiesWithGeniusTrackProperties;	// 40 = 0x28
    NSArray *_allGeniusTrackPropertiesWithML3TrackProperties;	// 48 = 0x30
    NSArray *_allML3ContainerPropertiesWithGeniusPlaylistProperties;	// 56 = 0x38
    NSArray *_allGeniusPlaylistPropertiesWithML3ContainerProperties;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000009bf28
@property(retain, nonatomic) NSArray *allGeniusPlaylistPropertiesWithML3ContainerProperties; // @synthesize allGeniusPlaylistPropertiesWithML3ContainerProperties=_allGeniusPlaylistPropertiesWithML3ContainerProperties;
@property(retain, nonatomic) NSArray *allML3ContainerPropertiesWithGeniusPlaylistProperties; // @synthesize allML3ContainerPropertiesWithGeniusPlaylistProperties=_allML3ContainerPropertiesWithGeniusPlaylistProperties;
@property(retain, nonatomic) NSArray *allGeniusTrackPropertiesWithML3TrackProperties; // @synthesize allGeniusTrackPropertiesWithML3TrackProperties=_allGeniusTrackPropertiesWithML3TrackProperties;
@property(retain, nonatomic) NSArray *allML3TrackPropertiesWithGeniusTrackProperties; // @synthesize allML3TrackPropertiesWithGeniusTrackProperties=_allML3TrackPropertiesWithGeniusTrackProperties;
- (void)_initializeMappings;	// IMP=0x001000000009ad5d
- (id)geniusValueForML3ContainerProperty:(id)arg1 value:(id)arg2;	// IMP=0x001000000009acd8
- (id)geniusPlaylistPropertyForML3ContainerProperty:(id)arg1;	// IMP=0x001000000009acc2
- (id)geniusValueForML3TrackProperty:(id)arg1 value:(id)arg2;	// IMP=0x001000000009ac3d
- (id)geniusTrackPropertyForML3TrackProperty:(id)arg1;	// IMP=0x001000000009ac27
- (id)init;	// IMP=0x001000000009abdb

@end
