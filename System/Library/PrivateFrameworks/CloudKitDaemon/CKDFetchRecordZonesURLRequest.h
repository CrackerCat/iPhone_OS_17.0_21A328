//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSMutableDictionary;

@interface CKDFetchRecordZonesURLRequest : CKDURLRequest
{
    _Bool _onlyFetchPCSInfo;	// 8 = 0x8
    NSArray *_recordZones;	// 16 = 0x10
    CDUnknownBlockType _recordZoneFetchedBlock;	// 24 = 0x18
    CDUnknownBlockType _errorFetchingAllRecordZonesBlock;	// 32 = 0x20
    CDUnknownBlockType _anonymousRecordZoneTuplesFetchedBlock;	// 40 = 0x28
    NSArray *_zoneIDs;	// 48 = 0x30
    NSMutableDictionary *_zoneIDByRequestID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000037f65b
@property(retain, nonatomic) NSMutableDictionary *zoneIDByRequestID; // @synthesize zoneIDByRequestID=_zoneIDByRequestID;
@property(retain, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
@property(copy, nonatomic) CDUnknownBlockType anonymousRecordZoneTuplesFetchedBlock; // @synthesize anonymousRecordZoneTuplesFetchedBlock=_anonymousRecordZoneTuplesFetchedBlock;
@property(copy, nonatomic) CDUnknownBlockType errorFetchingAllRecordZonesBlock; // @synthesize errorFetchingAllRecordZonesBlock=_errorFetchingAllRecordZonesBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneFetchedBlock; // @synthesize recordZoneFetchedBlock=_recordZoneFetchedBlock;
@property(nonatomic) _Bool onlyFetchPCSInfo; // @synthesize onlyFetchPCSInfo=_onlyFetchPCSInfo;
@property(readonly, nonatomic) NSArray *recordZones; // @synthesize recordZones=_recordZones;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x000000000037f381
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x000000000037df52
- (id)generateRequestOperations;	// IMP=0x000000000037d7e3
- (_Bool)requiresCKAnonymousUserIDs;	// IMP=0x000000000037d765
- (_Bool)handlesAnonymousCKUserIDPropagation;	// IMP=0x000000000037d75d
- (id)requestOperationClasses;	// IMP=0x000000000037d6f1
- (id)zoneIDsToLock;	// IMP=0x000000000037d6df
- (_Bool)allowsAnonymousAccount;	// IMP=0x000000000037d6c5
- (void)fillOutRequestProperties:(id)arg1;	// IMP=0x000000000037d634
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x000000000037d54c
- (id)initWithOperation:(id)arg1 recordZoneIDs:(id)arg2;	// IMP=0x000000000037d481

@end
