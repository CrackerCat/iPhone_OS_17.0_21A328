//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAddressObjectFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_libraryVersions;	// 16 = 0x10
    _Bool _enableLocation;	// 24 = 0x18
    struct {
        unsigned int has_enableLocation:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000bad303
- (unsigned long long)hash;	// IMP=0x0000000000bad2b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bad1e6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bad00b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bace86
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bace79
- (id)jsonRepresentation;	// IMP=0x0000000000bacad9
- (id)dictionaryRepresentation;	// IMP=0x0000000000bac8cf
- (id)description;	// IMP=0x0000000000bac820

@end
