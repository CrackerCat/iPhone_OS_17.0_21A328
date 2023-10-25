//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICStoreRequestContext, MPCModelGenericAVItemUserIdentityPropertySet, MPModelRadioStation, MPSectionedCollection, _MPCModelRadioPlaybackQueueStationTracksCollection;

__attribute__((visibility("hidden")))
@interface MPCModelRadioPlaybackQueue : NSObject
{
    ICStoreRequestContext *_storeRequestContext;	// 8 = 0x8
    MPModelRadioStation *_radioStation;	// 16 = 0x10
    _MPCModelRadioPlaybackQueueStationTracksCollection *_stationTracks;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002d45b5
@property(retain, nonatomic) MPModelRadioStation *radioStation; // @synthesize radioStation=_radioStation;
- (void)updateWithPersonalizedResponse:(id)arg1;	// IMP=0x00000000002d44f6
- (id)tracksByApplyingTracksResponse:(id)arg1 currentIndex:(long long)arg2;	// IMP=0x00000000002d4306
@property(readonly, nonatomic) MPSectionedCollection *tracks;
- (id)trackForItemAtIndex:(long long)arg1;	// IMP=0x00000000002d42da
@property(readonly, nonatomic) MPSectionedCollection *trackModels;
- (long long)removeExplicitItems;	// IMP=0x00000000002d42ae
- (void)removeAllItems;	// IMP=0x00000000002d4298
@property(readonly, nonatomic) long long numberOfItems;
- (_Bool)isExplicitItemAtIndex:(long long)arg1;	// IMP=0x00000000002d426c
- (id)AVItemAtIndex:(long long)arg1;	// IMP=0x00000000002d4194
@property(retain, nonatomic) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet;
- (id)initWithPlaybackContext:(id)arg1;	// IMP=0x00000000002d4044

@end
