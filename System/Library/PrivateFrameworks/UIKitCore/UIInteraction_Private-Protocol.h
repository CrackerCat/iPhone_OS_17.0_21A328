//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIInteraction-Protocol.h>

@class UIWindow;
@protocol UIInteractionEffect;

@protocol UIInteraction_Private <UIInteraction>

@optional
@property(retain, nonatomic) id <UIInteractionEffect> interactionEffect;
- (void)_didMoveFromWindow:(UIWindow *)arg1 toWindow:(UIWindow *)arg2;
@end
