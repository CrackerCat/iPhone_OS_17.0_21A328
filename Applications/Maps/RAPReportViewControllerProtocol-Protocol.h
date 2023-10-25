//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class RAPQuestion, RAPReport, RAPUserInfoPart, UIBarButtonItem;

@protocol RAPReportViewControllerProtocol <NSObject>
@property(readonly, copy, nonatomic) CDUnknownBlockType completion;
@property(readonly, nonatomic) RAPUserInfoPart *userInfoPart;
@property(readonly, nonatomic) UIBarButtonItem *sendButtonItem;
@property(readonly, nonatomic) RAPReport *report;
- (void)_send;
- (void)invokeCompletionWithOutcome:(long long)arg1;
- (id)initWithReport:(RAPReport *)arg1 question:(RAPQuestion *)arg2 completion:(void (^)(id, long long))arg3;
@end
