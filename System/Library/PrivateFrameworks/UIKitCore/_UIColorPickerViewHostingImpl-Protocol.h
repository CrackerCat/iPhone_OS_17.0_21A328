//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteSheetContaining-Protocol.h>

@class UIColor, UIColorPickerViewController, _UIColorPickerViewControllerConfiguration;

@protocol _UIColorPickerViewHostingImpl <_UIRemoteSheetContaining>
@property(nonatomic) __weak UIColorPickerViewController *delegateColorPickerViewController;
- (void)setRemoteConfiguration:(_UIColorPickerViewControllerConfiguration *)arg1;
- (void)setRemoteSelectedColor:(UIColor *)arg1;
- (void)setupRemoteHosting;
@end
