//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface VKCTextElement
{
    _Bool _childrenCreated;	// 8 = 0x8
    NSArray *_components;	// 16 = 0x10
    NSArray *_candidates;	// 24 = 0x18
    NSArray *__children;	// 32 = 0x20
}

+ (id)textElementFromCROutputRegion:(id)arg1 parentDocument:(id)arg2;	// IMP=0x00600000000799fc
- (void).cxx_destruct;	// IMP=0x000000000007a9d8
@property(nonatomic) _Bool childrenCreated; // @synthesize childrenCreated=_childrenCreated;
@property(copy, nonatomic) NSArray *_children; // @synthesize _children=__children;
@property(copy, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)elementCollectionForQuad:(id)arg1;	// IMP=0x000000000007a694
- (id)crOutputRegionTypeString;	// IMP=0x000000000007a4fb
- (id)confidenceString;	// IMP=0x000000000007a4c5
- (void)createChildrenIfNecessary;	// IMP=0x0000000000079b31
- (_Bool)isInspectableCellSelectable;	// IMP=0x0000000000079b29
- (id)children;	// IMP=0x0000000000079a93
- (long long)elementType;	// IMP=0x0000000000079a88

@end
