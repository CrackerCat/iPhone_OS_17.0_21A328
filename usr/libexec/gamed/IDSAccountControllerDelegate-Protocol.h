//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class IDSAccount, IDSAccountController;

@protocol IDSAccountControllerDelegate <NSObject>

@optional
- (void)accountController:(IDSAccountController *)arg1 accountDisabled:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountEnabled:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountRemoved:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountUpdated:(IDSAccount *)arg2;
- (void)accountController:(IDSAccountController *)arg1 accountAdded:(IDSAccount *)arg2;
@end
