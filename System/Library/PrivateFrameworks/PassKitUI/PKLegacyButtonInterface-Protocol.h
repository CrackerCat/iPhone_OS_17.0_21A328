//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class UIColor, UIImage;

@protocol PKLegacyButtonInterface <NSObject>
@property(nonatomic) _Bool showSpinner;
- (void)updateWithImage:(UIImage *)arg1;
- (void)updateActivityIndicatorColorWithColor:(UIColor *)arg1;
- (void)updateTitleColorWithColor:(UIColor *)arg1;
- (void)updateBackgroundColorWithColor:(UIColor *)arg1;
@end
