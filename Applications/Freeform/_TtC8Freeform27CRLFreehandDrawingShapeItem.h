//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLBezierPath, CRLPKStrokePathCompactData, MISSING_TYPE, NSArray, NSString;

@interface _TtC8Freeform27CRLFreehandDrawingShapeItem
{
    MISSING_TYPE *cachedPencilKitStrokes;	// 0 = 0x0
    MISSING_TYPE *cachedPencilKitStrokesInParentSpace;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0040000000ce6440
- (id)commandsToUpdateModelToMatch:(id)arg1;	// IMP=0x0010000000ce6380
@property(nonatomic) long long snappedShapeType;
@property(nonatomic, readonly) _Bool hasSnappedToShape;
@property(nonatomic, readonly) _Bool canSnapToShape;
@property(nonatomic, retain) CRLBezierPath *maskPath;
@property(nonatomic, retain) CRLPKStrokePathCompactData *pencilKitStrokePathCompactData;
@property(nonatomic, readonly) NSArray *pencilKitStrokesInParentSpace;
@property(nonatomic, readonly) NSArray *pencilKitStrokes;
@property(nonatomic, readonly) NSString *localizedName;
@property(nonatomic, readonly) _Bool isFreehandDrawingShape;
@property(nonatomic, readonly) _Bool shouldForceStrokesToPencilKit;
@property(nonatomic, readonly) _Bool excludedFromMultiselectResizeInfo;
@property(nonatomic, readonly) _Bool isAllowedInFreehandDrawings;

@end
