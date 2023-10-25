//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOOfflineDataConfiguration, NSDictionary;

@protocol GEOOfflineDataConfigurationObserver <NSObject>

@optional
- (void)offlineDataConfiguration:(GEOOfflineDataConfiguration *)arg1 didChangeRegulatoryRegionID:(unsigned int)arg2;
- (void)offlineDataConfiguration:(GEOOfflineDataConfiguration *)arg1 didChangeUpdateAvailability:(_Bool)arg2;
- (void)offlineDataConfiguration:(GEOOfflineDataConfiguration *)arg1 didChangeLatestAvailableVersions:(NSDictionary *)arg2;
- (void)offlineDataConfiguration:(GEOOfflineDataConfiguration *)arg1 didChangeActiveVersions:(NSDictionary *)arg2;
@end
