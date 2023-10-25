//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, NSDate, NSError, NSInputStream, NSMutableArray, NSMutableData, NSMutableDictionary, NSOutputStream, NSString, NSTimer;
@protocol SDStreamHandlerDelegate;

@interface SDStreamHandler : NSObject
{
    _Bool _shouldReadNetwork;	// 8 = 0x8
    _Bool _usingMessages;	// 9 = 0x9
    _Bool _checkedCert;	// 10 = 0xa
    MISSING_TYPE *_shouldStop;	// 11 = 0xb
    _Bool _registeredStreams;	// 12 = 0xc
    _Bool _bufferSpaceAvailable;	// 13 = 0xd
    _Bool _client;	// 14 = 0xe
    _Bool _loggedTransfer;	// 15 = 0xf
    unsigned int _inMessageLength;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    id <SDStreamHandlerDelegate> _delegate;	// 32 = 0x20
    NSInputStream *_inputStream;	// 40 = 0x28
    NSOutputStream *_outputStream;	// 48 = 0x30
    NSTimer *_openTimer;	// 56 = 0x38
    NSError *_streamError;	// 64 = 0x40
    NSMutableData *_outputStreamData;	// 72 = 0x48
    long long _byteIndex;	// 80 = 0x50
    NSMutableData *_outMessage;	// 88 = 0x58
    NSMutableArray *_messageQueue;	// 96 = 0x60
    NSMutableDictionary *_handlers;	// 104 = 0x68
    long long _bytesRead;	// 112 = 0x70
    NSData *_inMessage;	// 120 = 0x78
    NSMutableData *_inData;	// 128 = 0x80
    unsigned long long _inputState;	// 136 = 0x88
    long long _wroteToNetwork;	// 144 = 0x90
    long long _readFromNetwork;	// 152 = 0x98
    NSDate *_timeOpened;	// 160 = 0xa0
    NSDate *_timeToOpen;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x002000000017d249
@property(retain) NSDate *timeToOpen; // @synthesize timeToOpen=_timeToOpen;
@property(retain) NSDate *timeOpened; // @synthesize timeOpened=_timeOpened;
@property long long readFromNetwork; // @synthesize readFromNetwork=_readFromNetwork;
@property long long wroteToNetwork; // @synthesize wroteToNetwork=_wroteToNetwork;
@property _Bool loggedTransfer; // @synthesize loggedTransfer=_loggedTransfer;
@property unsigned long long inputState; // @synthesize inputState=_inputState;
@property(retain) NSMutableData *inData; // @synthesize inData=_inData;
@property(retain) NSData *inMessage; // @synthesize inMessage=_inMessage;
@property unsigned int inMessageLength; // @synthesize inMessageLength=_inMessageLength;
@property long long bytesRead; // @synthesize bytesRead=_bytesRead;
@property(retain) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain) NSMutableArray *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(retain) NSMutableData *outMessage; // @synthesize outMessage=_outMessage;
@property long long byteIndex; // @synthesize byteIndex=_byteIndex;
@property(retain) NSMutableData *outputStreamData; // @synthesize outputStreamData=_outputStreamData;
@property(retain) NSError *streamError; // @synthesize streamError=_streamError;
@property(getter=isClient) _Bool client; // @synthesize client=_client;
@property(retain) NSTimer *openTimer; // @synthesize openTimer=_openTimer;
@property _Bool bufferSpaceAvailable; // @synthesize bufferSpaceAvailable=_bufferSpaceAvailable;
@property _Bool registeredStreams; // @synthesize registeredStreams=_registeredStreams;
@property _Bool shouldStop; // @synthesize shouldStop=_shouldStop;
@property _Bool checkedCert; // @synthesize checkedCert=_checkedCert;
@property(retain) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property __weak id <SDStreamHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property _Bool usingMessages; // @synthesize usingMessages=_usingMessages;
- (id)trimHeader:(id)arg1;	// IMP=0x001000000017cede
- (unsigned int)parseHeader:(id)arg1;	// IMP=0x001000000017ce43
- (void)handleMessageWritten:(id)arg1;	// IMP=0x001000000017cd5c
- (void)handleSpaceForMessage;	// IMP=0x001000000017c894
- (void)resetReadState;	// IMP=0x001000000017c850
- (void)handleMessageRead;	// IMP=0x001000000017c7db
- (void)handleHeaderRead;	// IMP=0x001000000017c6bb
- (void)handleBytesForMessage;	// IMP=0x001000000017c3d9
- (id)headerWithLength:(unsigned int)arg1;	// IMP=0x001000000017c372
- (id)messageWithData:(id)arg1;	// IMP=0x001000000017c2fe
- (void)sendMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000017bfed
- (void)sendMessage:(id)arg1 withErrorHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000017bfac
- (void)handleSpaceForStream;	// IMP=0x001000000017bcbe
- (void)handleBytesForStream;	// IMP=0x001000000017b9ec
- (void)writeToStreamWithData:(id)arg1;	// IMP=0x001000000017b869
- (void)handleSpaceAvailable;	// IMP=0x001000000017b756
- (void)handleBytesAvailable;	// IMP=0x001000000017b643
- (void)handleOpenedStream:(id)arg1;	// IMP=0x001000000017b431
- (void)setTCPProperties:(id)arg1;	// IMP=0x001000000017b33c
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x001000000017b1b3
- (_Bool)evaluateCert;	// IMP=0x001000000017aebc
- (void)applySSLSettings:(id)arg1;	// IMP=0x001000000017ab67
- (void)invalidateOpenTimer;	// IMP=0x001000000017aad5
- (void)openTimerFired:(id)arg1;	// IMP=0x001000000017a90d
- (void)startOpenTimer;	// IMP=0x001000000017a836
- (void)logTransfer;	// IMP=0x001000000017a66c
@property _Bool shouldReadNetwork; // @synthesize shouldReadNetwork=_shouldReadNetwork;
- (void)_stop;	// IMP=0x001000000017a344
- (void)stopIfReady;	// IMP=0x001000000017a302
- (void)stop;	// IMP=0x001000000017a2c2
- (void)start;	// IMP=0x0010000000179fe7
- (void)dealloc;	// IMP=0x0010000000179f2b
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 isClient:(_Bool)arg3;	// IMP=0x0010000000179d80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
