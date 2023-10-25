//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVImageScaleDecorator.h"

@class IKColor;

__attribute__((visibility("hidden")))
@interface _TVTintedImageDecorator : TVImageScaleDecorator
{
    IKColor *_tintColor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000027192
@property(readonly, retain, nonatomic) IKColor *tintColor; // @synthesize tintColor=_tintColor;
- (void)drawInContext:(id)arg1 imageRect:(struct CGRect)arg2;	// IMP=0x0000000000026ad6
- (id)decoratorIdentifier;	// IMP=0x00000000000265aa
- (id)initWithTintColor:(id)arg1;	// IMP=0x000000000002653c

@end
