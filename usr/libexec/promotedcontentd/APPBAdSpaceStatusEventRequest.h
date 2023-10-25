//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface APPBAdSpaceStatusEventRequest : PBRequest
{
    double _responseTime;	// 8 = 0x8
    double _timestamp;	// 16 = 0x10
    NSString *_adOriginIdentifier;	// 24 = 0x18
    NSString *_adServerResponseIdentifier;	// 32 = 0x20
    NSData *_anonymousDemandiAdID;	// 40 = 0x28
    NSString *_bundleID;	// 48 = 0x30
    NSData *_contentiAdID;	// 56 = 0x38
    NSString *_contextJSON;	// 64 = 0x40
    NSData *_dPID;	// 72 = 0x48
    NSData *_iAdID;	// 80 = 0x50
    NSString *_osVersionAndBuild;	// 88 = 0x58
    int _screenfuls;	// 96 = 0x60
    int _slotPosition;	// 100 = 0x64
    int _statusCode;	// 104 = 0x68
    _Bool _adReused;	// 108 = 0x6c
    _Bool _firstMessage;	// 109 = 0x6d
    struct {
        unsigned int responseTime:1;
        unsigned int timestamp:1;
        unsigned int screenfuls:1;
        unsigned int slotPosition:1;
        unsigned int statusCode:1;
        unsigned int adReused:1;
        unsigned int firstMessage:1;
    } _has;	// 112 = 0x70
}

+ (id)options;	// IMP=0x002000000007e4c8
- (void).cxx_destruct;	// IMP=0x0020000000080ce1
@property(nonatomic) int slotPosition; // @synthesize slotPosition=_slotPosition;
@property(retain, nonatomic) NSString *contextJSON; // @synthesize contextJSON=_contextJSON;
@property(nonatomic) _Bool adReused; // @synthesize adReused=_adReused;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSData *dPID; // @synthesize dPID=_dPID;
@property(retain, nonatomic) NSString *osVersionAndBuild; // @synthesize osVersionAndBuild=_osVersionAndBuild;
@property(nonatomic) _Bool firstMessage; // @synthesize firstMessage=_firstMessage;
@property(nonatomic) int screenfuls; // @synthesize screenfuls=_screenfuls;
@property(nonatomic) double responseTime; // @synthesize responseTime=_responseTime;
// Error: Property attributes should begin with the type ('T') attribute, property name: timestamp
// Property attributes: (null)

@property(retain, nonatomic) NSData *iAdID; // @synthesize iAdID=_iAdID;
@property(retain, nonatomic) NSData *contentiAdID; // @synthesize contentiAdID=_contentiAdID;
@property(retain, nonatomic) NSData *anonymousDemandiAdID; // @synthesize anonymousDemandiAdID=_anonymousDemandiAdID;
@property(retain, nonatomic) NSString *adOriginIdentifier; // @synthesize adOriginIdentifier=_adOriginIdentifier;
@property(retain, nonatomic) NSString *adServerResponseIdentifier; // @synthesize adServerResponseIdentifier=_adServerResponseIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000008091a
- (unsigned long long)hash;	// IMP=0x0010000000080550
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000801ff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007ff7b
- (void)copyTo:(id)arg1;	// IMP=0x001000000007fd65
- (void)writeTo:(id)arg1;	// IMP=0x001000000007fb49
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000007fb3c
- (id)dictionaryRepresentation;	// IMP=0x001000000007ef1b
- (id)description;	// IMP=0x001000000007ee6c
@property(nonatomic) _Bool hasSlotPosition;
@property(readonly, nonatomic) _Bool hasContextJSON;
@property(nonatomic) _Bool hasAdReused;
@property(readonly, nonatomic) _Bool hasBundleID;
@property(readonly, nonatomic) _Bool hasDPID;
@property(readonly, nonatomic) _Bool hasOsVersionAndBuild;
- (int)StringAsStatusCode:(id)arg1;	// IMP=0x001000000007e950
- (id)statusCodeAsString:(int)arg1;	// IMP=0x001000000007e713
@property(nonatomic) _Bool hasStatusCode;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) _Bool hasFirstMessage;
@property(nonatomic) _Bool hasScreenfuls;
@property(nonatomic) _Bool hasResponseTime;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasIAdID;
@property(readonly, nonatomic) _Bool hasContentiAdID;
@property(readonly, nonatomic) _Bool hasAnonymousDemandiAdID;
@property(readonly, nonatomic) _Bool hasAdOriginIdentifier;
@property(readonly, nonatomic) _Bool hasAdServerResponseIdentifier;

@end
