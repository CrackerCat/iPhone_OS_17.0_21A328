//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSData, NSNumber, NSString, SSAuthenticationContext;

@interface PostPushNotificationTokenOperation : ISOperation
{
    SSAuthenticationContext *_authenticationContext;	// 96 = 0x60
    NSString *_environmentName;	// 104 = 0x68
    NSData *_tokenData;	// 112 = 0x70
}

- (_Bool)_postTokenToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00200000000a5efd
- (void)run;	// IMP=0x00100000000a5939
@property(readonly) NSData *tokenData;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) NSString *environmentName;
- (void)dealloc;	// IMP=0x00100000000a57e1
- (id)initWithEnvironmentName:(id)arg1 tokenData:(id)arg2;	// IMP=0x00100000000a5759
- (id)init;	// IMP=0x00100000000a5743

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end
