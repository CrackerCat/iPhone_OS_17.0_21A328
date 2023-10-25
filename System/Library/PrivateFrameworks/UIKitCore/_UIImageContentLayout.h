//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, _UIImageContentRBSymbolConfiguration, _UIImageContentRendition;

__attribute__((visibility("hidden")))
@interface _UIImageContentLayout : NSObject
{
    struct {
        unsigned int contentsIsCGImage:1;
        unsigned int rendersContentAtNaturalSize:1;
    } _flags;	// 8 = 0x8
    CDUnknownBlockType _contentInfoGenerator;	// 16 = 0x10
    struct {
        _UIImageContentRendition *rendition;
        id contents;
        double drawScale;
    } _contentInfo;	// 24 = 0x18
    double _contentsScaleFactor;	// 48 = 0x30
    double _baselineOffsetFromTop;	// 56 = 0x38
    double _baselineOffsetFromBottom;	// 64 = 0x40
    struct CGSize _contentsSize;	// 72 = 0x48
    struct CGSize _renderSize;	// 88 = 0x58
    struct UIEdgeInsets _contentInsets;	// 104 = 0x68
    struct CGAffineTransform _contentsTransform;	// 136 = 0x88
}

+ (id)layoutForSource:(id)arg1 inTarget:(id)arg2 withSize:(struct CGSize)arg3;	// IMP=0x0060000000aa85c0
- (void).cxx_destruct;	// IMP=0x0000000000aab0ad
@property(readonly, nonatomic) struct CGSize renderSize; // @synthesize renderSize=_renderSize;
@property(readonly, nonatomic) double baselineOffsetFromBottom; // @synthesize baselineOffsetFromBottom=_baselineOffsetFromBottom;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) struct CGSize contentsSize; // @synthesize contentsSize=_contentsSize;
@property(readonly, nonatomic) double contentsScaleFactor; // @synthesize contentsScaleFactor=_contentsScaleFactor;
@property(readonly, nonatomic) struct CGAffineTransform contentsTransform; // @synthesize contentsTransform=_contentsTransform;
- (id)description;	// IMP=0x0000000000aaaebb
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x0000000000aaadc9
- (_Bool)hasContents;	// IMP=0x0000000000aaadaf
@property(readonly, nonatomic) _UIImageContentRBSymbolConfiguration *rbSymbolConfiguration;
@property(readonly, nonatomic) UIColor *contentsMultiplyColor;
@property(readonly, nonatomic) id contents;

@end
