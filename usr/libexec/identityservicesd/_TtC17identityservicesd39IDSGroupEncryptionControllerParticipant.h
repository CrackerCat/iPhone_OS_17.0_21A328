//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, NSString, _TtC17identityservicesd34IDSGroupEncryptionControllerMember;

@interface _TtC17identityservicesd39IDSGroupEncryptionControllerParticipant : NSObject
{
    MISSING_TYPE *q;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *participantID;	// 32 = 0x20
    MISSING_TYPE *pushToken;	// 40 = 0x28
    MISSING_TYPE *allocatedURI;	// 56 = 0x38
    MISSING_TYPE *typeAccordingToServer;	// 72 = 0x48
    MISSING_TYPE *preKeyState;	// 0 = 0x0
    MISSING_TYPE *keyRecoveryState;	// 2147484680 = 0x80000408
    MISSING_TYPE *hasScheduledKeyRecovery;	// 1937330991 = 0x7379532f
}

- (void).cxx_destruct;	// IMP=0x0040000000482300
- (id)init;	// IMP=0x00100000004822a0
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) _TtC17identityservicesd34IDSGroupEncryptionControllerMember *member;
@property(nonatomic, readonly) NSString *allocatedURI;
@property(nonatomic, readonly) NSData *pushToken;
@property(nonatomic, readonly) unsigned long long participantID; // @synthesize participantID;

@end
