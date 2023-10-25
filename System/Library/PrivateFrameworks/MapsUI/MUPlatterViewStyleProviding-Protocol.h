//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class UIColor, UITraitCollection, UIVisualEffect;

@protocol MUPlatterViewStyleProviding <NSObject>
@property(readonly, nonatomic) UIColor *fillColor;
@property(readonly, nonatomic) long long backgroundStyle;
- (UIVisualEffect *)visualEffectForTraitCollection:(UITraitCollection *)arg1;
@end
