//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIColor, UIView;

@protocol _UIScrollViewScrollIndicatorVisualStyle <NSObject>
@property(readonly, nonatomic) _Bool doesExpand;
@property(readonly, nonatomic) _Bool clipsToBounds;
@property(readonly, nonatomic) struct UIEdgeInsets cursorHitTestingInsets;
@property(readonly, nonatomic) double staticDimensionExpandedSize;
@property(readonly, nonatomic) double staticDimensionSize;
- (CDStruct_f413d7fe)valuesForLayoutSizeAnimationWhenExpanding:(_Bool)arg1;
- (UIColor *)colorForIndicatorStyle:(long long)arg1 expanded:(_Bool)arg2;
- (struct CGRect)hitTestingRectForIndicatorRect:(struct CGRect)arg1;
- (double)fillViewCornerRadiusForStaticDimensionSize:(double)arg1;
- (UIView *)fillView;
@end
