//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapSelectionManagerState, SearchFieldItem, SearchInfo;

@interface VenueMapSearchState : NSObject
{
    MapSelectionManagerState *_mapSelectionState;	// 8 = 0x8
    SearchFieldItem *_searchFieldItem;	// 16 = 0x10
    SearchInfo *_searchInfo;	// 24 = 0x18
}

+ (id)stateWithMapSelectionState:(id)arg1 searchFieldItem:(id)arg2 searchInfo:(id)arg3;	// IMP=0x004000000096d81e
- (void).cxx_destruct;	// IMP=0x002000000096d98e
@property(readonly, nonatomic) SearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(readonly, nonatomic) SearchFieldItem *searchFieldItem; // @synthesize searchFieldItem=_searchFieldItem;
@property(readonly, nonatomic) MapSelectionManagerState *mapSelectionState; // @synthesize mapSelectionState=_mapSelectionState;
- (id)init;	// IMP=0x001000000096d962
- (id)initWithMapSelectionState:(id)arg1 searchFieldItem:(id)arg2 searchInfo:(id)arg3;	// IMP=0x001000000096d8aa

@end
