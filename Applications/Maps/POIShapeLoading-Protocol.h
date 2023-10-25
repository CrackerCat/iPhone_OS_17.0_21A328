//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol POIShape, POIShapeLoadingObserver;

@protocol POIShapeLoading <NSObject>
@property(readonly, nonatomic) NSArray *endPOIShapesIfLoaded;
@property(readonly, nonatomic) id <POIShape> startPOIShapeIfLoaded;
- (void)removePOIShapeLoadingObserver:(id <POIShapeLoadingObserver>)arg1;
- (void)addPOIShapeLoadingObserver:(id <POIShapeLoadingObserver>)arg1;
@end
