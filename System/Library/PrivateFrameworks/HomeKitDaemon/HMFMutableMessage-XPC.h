//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMutableMessage.h>

@class HMDBackingStoreTransactionActions, HMDRemoteMessageSenderContext, NSString;

@interface HMFMutableMessage (XPC)
+ (id)internalMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;	// IMP=0x00200000006429e7
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0020000000642996
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2;	// IMP=0x0020000000642981
- (void)setRequiresWalletKeyEntitlement;	// IMP=0x00100000003704d8
- (void)setSendPolicy:(id)arg1;	// IMP=0x00100000003704bf
- (void)setRequiresPersonManagerEntitlement;	// IMP=0x001000000037049f
- (void)setRequiresMultiUserSetupEntitlement;	// IMP=0x001000000037047f
- (void)setRequiresCameraClipsEntitlement;	// IMP=0x001000000037045f
- (void)setRequiresMatterSetupPayloadEntitlement;	// IMP=0x001000000037043f
- (void)setRequiresSetupPayloadEntitlement;	// IMP=0x001000000037041f
@property(nonatomic) _Bool requiresNoSPIEntitlement;
- (void)setRequiresNoSPIEntitlement;	// IMP=0x00100000003703ae
@property(nonatomic) _Bool requiresSPIEntitlement;
- (void)setRequiresSPIEntitlement;	// IMP=0x001000000037033d
@property(retain) HMDBackingStoreTransactionActions *transactionResult;
@property(nonatomic, getter=isInternal) _Bool internal;
@property(retain, nonatomic) HMDRemoteMessageSenderContext *remoteSenderContext;
- (void)setRemoteResponseRestriction:(unsigned long long)arg1;	// IMP=0x0010000000cfeb00
@property(nonatomic) unsigned long long remoteRestriction;
@property(retain, nonatomic) NSString *remoteToID;
@property(retain, nonatomic) NSString *remoteSourceID;
@property(nonatomic, getter=isSecureRemote) _Bool secureRemote;
@property(nonatomic, getter=isRemote) _Bool remote;
@end
