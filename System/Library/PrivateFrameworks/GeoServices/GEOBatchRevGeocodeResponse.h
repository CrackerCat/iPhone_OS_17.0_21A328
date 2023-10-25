//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOBatchRevGeocodeResponse : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_batchPlaceResults;	// 16 = 0x10
    NSMutableArray *_clusters;	// 24 = 0x18
    double _timestamp;	// 32 = 0x20
    NSMutableArray *_versionDomains;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _statusCode;	// 60 = 0x3c
    unsigned int _ttl;	// 64 = 0x40
    unsigned int _version;	// 68 = 0x44
    struct {
        unsigned int has_timestamp:1;
        unsigned int has_statusCode:1;
        unsigned int has_ttl:1;
        unsigned int has_version:1;
        unsigned int read_batchPlaceResults:1;
        unsigned int read_clusters:1;
        unsigned int read_versionDomains:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 72 = 0x48
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x001000000112ea38
+ (Class)versionDomainType;	// IMP=0x001000000112cd98
+ (Class)batchPlaceResultType;	// IMP=0x001000000112cac1
+ (Class)clusterType;	// IMP=0x001000000112c85a
- (void).cxx_destruct;	// IMP=0x0000000001130c9f
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000011308d3
- (unsigned long long)hash;	// IMP=0x00000000011306e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000113051c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000112ff38
- (void)copyTo:(id)arg1;	// IMP=0x000000000112fc74
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000112f9d3
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x000000000112f677
- (void)writeTo:(id)arg1;	// IMP=0x000000000112f1a9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000112f19c
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000112e582
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000112e570
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000112d61b
- (id)jsonRepresentation;	// IMP=0x000000000112d60c
- (id)dictionaryRepresentation;	// IMP=0x000000000112cf12
- (id)description;	// IMP=0x000000000112ce63
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) double timestamp;
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) unsigned int version;
- (id)versionDomainAtIndex:(unsigned long long)arg1;	// IMP=0x000000000112cd67
- (unsigned long long)versionDomainsCount;	// IMP=0x000000000112cd3b
- (void)addVersionDomain:(id)arg1;	// IMP=0x000000000112cc85
- (void)clearVersionDomains;	// IMP=0x000000000112cc5d
@property(retain, nonatomic) NSMutableArray *versionDomains;
@property(nonatomic) _Bool hasTtl;
@property(nonatomic) unsigned int ttl;
- (id)batchPlaceResultAtIndex:(unsigned long long)arg1;	// IMP=0x000000000112ca90
- (unsigned long long)batchPlaceResultsCount;	// IMP=0x000000000112ca64
- (void)addBatchPlaceResult:(id)arg1;	// IMP=0x000000000112c9ae
- (void)clearBatchPlaceResults;	// IMP=0x000000000112c986
@property(retain, nonatomic) NSMutableArray *batchPlaceResults;
- (id)clusterAtIndex:(unsigned long long)arg1;	// IMP=0x000000000112c829
- (unsigned long long)clustersCount;	// IMP=0x000000000112c7fd
- (void)addCluster:(id)arg1;	// IMP=0x000000000112c747
- (void)clearClusters;	// IMP=0x000000000112c71f
@property(retain, nonatomic) NSMutableArray *clusters;
- (int)StringAsStatusCode:(id)arg1;	// IMP=0x000000000112bac4
- (id)statusCodeAsString:(int)arg1;	// IMP=0x000000000112b9eb
@property(nonatomic) _Bool hasStatusCode;
@property(nonatomic) int statusCode;
- (id)initWithData:(id)arg1;	// IMP=0x000000000112b924
- (id)init;	// IMP=0x000000000112b8c8

@end
