//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPXDomainContext, NSDictionary;

__attribute__((visibility("hidden")))
@interface FPXServiceEndpointFactory : NSObject
{
    NSDictionary *_serviceSources;	// 8 = 0x8
    FPXDomainContext *_domainContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000418f5
- (void)getListenerEndpointForServiceName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000041806
- (id)initWithServiceSources:(id)arg1 domainContext:(id)arg2;	// IMP=0x0000000000041760

@end
