//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PTScanlineMask : NSObject
{
    struct CGRect _placement;	// 8 = 0x8
}

+ (id)scanlineMaskWithFocusBlurMap:(id)arg1 region:(id)arg2;	// IMP=0x006000000005a98e
@property struct CGRect placement; // @synthesize placement=_placement;
- (id)scanlineIter;	// IMP=0x000000000005aa00

@end
