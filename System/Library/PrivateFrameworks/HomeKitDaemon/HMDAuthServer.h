//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@protocol HMDAuthServerDelegate;

__attribute__((visibility("hidden")))
@interface HMDAuthServer : HMFObject
{
    id <HMDAuthServerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000094ba2c
@property(readonly) __weak id <HMDAuthServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendActivationConfirmation:(id)arg1 uuid:(id)arg2 context:(id)arg3;	// IMP=0x000000000094ba0d
- (void)sendActivationRequest:(id)arg1 uuid:(id)arg2 context:(id)arg3;	// IMP=0x000000000094ba07
- (void)sendPPIDInfoRequest:(id)arg1 model:(id)arg2 token:(id)arg3 authFeatures:(unsigned long long)arg4 uuid:(id)arg5 context:(id)arg6;	// IMP=0x000000000094ba01
- (void)getPPIDInfo:(id)arg1 model:(id)arg2 cert:(id)arg3 context:(id)arg4;	// IMP=0x000000000094b9fb
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000094b9cc

@end
