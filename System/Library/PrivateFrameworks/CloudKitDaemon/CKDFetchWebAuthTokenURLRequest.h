//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSString;

@interface CKDFetchWebAuthTokenURLRequest : CKDURLRequest
{
    NSString *_APIToken;	// 8 = 0x8
    CDUnknownBlockType _tokenFetchedBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000027dc0f
@property(copy, nonatomic) CDUnknownBlockType tokenFetchedBlock; // @synthesize tokenFetchedBlock=_tokenFetchedBlock;
@property(copy, nonatomic) NSString *APIToken; // @synthesize APIToken=_APIToken;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x000000000027db22
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x000000000027da09
- (id)generateRequestOperations;	// IMP=0x000000000027d8a5
- (id)requestOperationClasses;	// IMP=0x000000000027d839
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x000000000027d79e

@end
