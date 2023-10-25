//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOAppleMediaServicesResult, GEOPlaceCollection, MKMapItemIdentifier, NSArray, NSDictionary, NSError, NSMutableArray;
@protocol CuratedCollectionResolverDelegate;

@interface CuratedCollectionResolver : NSObject
{
    _Bool _shouldResolveAppClips;	// 8 = 0x8
    NSDictionary *_appClips;	// 16 = 0x10
    id <CuratedCollectionResolverDelegate> _delegate;	// 24 = 0x18
    MKMapItemIdentifier *_collectionIdentifier;	// 32 = 0x20
    CDUnknownBlockType _handler;	// 40 = 0x28
    NSMutableArray *_tickets;	// 48 = 0x30
    GEOPlaceCollection *_curatedCollection;	// 56 = 0x38
    NSMutableArray *_placeCollectionItems;	// 64 = 0x40
    GEOAppleMediaServicesResult *_mediaIntegration;	// 72 = 0x48
    NSArray *_thirdPartyLinks;	// 80 = 0x50
    NSError *_error;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000004490ef
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *thirdPartyLinks; // @synthesize thirdPartyLinks=_thirdPartyLinks;
@property(retain, nonatomic) GEOAppleMediaServicesResult *mediaIntegration; // @synthesize mediaIntegration=_mediaIntegration;
@property(retain, nonatomic) NSMutableArray *placeCollectionItems; // @synthesize placeCollectionItems=_placeCollectionItems;
@property(retain, nonatomic) GEOPlaceCollection *curatedCollection; // @synthesize curatedCollection=_curatedCollection;
@property(retain, nonatomic) NSMutableArray *tickets; // @synthesize tickets=_tickets;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) MKMapItemIdentifier *collectionIdentifier; // @synthesize collectionIdentifier=_collectionIdentifier;
@property(nonatomic) __weak id <CuratedCollectionResolverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDictionary *appClips; // @synthesize appClips=_appClips;
@property(nonatomic) _Bool shouldResolveAppClips; // @synthesize shouldResolveAppClips=_shouldResolveAppClips;
- (void)_finishedResolvingItems;	// IMP=0x0010000000448c9c
- (void)_resolveAppClips;	// IMP=0x001000000044878a
- (void)_resolveThirdPartyLinks:(id)arg1 withGroup:(id)arg2;	// IMP=0x001000000044815b
- (void)_resolveMediaLink:(id)arg1 withGroup:(id)arg2;	// IMP=0x0010000000447cf1
- (void)_resolveCollectionDetails;	// IMP=0x00100000004474e8
- (void)cancel;	// IMP=0x00100000004473a1
- (void)resolveCollection;	// IMP=0x0010000000446e7b
- (void)_commonInitWithCuratedCollectionIdentifier:(id)arg1;	// IMP=0x0010000000446e2c
- (id)initWithFullyClientizedCuratedCollection:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000446d2f
- (id)initWithCuratedCollectionIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000446c8f
- (id)initWithCuratedCollectionIdentifier:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000446bf6

@end
