//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;
@protocol GEOTransitLine;

@interface TransitVehicleLineAnnotation : NSObject
{
    id <GEOTransitLine> _transitLine;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000009e9a2e
@property(readonly, nonatomic) id <GEOTransitLine> transitLine; // @synthesize transitLine=_transitLine;
- (_Bool)allowsTimestampLabel;	// IMP=0x00100000009e9a1c
- (_Bool)allowsAccuracyRing;	// IMP=0x00100000009e9a14
- (id)imageWithScale:(double)arg1 nightMode:(_Bool)arg2;	// IMP=0x00100000009e9952
@property(readonly, nonatomic) UIColor *color;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)initWithTransitLine:(id)arg1;	// IMP=0x00100000009e9850

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end
