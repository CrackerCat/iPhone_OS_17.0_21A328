//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSURI, IMMessageContext, NSDictionary, NSString;

@interface IDSPendingIncomingResourceTransfer : NSObject
{
    NSDictionary *_topLevelPayload;	// 8 = 0x8
    NSString *_guid;	// 16 = 0x10
    NSDictionary *_context;	// 24 = 0x18
    IDSURI *_specificOriginatorURI;	// 32 = 0x20
    NSString *_broadcastTopic;	// 40 = 0x28
    IDSURI *_toURI;	// 48 = 0x30
    NSString *_topic;	// 56 = 0x38
    IMMessageContext *_messageContext;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000340df2
@property(retain, nonatomic) IMMessageContext *messageContext; // @synthesize messageContext=_messageContext;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) IDSURI *toURI; // @synthesize toURI=_toURI;
@property(retain, nonatomic) NSString *broadcastTopic; // @synthesize broadcastTopic=_broadcastTopic;
@property(retain, nonatomic) IDSURI *specificOriginatorURI; // @synthesize specificOriginatorURI=_specificOriginatorURI;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(retain, nonatomic) NSDictionary *topLevelPayload; // @synthesize topLevelPayload=_topLevelPayload;

@end
