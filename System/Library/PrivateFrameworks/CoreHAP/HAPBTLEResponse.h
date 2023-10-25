//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HAPBTLERequest, HAPBTLETransactionIdentifier, NSData, NSMutableData;

__attribute__((visibility("hidden")))
@interface HAPBTLEResponse : HMFObject
{
    _Bool _headerComplete;	// 8 = 0x8
    unsigned char _statusCode;	// 9 = 0x9
    HAPBTLERequest *_request;	// 16 = 0x10
    HAPBTLETransactionIdentifier *_identifier;	// 24 = 0x18
    NSData *_body;	// 32 = 0x20
    unsigned long long _bodyLength;	// 40 = 0x28
    NSMutableData *__internalBody;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000040fd8
@property(retain, nonatomic, setter=_setInternalBody:) NSMutableData *_internalBody; // @synthesize _internalBody=__internalBody;
@property(readonly, nonatomic) unsigned char statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) unsigned long long bodyLength; // @synthesize bodyLength=_bodyLength;
@property(copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(nonatomic, getter=isHeaderComplete) _Bool headerComplete; // @synthesize headerComplete=_headerComplete;
@property(readonly, nonatomic) HAPBTLETransactionIdentifier *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) HAPBTLERequest *request; // @synthesize request=_request;
- (unsigned long long)_deserializeHeaderBodyLengthWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000040d65
- (unsigned long long)_deserializeHeaderWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000040c3b
- (unsigned long long)appendData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000407d1
- (unsigned long long)_remainingBodyLength;	// IMP=0x0000000000040744
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic, getter=isBodyComplete) _Bool bodyComplete;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic, getter=isEncrypted) _Bool encrypted;
- (id)description;	// IMP=0x0000000000040588
- (id)debugDescription;	// IMP=0x0000000000040571
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x00000000000403e8
- (id)shortDescription;	// IMP=0x00000000000403d6
- (id)initWithRequest:(id)arg1;	// IMP=0x0000000000040368
- (id)init;	// IMP=0x00000000000402c0

@end
