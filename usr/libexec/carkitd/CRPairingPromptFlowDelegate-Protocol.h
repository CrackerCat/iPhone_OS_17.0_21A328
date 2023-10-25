//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRPairingPromptFlowController;

@protocol CRPairingPromptFlowDelegate <NSObject>
- (void)pairingPromptFlow:(CRPairingPromptFlowController *)arg1 receivedEnhancedIntegrationResponse:(_Bool)arg2;
- (void)pairingPromptFlow:(CRPairingPromptFlowController *)arg1 receivedConnectCarPlayResponse:(_Bool)arg2;
- (void)pairingPromptFlow:(CRPairingPromptFlowController *)arg1 receivedUseWirelessResponse:(_Bool)arg2;
- (void)pairingPromptFlow:(CRPairingPromptFlowController *)arg1 receivedAllowWhileLockedResponse:(_Bool)arg2;
- (void)didCompletePairingPromptFlow:(CRPairingPromptFlowController *)arg1;
- (void)didCancelPairingPromptFlow:(CRPairingPromptFlowController *)arg1;
- (void)pairingPromptFlow:(CRPairingPromptFlowController *)arg1 wantsToPerformPresentation:(void (^)(id <CRPairingPromptPresenting>))arg2;
- (_Bool)enhancedIntegrationSupportedForPairingPromptFlow:(CRPairingPromptFlowController *)arg1;
@end
