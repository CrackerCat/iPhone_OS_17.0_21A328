//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSURL, SKUIIPhoneProductPageViewController, SKUIItem;

@protocol SKUIIPhoneProductPageDelegate <NSObject>

@optional
- (_Bool)iPhoneProductPage:(SKUIIPhoneProductPageViewController *)arg1 shouldOpenURL:(NSURL *)arg2;
- (_Bool)iPhoneProductPage:(SKUIIPhoneProductPageViewController *)arg1 shouldOpenItem:(SKUIItem *)arg2;
@end
