//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

__attribute__((visibility("hidden")))
@interface VSImageScaleValueTransformer : NSValueTransformer
{
    struct CGSize _preferredSize;	// 8 = 0x8
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x0060000000002629
+ (Class)transformedValueClass;	// IMP=0x0060000000002618
@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
- (id)transformedValue:(id)arg1;	// IMP=0x0000000000002631

@end
