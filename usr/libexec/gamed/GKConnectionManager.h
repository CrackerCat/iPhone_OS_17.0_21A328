//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GKConnectionManager : NSObject
{
    NSMutableDictionary *_connectionErrorBySessionID;	// 8 = 0x8
    IDSService *_idsService;	// 16 = 0x10
    NSMutableDictionary *_connectionsBySessionID;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_idsDelegateQueue;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x002000000016649c
- (void).cxx_destruct;	// IMP=0x0020000000169d9c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *idsDelegateQueue; // @synthesize idsDelegateQueue=_idsDelegateQueue;
@property(retain, nonatomic) NSMutableDictionary *connectionsBySessionID; // @synthesize connectionsBySessionID=_connectionsBySessionID;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property(retain, nonatomic) NSMutableDictionary *connectionErrorBySessionID; // @synthesize connectionErrorBySessionID=_connectionErrorBySessionID;
- (void)clientEnteredForegroundState:(id)arg1;	// IMP=0x0010000000169b13
- (void)clientEnteredBackgroundState:(id)arg1;	// IMP=0x00100000001698f6
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000001697c1
- (void)requestGKPlayerIDforiCloud:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000016966d
- (void)sendNotificationMessage:(id)arg1 toIDSIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000016935b
- (void)sendNotificationMessageOfType:(short)arg1 forSession:(id)arg2 localizedFormatKey:(id)arg3 arguments:(id)arg4 userMessage:(id)arg5 data:(id)arg6 recipientIDs:(id)arg7 handler:(CDUnknownBlockType)arg8;	// IMP=0x001000000016841e
- (long long)deviceTypeForNotification;	// IMP=0x0010000000168413
- (void)sendData:(id)arg1 reliably:(_Bool)arg2 forGameSessionWithIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000168252
- (void)connection:(id)arg1 didDisconnectForGameSessionWithID:(id)arg2 client:(id)arg3 playerID:(id)arg4 reason:(long long)arg5;	// IMP=0x0010000000167a37
- (void)disconnectConnectionsForClient:(id)arg1 reason:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000167530
- (id)idsDestinationsFromCKIDs:(id)arg1 containerName:(id)arg2;	// IMP=0x00100000001672a8
- (void)cloudGameSessionUpdated:(id)arg1;	// IMP=0x001000000016719d
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;	// IMP=0x0010000000166cb3
- (void)connectToGameSession:(id)arg1 forClient:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000166a6e
- (void)gameSession:(id)arg1 forClient:(id)arg2 lostConnectionFromCKID:(id)arg3;	// IMP=0x00100000001669a9
- (void)isBusyChangingConnectionStateForSession:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000166880
- (id)primaryEmailAddress;	// IMP=0x001000000016664f
- (void)dealloc;	// IMP=0x001000000016660a
- (id)init;	// IMP=0x00100000001664f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
