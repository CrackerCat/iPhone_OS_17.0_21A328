//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSString;
@protocol WBSCloudTabDeviceProvider;

@protocol WBSCloudTabDeviceObserving <NSObject>

@optional
- (void)cloudTabDeviceProvider:(id <WBSCloudTabDeviceProvider>)arg1 didUpdateCloudTabsInProfileWithIdentifier:(NSString *)arg2;
@end
