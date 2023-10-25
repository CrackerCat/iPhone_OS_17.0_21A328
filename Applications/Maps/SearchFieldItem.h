//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AddressBookAddress, CRRecentContact, DirectionsWaypoint, ExternalURLQuery, GEOComposedWaypoint, GEOComposedWaypointEVStop, GEOLatLng, GEOMapItemChildPlace, GEORelatedSearchSuggestion, GEORetainedSearchMetadata, GEOSearchCategory, HistoryEntryRecentsItem, MKLocalSearchCompletion, MKMapItem, NSData, NSString, PlaceCategoryItem, RoutePlanningWaypointRequest, SearchResult, VenueCategoryItem, _TtC4Maps16MapsFindMyHandle, _TtC4Maps22MapsAutocompletePerson;

@interface SearchFieldItem : NSObject
{
    int _engineType;	// 8 = 0x8
    NSString *_searchString;	// 16 = 0x10
    GEOLatLng *_latLng;	// 24 = 0x18
    NSString *_completedQuery;	// 32 = 0x20
    SearchResult *_searchResult;	// 40 = 0x28
    MKLocalSearchCompletion *_completion;	// 48 = 0x30
    AddressBookAddress *_address;	// 56 = 0x38
    GEOSearchCategory *_searchCategory;	// 64 = 0x40
    VenueCategoryItem *_venueCategoryItem;	// 72 = 0x48
    PlaceCategoryItem *_placeCategoryItem;	// 80 = 0x50
    HistoryEntryRecentsItem *_historyItem;	// 88 = 0x58
    CRRecentContact *_coreRecentContact;	// 96 = 0x60
    NSString *;	// 104 = 0x68
    NSString *_addressStringLabel;	// 112 = 0x70
    GEORelatedSearchSuggestion *_suggestion;	// 120 = 0x78
    ExternalURLQuery *_externalURLQuery;	// 128 = 0x80
    NSString *_externalQueryName;	// 136 = 0x88
    GEOMapItemChildPlace *_childPlace;	// 144 = 0x90
    NSData *_mapKitHandle;	// 152 = 0x98
    NSString *_mapKitHandleTitle;	// 160 = 0xa0
    RoutePlanningWaypointRequest *_routePlanningWaypointRequest;	// 168 = 0xa8
    GEOComposedWaypoint *_composedWaypoint;	// 176 = 0xb0
    _TtC4Maps22MapsAutocompletePerson *_autocompletePerson;	// 184 = 0xb8
    _TtC4Maps16MapsFindMyHandle *_findMyHandle;	// 192 = 0xc0
    NSString *_userTypedStringForRAP;	// 200 = 0xc8
    GEORetainedSearchMetadata *_retainedSearchMetadata;	// 208 = 0xd0
    struct CLLocationCoordinate2D _coordinateHint;	// 216 = 0xd8
}

+ (id)searchFieldItemWithWaypointRequest:(id)arg1 resolvedWaypoint:(id)arg2;	// IMP=0x000000000068d231
+ (id)searchFieldItemWithObject:(id)arg1 expandRecentsItem:(_Bool)arg2 preserveContact:(_Bool)arg3;	// IMP=0x001000000068c6c3
+ (id)searchFieldItemWithObject:(id)arg1;	// IMP=0x001000000068c6ac
+ (id)searchFieldItemsForRouteInSuggestionsEntry:(id)arg1;	// IMP=0x001000000068d5b8
+ (id)searchFieldItemsForRouteHistoryEntry:(id)arg1;	// IMP=0x001000000068da9f
- (void).cxx_destruct;	// IMP=0x001000000068d472
@property(copy, nonatomic) GEORetainedSearchMetadata *retainedSearchMetadata; // @synthesize retainedSearchMetadata=_retainedSearchMetadata;
@property(copy, nonatomic) NSString *userTypedStringForRAP; // @synthesize userTypedStringForRAP=_userTypedStringForRAP;
@property(retain, nonatomic) _TtC4Maps16MapsFindMyHandle *findMyHandle; // @synthesize findMyHandle=_findMyHandle;
@property(retain, nonatomic) _TtC4Maps22MapsAutocompletePerson *autocompletePerson; // @synthesize autocompletePerson=_autocompletePerson;
@property(retain, nonatomic) GEOComposedWaypoint *composedWaypoint; // @synthesize composedWaypoint=_composedWaypoint;
@property(retain, nonatomic) RoutePlanningWaypointRequest *routePlanningWaypointRequest; // @synthesize routePlanningWaypointRequest=_routePlanningWaypointRequest;
@property(copy, nonatomic) NSString *mapKitHandleTitle; // @synthesize mapKitHandleTitle=_mapKitHandleTitle;
@property(copy, nonatomic) NSData *mapKitHandle; // @synthesize mapKitHandle=_mapKitHandle;
@property(retain, nonatomic) GEOMapItemChildPlace *childPlace; // @synthesize childPlace=_childPlace;
@property(copy, nonatomic) NSString *externalQueryName; // @synthesize externalQueryName=_externalQueryName;
@property(retain, nonatomic) ExternalURLQuery *externalURLQuery; // @synthesize externalURLQuery=_externalURLQuery;
@property(retain, nonatomic) GEORelatedSearchSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(copy, nonatomic) NSString *addressStringLabel; // @synthesize addressStringLabel=_addressStringLabel;
@property(copy, nonatomic) NSString *addressString; // @synthesize addressString=_addressString;
@property(retain, nonatomic) CRRecentContact *coreRecentContact; // @synthesize coreRecentContact=_coreRecentContact;
@property(retain, nonatomic) HistoryEntryRecentsItem *historyItem; // @synthesize historyItem=_historyItem;
@property(nonatomic) int engineType; // @synthesize engineType=_engineType;
@property(retain, nonatomic) PlaceCategoryItem *placeCategoryItem; // @synthesize placeCategoryItem=_placeCategoryItem;
@property(retain, nonatomic) VenueCategoryItem *venueCategoryItem; // @synthesize venueCategoryItem=_venueCategoryItem;
@property(retain, nonatomic) GEOSearchCategory *searchCategory; // @synthesize searchCategory=_searchCategory;
@property(retain, nonatomic) AddressBookAddress *address; // @synthesize address=_address;
@property(retain, nonatomic) MKLocalSearchCompletion *completion; // @synthesize completion=_completion;
@property(retain, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, nonatomic) NSString *completedQuery; // @synthesize completedQuery=_completedQuery;
@property(nonatomic) struct CLLocationCoordinate2D coordinateHint; // @synthesize coordinateHint=_coordinateHint;
@property(readonly, nonatomic) GEOLatLng *latLng; // @synthesize latLng=_latLng;
@property(readonly, nonatomic) MKMapItem *mapItemIfGeocoded;
- (_Bool)matchesWaypoint:(id)arg1;	// IMP=0x001000000068bcad
@property(readonly, nonatomic) DirectionsWaypoint *personalizedDirectionsWaypoint;
@property(readonly, nonatomic) DirectionsWaypoint *waypoint;
- (void)_maps_buildDescriptionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000068b663
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) GEOComposedWaypointEVStop *evStopWaypoint;
@property(readonly, nonatomic) _Bool behavesAsAtom;
@property(readonly, nonatomic) NSString *personalizedAddressName;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) GEOSearchCategory *currentCategory;
- (void)setSearchString:(id)arg1 forCompletedQuery:(id)arg2;	// IMP=0x0010000000689ac0
@property(readonly, nonatomic) NSString *originalSearchString;
- (_Bool)isEquivalentAsWaypointToSearchFieldItem:(id)arg1;	// IMP=0x00100000006891c3
- (_Bool)isEqualToSearchFieldItem:(id)arg1;	// IMP=0x0010000000688ceb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000688c7f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000688a3b
- (void)clear;	// IMP=0x00100000006888df
- (void)dealloc;	// IMP=0x00100000006888a1
- (id)_iconWithStyleAttributes:(id)arg1 scale:(double)arg2;	// IMP=0x0010000000688880
- (id)waypointIconWithScale:(double)arg1;	// IMP=0x0010000000687ccb
@property(readonly, nonatomic) NSString *waypointName;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool isFindMyPerson;
@property(readonly, nonatomic) AddressBookAddress *_maps_address;
@property(readonly, nonatomic) _TtC4Maps16MapsFindMyHandle *_maps_findMyHandle;
@property(readonly, nonatomic) _TtC4Maps22MapsAutocompletePerson *_maps_autoCompletePerson;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
