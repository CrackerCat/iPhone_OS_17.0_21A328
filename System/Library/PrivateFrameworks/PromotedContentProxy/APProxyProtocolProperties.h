//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APNSURLSessionDemultiplexerManager, APProxySessionConfigurationProvider, APProxyURLCredentialService;

@interface APProxyProtocolProperties : NSObject
{
    APProxySessionConfigurationProvider *_proxySessionConfigurationProvider;	// 8 = 0x8
    APNSURLSessionDemultiplexerManager *_sessionDemultiplexerManager;	// 16 = 0x10
    APProxyURLCredentialService *_proxyURLCredentialService;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000028a3
@property(retain, nonatomic) APProxyURLCredentialService *proxyURLCredentialService; // @synthesize proxyURLCredentialService=_proxyURLCredentialService;
@property(retain, nonatomic) APNSURLSessionDemultiplexerManager *sessionDemultiplexerManager; // @synthesize sessionDemultiplexerManager=_sessionDemultiplexerManager;
@property(retain, nonatomic) APProxySessionConfigurationProvider *proxySessionConfigurationProvider; // @synthesize proxySessionConfigurationProvider=_proxySessionConfigurationProvider;

@end
