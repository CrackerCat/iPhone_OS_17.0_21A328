//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@interface CKDFetchRegisteredBundleIDsURLRequest : CKDURLRequest
{
    CDUnknownBlockType _bundleIDsFetchedBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000032d7f
@property(copy, nonatomic) CDUnknownBlockType bundleIDsFetchedBlock; // @synthesize bundleIDsFetchedBlock=_bundleIDsFetchedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x0000000000032cb4
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x0000000000032b9b
- (id)generateRequestOperations;	// IMP=0x00000000000329be
- (id)sourceApplicationSecondaryIdentifier;	// IMP=0x00000000000329b6
- (id)applicationBundleIdentifierForNetworkAttribution;	// IMP=0x00000000000329a9
- (id)applicationBundleIdentifierForContainerAccess;	// IMP=0x000000000003299c
- (_Bool)requiresTokenRegistration;	// IMP=0x0000000000032994
- (id)requestOperationClasses;	// IMP=0x0000000000032928
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x00000000000328f9

@end
