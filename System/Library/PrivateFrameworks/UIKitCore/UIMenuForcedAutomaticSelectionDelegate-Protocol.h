//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIMenu, UIMenuElement;
@protocol _UIMenuLeaf;

@protocol UIMenuForcedAutomaticSelectionDelegate <NSObject>
- (void)forcedSelectionOfMenu:(UIMenu *)arg1 willChangeTo:(UIMenuElement<_UIMenuLeaf> *)arg2;
@end
