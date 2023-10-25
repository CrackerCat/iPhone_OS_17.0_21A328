//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLImage, NSDictionary, NSString;

@interface CRLImmutableBrushStrokeStorage : NSObject
{
    CRLImage *_image;	// 8 = 0x8
    NSDictionary *_paths;	// 16 = 0x10
    NSDictionary *_bounds;	// 24 = 0x18
    NSDictionary *_textureIndices;	// 32 = 0x20
    NSDictionary *_options;	// 40 = 0x28
    NSDictionary *_lineEnds;	// 48 = 0x30
    unsigned long long _totalSectionCount;	// 56 = 0x38
}

+ (unsigned long long)p_totalSectionCountWithPaths:(id)arg1;	// IMP=0x00200000002159d1
- (void).cxx_destruct;	// IMP=0x0020000000216caa
@property(readonly, nonatomic) unsigned long long totalSectionCount; // @synthesize totalSectionCount=_totalSectionCount;
@property(readonly, copy, nonatomic) NSDictionary *lineEnds; // @synthesize lineEnds=_lineEnds;
@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSDictionary *textureIndices; // @synthesize textureIndices=_textureIndices;
@property(readonly, copy, nonatomic) NSDictionary *bounds; // @synthesize bounds=_bounds;
@property(readonly, copy, nonatomic) NSDictionary *paths; // @synthesize paths=_paths;
@property(readonly, nonatomic) CRLImage *image; // @synthesize image=_image;
- (id)deepCopy;	// IMP=0x0010000000215b85
- (id)initWithImage:(id)arg1 paths:(id)arg2 bounds:(id)arg3 textureIndices:(id)arg4 options:(id)arg5 lineEnds:(id)arg6;	// IMP=0x0010000000215886

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
