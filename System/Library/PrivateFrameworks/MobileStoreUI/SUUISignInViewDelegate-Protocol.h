//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileStoreUI/NSObject-Protocol.h>

@class NSString, SUUISignInView;

@protocol SUUISignInViewDelegate <NSObject>

@optional
- (void)signInEntryComplete:(SUUISignInView *)arg1 accountName:(NSString *)arg2 password:(NSString *)arg3;
@end
