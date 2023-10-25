//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKETAProvider, MKMapItem, MUPlaceRibbonItemViewModel, NSString;

__attribute__((visibility("hidden")))
@interface MUPlaceDistanceRibbonViewModel
{
    MKETAProvider *_etaProvider;	// 64 = 0x40
    MKMapItem *_mapItem;	// 72 = 0x48
    MUPlaceRibbonItemViewModel *_crowsDistanceViewModel;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000f1173
- (CDUnknownBlockType)valueStringProvider;	// IMP=0x00000000000f1156
- (CDUnknownBlockType)titleStringProvider;	// IMP=0x00000000000f1139
- (void)ETAProviderUpdated:(id)arg1;	// IMP=0x00000000000f1017
- (void)dealloc;	// IMP=0x00000000000f0fb4
- (id)initWithMapItem:(id)arg1 etaProvider:(id)arg2;	// IMP=0x00000000000f0d57

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
