//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewPropertyAnimator.h>

@class UICubicTimingParameters, UISpringTimingParameters;

__attribute__((visibility("hidden")))
@interface SLDisambiguationCollectionViewAnimator : UIViewPropertyAnimator
{
}

+ (id)springAnimation;	// IMP=0x001000000002630f
+ (id)init;	// IMP=0x00100000000261a2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000026309
@property(readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property(readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property(readonly, nonatomic) long long timingCurveType;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002620f
- (id)commonInit;	// IMP=0x00000000000261e1

@end
