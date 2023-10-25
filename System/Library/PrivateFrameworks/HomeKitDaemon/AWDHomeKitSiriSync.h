//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AWDHomeKitSiriSync : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _currentConfigurationVersion;	// 16 = 0x10
    unsigned int _duration;	// 20 = 0x14
    unsigned int _lastSyncedConfigurationVersion;	// 24 = 0x18
    NSMutableArray *_reasons;	// 32 = 0x20
    unsigned int _serverConfigurationVersion;	// 40 = 0x28
    struct {
        unsigned int timestamp:1;
        unsigned int currentConfigurationVersion:1;
        unsigned int duration:1;
        unsigned int lastSyncedConfigurationVersion:1;
        unsigned int serverConfigurationVersion:1;
    } _has;	// 44 = 0x2c
}

+ (Class)reasonsType;	// IMP=0x0010000000c7ab5e
- (void).cxx_destruct;	// IMP=0x0000000000c7ab4b
@property(nonatomic) unsigned int serverConfigurationVersion; // @synthesize serverConfigurationVersion=_serverConfigurationVersion;
@property(nonatomic) unsigned int lastSyncedConfigurationVersion; // @synthesize lastSyncedConfigurationVersion=_lastSyncedConfigurationVersion;
@property(nonatomic) unsigned int currentConfigurationVersion; // @synthesize currentConfigurationVersion=_currentConfigurationVersion;
@property(retain, nonatomic) NSMutableArray *reasons; // @synthesize reasons=_reasons;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000c7a8ca
- (unsigned long long)hash;	// IMP=0x0000000000c7a7f3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c7a697
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c7a41c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000c7a2c8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c7a0d8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c79c83
- (id)dictionaryRepresentation;	// IMP=0x0000000000c79a61
- (id)description;	// IMP=0x0000000000c799b2
@property(nonatomic) _Bool hasServerConfigurationVersion;
@property(nonatomic) _Bool hasLastSyncedConfigurationVersion;
@property(nonatomic) _Bool hasCurrentConfigurationVersion;
- (id)reasonsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000c798b6
- (unsigned long long)reasonsCount;	// IMP=0x0000000000c79899
- (void)addReasons:(id)arg1;	// IMP=0x0000000000c7982f
- (void)clearReasons;	// IMP=0x0000000000c79812
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimestamp;

@end
