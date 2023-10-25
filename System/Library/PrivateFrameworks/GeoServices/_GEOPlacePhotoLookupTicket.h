//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractRequestResponseTicket.h"

@class GEOMapItemIdentifier, GEOMapServiceTraits, NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlacePhotoLookupTicket : GEOAbstractRequestResponseTicket
{
    NSString *_vendorIdentifier;	// 64 = 0x40
    GEOMapItemIdentifier *_mapItemIdentifier;	// 72 = 0x48
    struct _NSRange _range;	// 80 = 0x50
    GEOMapServiceTraits *_traits;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000007b45bb
- (void)cancel;	// IMP=0x00000000007b4535
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x00000000007b426a
- (id)initWithVendorIdentifier:(id)arg1 mapItemIdentifier:(id)arg2 range:(struct _NSRange)arg3 traits:(id)arg4;	// IMP=0x00000000007b411f

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
