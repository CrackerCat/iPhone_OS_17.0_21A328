//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GQDAffineGeometry, GQDBezierPath, NSString;

@interface GQDDrawable : NSObject
{
    GQDAffineGeometry *mGeometry;	// 8 = 0x8
    struct __CFURL *mUrl;	// 16 = 0x10
    char *mUid;	// 24 = 0x18
    GQDBezierPath *mWrapPath;	// 32 = 0x20
    GQDAffineGeometry *mWrapGeometry;	// 40 = 0x28
    void *mInnerWrapPoints;	// 48 = 0x30
    _Bool mHasPagesOrder;	// 56 = 0x38
    long long mPagesOrder;	// 64 = 0x40
}

- (void)setPagesOrder:(int)arg1;	// IMP=0x000000000000979e
- (int)pagesOrder;	// IMP=0x0000000000009795
- (_Bool)hasPagesOrder;	// IMP=0x000000000000978c
- (struct CGPath *)createBezierPath;	// IMP=0x00000000000096d8
- (void)clearWrapPoints;	// IMP=0x00000000000096ae
- (void *)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;	// IMP=0x0000000000009528
- (const void *)wrapPoints;	// IMP=0x000000000000944e
- (void)addWrapPoint:(id)arg1;	// IMP=0x00000000000093ef
- (int)collectWrapPointsForState:(id)arg1 graphicStyle:(id)arg2;	// IMP=0x00000000000092e3
- (const char *)uid;	// IMP=0x00000000000092d9
- (struct __CFString *)urlString;	// IMP=0x00000000000092c2
- (struct __CFURL *)url;	// IMP=0x00000000000092b8
- (id)geometry;	// IMP=0x00000000000092ae
- (void)dealloc;	// IMP=0x0000000000009218
- (void)collectWrapPoints:(id)arg1 forPath:(struct CGPath *)arg2 context:(struct FindLinesContext *)arg3;	// IMP=0x00000000000097af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
