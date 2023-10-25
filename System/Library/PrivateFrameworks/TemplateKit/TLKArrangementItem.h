//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TLKArrangementItem : NSObject
{
    struct CGSize _size;	// 8 = 0x8
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (float)contentHuggingPriorityForAxis:(long long)arg1;	// IMP=0x0000000000024040
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;	// IMP=0x0000000000024032
- (double)effectiveBaselineOffsetFromContentBottom;	// IMP=0x0000000000024029
- (double)effectiveFirstBaselineOffsetFromContentTop;	// IMP=0x0000000000024020
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;	// IMP=0x0000000000024018

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
