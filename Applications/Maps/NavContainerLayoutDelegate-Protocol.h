//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NavJunctionViewInfo, UIViewController;

@protocol NavContainerLayoutDelegate <NSObject>
- (void)hideJunctionViewIfNeeded;
- (void)showJunctionViewIfNeeded;
- (void)willHideJunctionView;
- (void)willDisplayJunctionViewInfo:(NavJunctionViewInfo *)arg1;
- (_Bool)canDisplayJunctionViewInfo;
- (void)suppressTransitionsOfContainee:(UIViewController *)arg1;
- (void)layoutNavContainer;
@end
