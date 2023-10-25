//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SUUIHorizontalLockupLayout : NSObject
{
    NSMutableArray *_columns;	// 8 = 0x8
    double _imageMarginRight;	// 16 = 0x10
    struct UIEdgeInsets _metadataColumnEdgeInsets;	// 24 = 0x18
    double _metadataColumnMinHeight;	// 56 = 0x38
    double _tallestNonMetadataColumnHeight;	// 64 = 0x40
}

+ (id)fontForOrdinalViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0060000000335ad6
+ (id)fontForLabelViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00600000003359dd
+ (id)fontForButtonViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00600000003358dd
- (void).cxx_destruct;	// IMP=0x0000000000336b49
@property(readonly, nonatomic) struct UIEdgeInsets metadataColumnEdgeInsets; // @synthesize metadataColumnEdgeInsets=_metadataColumnEdgeInsets;
@property(readonly, nonatomic) NSArray *columns; // @synthesize columns=_columns;
- (struct CGSize)_sizeForViewElement:(id)arg1 width:(long long)arg2 context:(id)arg3;	// IMP=0x0000000000336a28
- (struct CGSize)_sizeForRightAlignedColumn:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000003365e9
- (double)_heightForMetadataColumn:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000033639c
- (double)topPaddingForViewElement:(id)arg1;	// IMP=0x0000000000336337
- (void)sizeColumnsToFitWidth:(double)arg1 context:(id)arg2;	// IMP=0x0000000000335c54
- (double)columnSpacingForColumnIdentifier:(long long)arg1;	// IMP=0x0000000000335c2d
- (double)bottomPaddingForViewElement:(id)arg1;	// IMP=0x0000000000335b7f
- (id)initWithLockup:(id)arg1 context:(id)arg2;	// IMP=0x0000000000334db0

@end
