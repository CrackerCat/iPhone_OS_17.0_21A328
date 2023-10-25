//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary;

@interface NMMessageQueue : NSObject
{
    unsigned long long _maximumPendingMessagesCount;	// 8 = 0x8
    NSMutableDictionary *_maximumPendingMessagesByType;	// 16 = 0x10
    unsigned long long _maximumInFlightMessagesCount;	// 24 = 0x18
    unsigned long long _maximumInFlightMessagesSize;	// 32 = 0x20
    NSMutableArray *_queue;	// 40 = 0x28
    unsigned long long _inFlightPayloadsCount;	// 48 = 0x30
    unsigned long long _inFlightPayloadsSize;	// 56 = 0x38
    NSLock *_queueLock;	// 64 = 0x40
    _Bool _paused;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000000fddc
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) unsigned long long maximumInFlightMessagesSize; // @synthesize maximumInFlightMessagesSize=_maximumInFlightMessagesSize;
@property(nonatomic) unsigned long long maximumInFlightMessagesCount; // @synthesize maximumInFlightMessagesCount=_maximumInFlightMessagesCount;
@property(nonatomic) unsigned long long maximumPendingMessagesCount; // @synthesize maximumPendingMessagesCount=_maximumPendingMessagesCount;
- (void)removeAllMessages;	// IMP=0x001000000000fd4d
- (void)removeReply:(id)arg1;	// IMP=0x001000000000fb4d
- (void)removeMessage:(id)arg1;	// IMP=0x001000000000f833
- (void)didSendPayloadWithSize:(unsigned long long)arg1;	// IMP=0x001000000000f728
- (void)willSendPayloadWithSize:(unsigned long long)arg1;	// IMP=0x001000000000f6c8
- (_Bool)shouldSendNewPayload;	// IMP=0x001000000000f522
- (void)dequeueMessageIfPossible:(CDUnknownBlockType)arg1 orReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f163
- (void)_trimPendingMessagesIfNeededOfType:(int)arg1;	// IMP=0x001000000000ea0f
- (void)_trimPendingMessagesIfNeeded;	// IMP=0x001000000000e817
- (void)enqueueReply:(id)arg1 forMessage:(id)arg2 options:(id)arg3;	// IMP=0x001000000000e715
- (void)enqueueMessage:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e5e3
- (void)setMaximumPendingMessages:(unsigned long long)arg1 forMessageType:(int)arg2;	// IMP=0x001000000000e513
- (unsigned long long)maximumPendingMessagesForMessageType:(int)arg1;	// IMP=0x001000000000e497
@property(readonly, nonatomic) unsigned long long count;
- (id)init;	// IMP=0x001000000000e3b0

@end
