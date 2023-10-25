//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class NSError;
@protocol HMDSBSRemoteAlertHandle;

@protocol HMDSBSRemoteAlertHandleObserver <NSObject>
- (void)remoteAlertHandle:(id <HMDSBSRemoteAlertHandle>)arg1 didInvalidateWithError:(NSError *)arg2;
- (void)remoteAlertHandleDidDeactivate:(id <HMDSBSRemoteAlertHandle>)arg1;
- (void)remoteAlertHandleDidActivate:(id <HMDSBSRemoteAlertHandle>)arg1;
@end
