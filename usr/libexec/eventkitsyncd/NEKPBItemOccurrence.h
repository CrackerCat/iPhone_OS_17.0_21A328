//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NEKPBItemOccurrence : PBCodable
{
    double _date;	// 8 = 0x8
    NSString *_calendar;	// 16 = 0x10
    NSString *_summary;	// 24 = 0x18
    NSString *_uuid;	// 32 = 0x20
    struct {
        unsigned int date:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000006aa05
@property(nonatomic) double date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006a8dd
- (unsigned long long)hash;	// IMP=0x001000000006a772
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006a65a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006a572
- (void)copyTo:(id)arg1;	// IMP=0x001000000006a4cb
- (void)writeTo:(id)arg1;	// IMP=0x001000000006a429
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006a41c
- (id)dictionaryRepresentation;	// IMP=0x001000000006a105
- (id)description;	// IMP=0x001000000006a056
@property(nonatomic) _Bool hasDate;
@property(readonly, nonatomic) _Bool hasCalendar;
@property(readonly, nonatomic) _Bool hasSummary;
@property(readonly, nonatomic) _Bool hasUuid;

@end
