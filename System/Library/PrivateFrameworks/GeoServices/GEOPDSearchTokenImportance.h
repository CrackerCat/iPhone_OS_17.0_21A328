//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchTokenImportance : PBCodable
{
    NSString *_token;	// 8 = 0x8
    float _score;	// 16 = 0x10
    CDStruct_f58e6c32 _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000b691b5
- (unsigned long long)hash;	// IMP=0x0000000000b69082
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b68fc3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b68f27
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b68ebf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b68eb2
- (id)jsonRepresentation;	// IMP=0x0000000000b68ea8
- (id)dictionaryRepresentation;	// IMP=0x0000000000b68dce
- (id)description;	// IMP=0x0000000000b68d1f

@end
