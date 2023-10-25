//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDHomeKitActionSetTriggered : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSString *_clientMetricIdentifier;	// 16 = 0x10
    unsigned int _duration;	// 24 = 0x18
    int _errorCode;	// 28 = 0x1c
    unsigned int _numAccessories;	// 32 = 0x20
    NSString *_transaction;	// 40 = 0x28
    int _triggerSource;	// 48 = 0x30
    struct {
        unsigned int timestamp:1;
        unsigned int duration:1;
        unsigned int errorCode:1;
        unsigned int numAccessories:1;
        unsigned int triggerSource:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000005c6f42
@property(retain, nonatomic) NSString *clientMetricIdentifier; // @synthesize clientMetricIdentifier=_clientMetricIdentifier;
@property(nonatomic) unsigned int numAccessories; // @synthesize numAccessories=_numAccessories;
@property(retain, nonatomic) NSString *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000005c6dbd
- (unsigned long long)hash;	// IMP=0x00000000005c6cc7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005c6b30
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005c69fa
- (void)copyTo:(id)arg1;	// IMP=0x00000000005c6900
- (void)writeTo:(id)arg1;	// IMP=0x00000000005c67f4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005c638a
- (id)dictionaryRepresentation;	// IMP=0x00000000005c6126
- (id)description;	// IMP=0x00000000005c6077
@property(readonly, nonatomic) _Bool hasClientMetricIdentifier;
@property(nonatomic) _Bool hasNumAccessories;
- (int)StringAsTriggerSource:(id)arg1;	// IMP=0x00000000005c5ec1
- (id)triggerSourceAsString:(int)arg1;	// IMP=0x00000000005c5e79
@property(nonatomic) _Bool hasTriggerSource;
@property(nonatomic) int triggerSource; // @synthesize triggerSource=_triggerSource;
@property(readonly, nonatomic) _Bool hasTransaction;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimestamp;

@end
