//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginInitiatorCompanionAuthentication
{
    ACAccount *_account;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0060000000646f5b
- (void).cxx_destruct;	// IMP=0x0000000000646ec0
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)_authenticate;	// IMP=0x0000000000646a32
- (void)authenticate;	// IMP=0x00000000006469c1
- (int)loginType;	// IMP=0x00000000006469b6
- (id)description;	// IMP=0x0000000000646923
- (void)dealloc;	// IMP=0x0000000000646833
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 account:(id)arg6;	// IMP=0x000000000064679c

@end
