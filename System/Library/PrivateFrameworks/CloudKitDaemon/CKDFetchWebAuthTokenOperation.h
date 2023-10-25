//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol CKFetchWebAuthTokenOperationCallbacks;

@interface CKDFetchWebAuthTokenOperation
{
    NSString *_webAuthToken;	// 8 = 0x8
    NSString *_APIToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000023de6d
@property(copy, nonatomic) NSString *APIToken; // @synthesize APIToken=_APIToken;
@property(copy, nonatomic) NSString *webAuthToken; // @synthesize webAuthToken=_webAuthToken;
- (void)main;	// IMP=0x000000000023d578
- (int)operationType;	// IMP=0x000000000023d56d
- (id)activityCreate;	// IMP=0x000000000023d544
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000023d493

// Remaining properties
@property(retain, nonatomic) id <CKFetchWebAuthTokenOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end
