//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAGradientLayer;

__attribute__((visibility("hidden")))
@interface AEGradientShadowView : UIView
{
    CAGradientLayer *_gradientLayer;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x0060000000013bc2
- (void).cxx_destruct;	// IMP=0x0000000000013baf
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void)_configureGradientLayer;	// IMP=0x00000000000138b7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000013807

@end
