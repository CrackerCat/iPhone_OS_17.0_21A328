//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AutomationMode/NSObject-Protocol.h>

@protocol XAMAuthorization;

@protocol XAMAuthorizationProvider <NSObject>
- (id <XAMAuthorization>)authorizationWithError:(id *)arg1;
- (void)requestAuthorizationWithReply:(void (^)(id <XAMAuthorization>, NSError *))arg1;
@end
