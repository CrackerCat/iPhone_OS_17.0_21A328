//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CNMeCardSharingPickerViewController, UIViewController;

@protocol CNMeCardSharingPickerViewControllerDelegate <NSObject>
- (void)sharingPickerDidFinish:(CNMeCardSharingPickerViewController *)arg1;
- (void)sharingPicker:(CNMeCardSharingPickerViewController *)arg1 didSelectNameFormat:(unsigned long long)arg2;
- (void)sharingPicker:(CNMeCardSharingPickerViewController *)arg1 didSelectSharingAudience:(unsigned long long)arg2;
- (void)sharingPicker:(CNMeCardSharingPickerViewController *)arg1 didChangeSharingState:(_Bool)arg2;

@optional
- (void)sharingPickerDidCancel:(CNMeCardSharingPickerViewController *)arg1;
- (void)sharingPicker:(UIViewController *)arg1 didSelectSharingStatus:(unsigned long long)arg2;
@end
