//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class BannerController, NSArray, SFPinnableBanner;

@protocol BannerControllerDelegate <NSObject>

@optional
- (void)bannerController:(BannerController *)arg1 didSetTabGroupBanner:(SFPinnableBanner *)arg2 previousBanner:(SFPinnableBanner *)arg3 animated:(_Bool)arg4;
- (void)bannerController:(BannerController *)arg1 didSetPrivateBrowsingPrivacyProtectionsBanner:(SFPinnableBanner *)arg2 previousBanner:(SFPinnableBanner *)arg3 animated:(_Bool)arg4;
- (void)bannerController:(BannerController *)arg1 didSetRemotelyEnabledExtensionBanner:(SFPinnableBanner *)arg2 previousBanner:(SFPinnableBanner *)arg3 animated:(_Bool)arg4;
- (void)bannerController:(BannerController *)arg1 didSetWebExtensionPermissionGrantedBanner:(SFPinnableBanner *)arg2 previousBanner:(SFPinnableBanner *)arg3 animated:(_Bool)arg4;
- (void)bannerController:(BannerController *)arg1 didSetWebExtensionBanner:(SFPinnableBanner *)arg2 previousBanner:(SFPinnableBanner *)arg3 animated:(_Bool)arg4;
- (void)bannerController:(BannerController *)arg1 didSetCrashBanner:(SFPinnableBanner *)arg2 previousBanner:(SFPinnableBanner *)arg3 animated:(_Bool)arg4;
- (void)bannerController:(BannerController *)arg1 didSetAppBanner:(SFPinnableBanner *)arg2 previousBanner:(SFPinnableBanner *)arg3 animated:(_Bool)arg4;
- (void)bannerController:(BannerController *)arg1 didUpdateTopBanners:(NSArray *)arg2;
@end
