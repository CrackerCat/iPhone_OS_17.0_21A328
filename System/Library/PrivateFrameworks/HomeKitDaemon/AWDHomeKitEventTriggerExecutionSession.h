//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface AWDHomeKitEventTriggerExecutionSession : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSMutableArray *_endEvents;	// 16 = 0x10
    int _executionState;	// 24 = 0x18
    int _resultErrorCode;	// 28 = 0x1c
    NSString *_sessionID;	// 32 = 0x20
    NSMutableArray *_triggerEvents;	// 40 = 0x28
    struct {
        unsigned int timestamp:1;
        unsigned int executionState:1;
        unsigned int resultErrorCode:1;
    } _has;	// 48 = 0x30
}

+ (Class)endEventsType;	// IMP=0x00100000004006eb
+ (Class)triggerEventsType;	// IMP=0x00100000004006da
- (void).cxx_destruct;	// IMP=0x0000000000400698
@property(nonatomic) int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property(retain, nonatomic) NSMutableArray *endEvents; // @synthesize endEvents=_endEvents;
@property(retain, nonatomic) NSMutableArray *triggerEvents; // @synthesize triggerEvents=_triggerEvents;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000400344
- (unsigned long long)hash;	// IMP=0x000000000040025f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004000fa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003ffd76
- (void)copyTo:(id)arg1;	// IMP=0x00000000003ffba6
- (void)writeTo:(id)arg1;	// IMP=0x00000000003ff900
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003ff537
- (id)dictionaryRepresentation;	// IMP=0x00000000003feff0
- (id)description;	// IMP=0x00000000003fef41
@property(nonatomic) _Bool hasResultErrorCode;
- (int)StringAsExecutionState:(id)arg1;	// IMP=0x00000000003feddc
- (id)executionStateAsString:(int)arg1;	// IMP=0x00000000003fed94
@property(nonatomic) _Bool hasExecutionState;
@property(nonatomic) int executionState; // @synthesize executionState=_executionState;
- (id)endEventsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003fed0f
- (unsigned long long)endEventsCount;	// IMP=0x00000000003fecf2
- (void)addEndEvents:(id)arg1;	// IMP=0x00000000003fec88
- (void)clearEndEvents;	// IMP=0x00000000003fec6b
- (id)triggerEventsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003fec4e
- (unsigned long long)triggerEventsCount;	// IMP=0x00000000003fec31
- (void)addTriggerEvents:(id)arg1;	// IMP=0x00000000003febc7
- (void)clearTriggerEvents;	// IMP=0x00000000003febaa
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasTimestamp;

@end
