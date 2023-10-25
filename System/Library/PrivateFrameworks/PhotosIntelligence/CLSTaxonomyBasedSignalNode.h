//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLSSignalNode.h"

__attribute__((visibility("hidden")))
@interface CLSTaxonomyBasedSignalNode : CLSSignalNode
{
    double _searchThreshold;	// 8 = 0x8
    double _graphHighPrecisionThreshold;	// 16 = 0x10
    double _graphHighRecallThreshold;	// 24 = 0x18
}

@property(nonatomic) double graphHighRecallThreshold; // @synthesize graphHighRecallThreshold=_graphHighRecallThreshold;
@property(nonatomic) double graphHighPrecisionThreshold; // @synthesize graphHighPrecisionThreshold=_graphHighPrecisionThreshold;
@property(nonatomic) double searchThreshold; // @synthesize searchThreshold=_searchThreshold;
- (id)initWithTaxonomyNode:(id)arg1;	// IMP=0x0000000000038596

@end
