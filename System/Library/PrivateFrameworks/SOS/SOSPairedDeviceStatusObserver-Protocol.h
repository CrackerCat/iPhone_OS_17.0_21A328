//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SOS/NSObject-Protocol.h>

@class SOSStatus;

@protocol SOSPairedDeviceStatusObserver <NSObject>

@optional
- (void)pairedDeviceSOSStatusDidUpdate:(SOSStatus *)arg1 progression:(long long)arg2 shouldHandleThirdParty:(_Bool)arg3;
@end
