//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreAutoLayout/NSObject-Protocol.h>

@class NSArray, _NSLayoutRuleNode;

@protocol _NSLayoutRuleNodeParent <NSObject>
@property(readonly, copy) NSArray *_childRuleNodes;
- (void)_removeChildRuleNode:(_NSLayoutRuleNode *)arg1;
- (void)_addChildRuleNode:(_NSLayoutRuleNode *)arg1;
@end
