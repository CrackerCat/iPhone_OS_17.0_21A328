//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary;

@interface PDPushLocalClassChanges
{
    NSMutableArray *_beingPushedSyncableCLSAssetItems;	// 24 = 0x18
    NSMutableArray *_beingPushedSyncableOtherItems;	// 32 = 0x20
    NSMutableArray *_toBePushedSyncableNewCLSAssetItems;	// 40 = 0x28
    NSMutableArray *_toBePushedSyncableOtherItems;	// 48 = 0x30
    NSMutableDictionary *_multipleChoiceAnswerItemParentChildMap;	// 56 = 0x38
    NSMutableDictionary *_surveyPayloadIDMap;	// 64 = 0x40
    unsigned long long _editErrorFlags;	// 72 = 0x48
    NSMutableDictionary *_errorItemIDs;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000180656
- (_Bool)_shouldSkipGeneratingPayload:(id)arg1;	// IMP=0x0010000000180586
- (_Bool)processPayloadStatus:(id)arg1 allowMixedResponse:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000017ff77
- (_Bool)shouldProcessPayload:(id)arg1;	// IMP=0x001000000017fec4
- (_Bool)wantsToExecute;	// IMP=0x001000000017fdcc
- (void)prepare;	// IMP=0x001000000017eefb
- (_Bool)_deleteSyncItemsWithIDs:(id)arg1;	// IMP=0x001000000017eae8
- (void)updateSchdeuleSyncStatus:(id)arg1 status:(long long)arg2;	// IMP=0x001000000017ea6f
- (void)updateSurveySyncStatus:(id)arg1 status:(long long)arg2;	// IMP=0x001000000017e9f6
- (void)_updateAssetStatusUsingPendingCLSSyncItemsWithIDs:(id)arg1 status:(long long)arg2;	// IMP=0x001000000017e65b
- (_Bool)processPayloadFromResponse:(id)arg1 error:(id *)arg2;	// IMP=0x001000000017e3b3
- (_Bool)processResponseObject:(id)arg1 error:(id *)arg2;	// IMP=0x001000000017dd33
- (_Bool)stopProcessingIfResponseStatusPayloadFailed;	// IMP=0x001000000017dd2b
- (id)requestData;	// IMP=0x001000000017d097
- (_Bool)allowMixedResponseStatusCode;	// IMP=0x001000000017d08f
- (Class)expectedResponseClass;	// IMP=0x001000000017d07e
- (id)acceptContentType;	// IMP=0x001000000017d071
- (id)requestContentType;	// IMP=0x001000000017d064
- (id)endpointIdentifier;	// IMP=0x001000000017d057
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x001000000017d03e
- (id)logSubsystem;	// IMP=0x001000000017d02a
- (id)initWithDatabase:(id)arg1;	// IMP=0x001000000017cfa7

@end
