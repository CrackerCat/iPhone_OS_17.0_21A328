//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSMutableURLRequest.h>

@interface NSMutableURLRequest (AppleAccount)
- (void)aa_addSpyglassModeHeaderWithMask:(unsigned long long)arg1;	// IMP=0x00700000000514d8
- (void)aa_addAppProvidedContext:(id)arg1;	// IMP=0x00700000000514bf
- (void)aa_addProxiedAuthHeaderWithAccount:(id)arg1;	// IMP=0x007000000005132e
- (void)aa_addLocationSharingAllowedHeader;	// IMP=0x00700000000512e8
- (void)aa_addContentTypeHeaders:(id)arg1;	// IMP=0x0070000000051289
- (void)aa_addClientInfoHeaders;	// IMP=0x007000000005103c
- (_Bool)aa_addDeviceProvisioningInfoHeadersWithDSIDFromReponse:(id)arg1;	// IMP=0x0070000000050bf2
- (void)aa_addLoggedInAppleIDHeaderWithAccount:(id)arg1;	// IMP=0x0070000000050b8c
- (void)aa_addMultiUserDeviceHeaderIfEnabled;	// IMP=0x0070000000050b86
- (void)aa_addDeviceIDHeader;	// IMP=0x0070000000050ab3
- (void)aa_addDeviceInternalDevHeaderIfEnabled;	// IMP=0x0070000000050a47
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg1 sendEmptyValues:(_Bool)arg2;	// IMP=0x0070000000050929
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg1;	// IMP=0x0070000000050915
- (void)aa_addDeviceProvisioningInfoHeadersWithAccount:(id)arg1;	// IMP=0x00700000000508c6
- (_Bool)aa_addGrandslamAuthorizationheaderWithAltDSID:(id)arg1 heartbeatToken:(id)arg2;	// IMP=0x00700000000507ef
- (_Bool)aa_addGrandslamAuthorizationHeaderWithAltDSID:(id)arg1 grandslamToken:(id)arg2;	// IMP=0x0070000000050718
- (_Bool)aa_addGrandSlamAuthorizationHeaderWithAccount:(id)arg1 grandslamToken:(id)arg2;	// IMP=0x00700000000505a3
- (void)aa_setXMLBodyWithParameters:(id)arg1 signingSession:(id)arg2;	// IMP=0x0070000000050528
- (void)aa_signBodyData:(id)arg1 withSigningSession:(id)arg2;	// IMP=0x0070000000050432
- (void)aa_setJSONBodyWithParameters:(id)arg1;	// IMP=0x007000000005027d
- (id)aa_setXMLBodyWithParameters:(id)arg1;	// IMP=0x007000000005015d
- (void)aa_setBodyWithParameters:(id)arg1;	// IMP=0x007000000005005d
- (_Bool)aa_addAuthTokenOrBasicAuthHeaderWithAccount:(id)arg1 preferUsingPassword:(_Bool)arg2;	// IMP=0x007000000004fdf9
- (void)aa_addBasicAuthorizationHeaderWithAccount:(id)arg1 authToken:(id)arg2;	// IMP=0x007000000004fc0f
- (void)aa_addBasicAuthorizationHeaderWithAccount:(id)arg1 preferUsingPassword:(_Bool)arg2;	// IMP=0x007000000004f6ab
- (void)aa_addAltDSIDAndRepairStateWithAccount:(id)arg1;	// IMP=0x007000000004f5c9
- (void)aa_addBasicAuthPasswordWithAccount:(id)arg1;	// IMP=0x007000000004f433
- (void)aa_addTokenAuthHeaderWithAccount:(id)arg1;	// IMP=0x007000000004f29d
@end
