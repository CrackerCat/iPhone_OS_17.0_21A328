//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAPPairingIdentity, HAPSecuritySession, NSArray, NSData, NSError, NSString;

@protocol HAPSecuritySessionDelegate <NSObject>
- (void)securitySession:(HAPSecuritySession *)arg1 didReceiveSetupExchangeData:(NSData *)arg2;
- (HAPPairingIdentity *)securitySession:(HAPSecuritySession *)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(NSString *)arg2 error:(id *)arg3;
- (HAPPairingIdentity *)securitySession:(HAPSecuritySession *)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;

@optional
- (NSString *)shortDescription;
- (void)securitySessionWillCloseWithResponseData:(NSData *)arg1 error:(id *)arg2;
- (NSArray *)securitySessionDidRequestAdditionalDerivedKeyTuples:(HAPSecuritySession *)arg1;
- (void)securitySession:(HAPSecuritySession *)arg1 didCloseWithError:(NSError *)arg2;
- (void)securitySessionDidOpen:(HAPSecuritySession *)arg1;
- (void)securitySessionIsOpening:(HAPSecuritySession *)arg1;
@end
