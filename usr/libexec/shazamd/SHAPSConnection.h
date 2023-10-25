//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSString, SHMediaLibraryController;
@protocol OS_dispatch_queue;

@interface SHAPSConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 8 = 0x8
    SHMediaLibraryController *_libraryController;	// 16 = 0x10
    APSConnection *_connection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002ed29
@property(retain, nonatomic) APSConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) SHMediaLibraryController *libraryController; // @synthesize libraryController=_libraryController;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
- (void)_libraryDidCompleteSync:(id)arg1;	// IMP=0x001000000002ec7f
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x001000000002ea60
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x001000000002e990
- (void)fetchAPSEnvironmentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e980
- (void)stopListeningForPushNotifications;	// IMP=0x001000000002e97a
- (void)startListeningForPushNotifications;	// IMP=0x001000000002e974
- (void)registerForPushNotifications;	// IMP=0x001000000002e96e
- (id)init;	// IMP=0x001000000002e8db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
