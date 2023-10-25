//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMSDPurchaseService : NSObject
{
}

+ (id)_odiSessionCacheAccessQueue;	// IMP=0x00200000000357e6
+ (id)_odiSessionCache;	// IMP=0x001000000003577c
+ (id)_fdsResultCacheAccessQueue;	// IMP=0x00100000000356fb
+ (id)_fdsResultCache;	// IMP=0x00100000000356a6
+ (id)_fdsEvaluatorCacheAccessQueue;	// IMP=0x0010000000035625
+ (id)_fdsEvaluatorCache;	// IMP=0x00100000000355bb
+ (id)_fdsConsumedCacheAccessQueue;	// IMP=0x001000000003553a
+ (id)_fdsConsumedCache;	// IMP=0x00100000000354d0
+ (_Bool)isConnectionEntitled:(id)arg1;	// IMP=0x0010000000034593
- (id)_serverEndpointIdentifierForFDSAction:(unsigned long long)arg1;	// IMP=0x00200000000354ac
- (void)updateODIWithAttributes:(id)arg1 forSessionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003533b
- (void)provideFeedbackOnPayloadOutcome:(unsigned long long)arg1 sessionIdentifier:(id)arg2 clearCache:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000351ca
- (void)getODIAssessmentForSessionIdentifier:(id)arg1 clearCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000035057
- (void)createODISessionWithSessionIdentifier:(id)arg1 accountType:(unsigned long long)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000034ee4
- (void)generateFDSWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000034e7a
- (void)didConsumeFDSForPurchaseIdentifier:(id)arg1 logKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000034c3c
- (void)cacheFDS:(id)arg1 forPurchaseIdentifier:(id)arg2 logKey:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000034972
- (void)cachedFDSForPurchaseIdentifier:(id)arg1 logKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003461d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
