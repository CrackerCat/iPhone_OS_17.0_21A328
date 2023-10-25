//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface APAMSBagManager : NSObject
{
}

+ (void)cacheSizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x002000000002649b
+ (void)httpLookBackWindowWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000026365
+ (void)httpMaximumConnectionsPerHostTempSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000026228
+ (void)httpMaximumConnectionsPerHostWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000260eb
+ (void)httpUseFixedHttpSessionManagerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000025fb3
+ (void)shouldUseAMSMescalWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000025db9
+ (_Bool)shouldUseAMSMescal;	// IMP=0x0010000000025c35
+ (_Bool)isSponsoredAdsEnabledForAdTrackingd;	// IMP=0x0010000000025aab
+ (_Bool)isSearchLandingAdsEnabled;	// IMP=0x0010000000025921
+ (id)mediaAPIHostURL;	// IMP=0x00100000000258ca
+ (id)mediaAPICountryCode;	// IMP=0x0010000000025873
+ (id)adprivacydBag;	// IMP=0x00100000000257a9
+ (id)bagSubProfileVersion;	// IMP=0x0010000000025759
+ (id)bagSubProfile;	// IMP=0x0010000000025709

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
