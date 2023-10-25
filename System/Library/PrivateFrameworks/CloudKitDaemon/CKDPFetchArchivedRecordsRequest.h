//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPAssetsToDownload, CKDPRecordZoneIdentifier, NSData;

@interface CKDPFetchArchivedRecordsRequest : PBRequest
{
    NSData *_archiveContinuationToken;	// 8 = 0x8
    CKDPAssetsToDownload *_assetsToDownload;	// 16 = 0x10
    unsigned int _limit;	// 24 = 0x18
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 32 = 0x20
    _Bool _newestFirst;	// 40 = 0x28
    struct {
        unsigned int limit:1;
        unsigned int newestFirst:1;
    } _has;	// 44 = 0x2c
}

+ (id)options;	// IMP=0x00100000001d4878
- (void).cxx_destruct;	// IMP=0x00000000001d55a0
@property(retain, nonatomic) CKDPAssetsToDownload *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property(nonatomic) unsigned int limit; // @synthesize limit=_limit;
@property(nonatomic) _Bool newestFirst; // @synthesize newestFirst=_newestFirst;
@property(retain, nonatomic) NSData *archiveContinuationToken; // @synthesize archiveContinuationToken=_archiveContinuationToken;
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001d5425
- (unsigned long long)hash;	// IMP=0x00000000001d5370
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d522d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d5120
- (void)copyTo:(id)arg1;	// IMP=0x00000000001d5060
- (Class)responseClass;	// IMP=0x00000000001d504f
- (unsigned int)requestTypeCode;	// IMP=0x00000000001d5044
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d4f79
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d4f6c
- (id)dictionaryRepresentation;	// IMP=0x00000000001d4a44
- (id)description;	// IMP=0x00000000001d4995
@property(readonly, nonatomic) _Bool hasAssetsToDownload;
@property(nonatomic) _Bool hasLimit;
@property(nonatomic) _Bool hasNewestFirst;
@property(readonly, nonatomic) _Bool hasArchiveContinuationToken;
@property(readonly, nonatomic) _Bool hasZoneIdentifier;

@end
