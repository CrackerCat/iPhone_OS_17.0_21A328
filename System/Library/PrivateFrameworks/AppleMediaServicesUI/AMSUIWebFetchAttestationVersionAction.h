//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount;

__attribute__((visibility("hidden")))
@interface AMSUIWebFetchAttestationVersionAction
{
    ACAccount *_account;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009ddeb
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)minimumVersions;	// IMP=0x000000000009da20
- (id)runAction;	// IMP=0x000000000009d504
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000009d426

@end
