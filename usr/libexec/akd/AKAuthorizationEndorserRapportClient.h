//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthorizationDaemonService, NSString, RPCompanionLinkClient, RPCompanionLinkDevice;
@protocol AKAuthorizationEndorserRapportClientDelegate;

@interface AKAuthorizationEndorserRapportClient : NSObject
{
    id <AKAuthorizationEndorserRapportClientDelegate> _delegate;	// 8 = 0x8
    RPCompanionLinkClient *_endorseeClient;	// 16 = 0x10
    RPCompanionLinkDevice *_endorseeDevice;	// 24 = 0x18
    AKAuthorizationDaemonService *_authorizationService;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000824e6
@property(retain, nonatomic) AKAuthorizationDaemonService *authorizationService; // @synthesize authorizationService=_authorizationService;
@property(retain, nonatomic) RPCompanionLinkDevice *endorseeDevice; // @synthesize endorseeDevice=_endorseeDevice;
@property(retain, nonatomic) RPCompanionLinkClient *endorseeClient; // @synthesize endorseeClient=_endorseeClient;
@property(nonatomic) __weak id <AKAuthorizationEndorserRapportClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_sendDidStartServerAuthorizationEvent;	// IMP=0x001000000008225d
- (void)_sendAuthorizationDidFinishRequestWithError:(id)arg1;	// IMP=0x0010000000081de1
- (void)_sendAuthorizationDidFinishRequestWithAuthorization:(id)arg1;	// IMP=0x00100000000819b3
- (void)_handleStartAuthorizationWithResponse:(id)arg1;	// IMP=0x00100000000815cc
- (void)_sendStartAuthorizationRequest;	// IMP=0x00100000000812bb
- (void)_deactivate;	// IMP=0x0010000000081244
- (void)authorizationDaemonServiceWillProcessUserResponse:(id)arg1;	// IMP=0x0010000000081232
- (void)startAuthorizationWithCompanionLinkClient:(id)arg1;	// IMP=0x001000000008101d
- (void)startAuthorization;	// IMP=0x0010000000080fd1
- (id)initWithDeviceID:(id)arg1;	// IMP=0x0010000000080f35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
