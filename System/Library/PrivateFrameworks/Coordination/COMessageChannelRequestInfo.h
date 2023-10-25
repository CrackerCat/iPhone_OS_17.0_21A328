//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COMessageChannelRequest, NSString;

__attribute__((visibility("hidden")))
@interface COMessageChannelRequestInfo : NSObject
{
    unsigned int _requestID;	// 8 = 0x8
    long long _requestType;	// 16 = 0x10
    unsigned long long _expectedRecipients;	// 24 = 0x18
    unsigned long long _receivedResponses;	// 32 = 0x20
    COMessageChannelRequest *_request;	// 40 = 0x28
    NSString *_destinationInfo;	// 48 = 0x30
    unsigned long long _messageSize;	// 56 = 0x38
    CDUnknownBlockType _recipientCallback;	// 64 = 0x40
    CDUnknownBlockType _responseCallback;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000213a3
@property(copy, nonatomic) CDUnknownBlockType responseCallback; // @synthesize responseCallback=_responseCallback;
@property(copy, nonatomic) CDUnknownBlockType recipientCallback; // @synthesize recipientCallback=_recipientCallback;
@property(nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property(copy, nonatomic) NSString *destinationInfo; // @synthesize destinationInfo=_destinationInfo;
@property(retain, nonatomic) COMessageChannelRequest *request; // @synthesize request=_request;
@property(nonatomic) unsigned long long receivedResponses; // @synthesize receivedResponses=_receivedResponses;
@property(nonatomic) unsigned long long expectedRecipients; // @synthesize expectedRecipients=_expectedRecipients;
@property(readonly, nonatomic) unsigned int requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) long long requestType; // @synthesize requestType=_requestType;
- (id)initWithRequestID:(unsigned int)arg1 type:(long long)arg2 request:(id)arg3;	// IMP=0x000000000002125d

@end
