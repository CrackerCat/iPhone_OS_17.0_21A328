//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BulletinBoard/NSObject-Protocol.h>

@class BBDataProviderIdentity, BBParentSectionDataProviderFactory, NSString;
@protocol BBRemoteDataProviderClientProxy;

@protocol BBDataProviderConnectionServerProxy <NSObject>
- (void)clientIsReady:(void (^)(void))arg1;
- (void)addParentSectionFactory:(BBParentSectionDataProviderFactory *)arg1;
- (void)removeDataProviderWithSectionID:(NSString *)arg1;
- (void)addDataProviderWithSectionID:(NSString *)arg1 clientProxy:(id <BBRemoteDataProviderClientProxy>)arg2 identity:(BBDataProviderIdentity *)arg3 completion:(void (^)(id <BBRemoteDataProviderServerProxy>))arg4;
@end
