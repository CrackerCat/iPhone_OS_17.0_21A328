//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSApplicationInfo.h>

@interface FBSApplicationInfo (DEPRECATED)
- (long long)_mapSignatureStateFromTrustState:(unsigned long long)arg1;	// IMP=0x0030000000050ee0
- (void)acceptApplicationSignatureIdentity;	// IMP=0x0030000000050dd4
- (id)_signatureValidationService;	// IMP=0x0030000000050cba
@property(readonly, nonatomic, getter=hasUniversalProvisioningProfile) _Bool universalProvisioningProfile;
@property(readonly, nonatomic, getter=hasFreeDeveloperProvisioningProfile) _Bool freeDeveloperProvisioningProfile;
@property(readonly, nonatomic) long long signatureState;
- (id)_initForProfileManagerTesting;	// IMP=0x0030000000050bbf
@end
