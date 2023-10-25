//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataDeliveryServices/NSObject-Protocol.h>

@class DDSAssetQuery, MAAssetQuery, NSString;

@protocol DDSMobileAssetv2ProviderDataSource <NSObject>
@property(readonly) long long mecabraDictionaryRapidUpdatesAssetCompatabilityVersion;
@property(readonly) long long linguisticAssetCompatabilityVersion;
- (MAAssetQuery *)maAssetQueryForDDSAssetQuery:(DDSAssetQuery *)arg1 compatabilityVersion:(long long)arg2 platformVersion:(NSString *)arg3 internalInstall:(_Bool)arg4;
@end
