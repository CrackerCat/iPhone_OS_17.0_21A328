//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface ACXLaunchServicesWatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_stateQueue;	// 8 = 0x8
    NSUUID *_ourDBUUID;	// 16 = 0x10
    unsigned long long _lastSequenceNumber;	// 24 = 0x18
    NSUUID *_lastLSUUID;	// 32 = 0x20
    NSMutableDictionary *_appList;	// 40 = 0x28
    NSMutableArray *_eventQueue;	// 48 = 0x30
    unsigned long long _eventQueueStartSequenceNumber;	// 56 = 0x38
}

+ (id)sharedWatcher;	// IMP=0x00200000000366de
- (void).cxx_destruct;	// IMP=0x002000000003cdfd
@property(nonatomic) unsigned long long eventQueueStartSequenceNumber; // @synthesize eventQueueStartSequenceNumber=_eventQueueStartSequenceNumber;
@property(retain, nonatomic) NSMutableArray *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(retain, nonatomic) NSMutableDictionary *appList; // @synthesize appList=_appList;
@property(retain, nonatomic) NSUUID *lastLSUUID; // @synthesize lastLSUUID=_lastLSUUID;
@property(nonatomic) unsigned long long lastSequenceNumber; // @synthesize lastSequenceNumber=_lastSequenceNumber;
@property(retain, nonatomic) NSUUID *ourDBUUID; // @synthesize ourDBUUID=_ourDBUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
- (void)applicationInstallsDidStart:(id)arg1;	// IMP=0x001000000003c961
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x001000000003c772
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x001000000003c4ee
- (void)applicationsUninstalledWithAppRecords:(id)arg1;	// IMP=0x001000000003bede
- (void)applicationsInstalledWithAppRecords:(id)arg1;	// IMP=0x001000000003b3be
- (void)_onQueue_reSyncWithLS;	// IMP=0x001000000003a679
- (void)_onQueue_noteNewApps:(id)arg1 updatedApps:(id)arg2 removedApps:(id)arg3 forDBUUID:(id)arg4 endingSequenceNumber:(unsigned long long)arg5;	// IMP=0x001000000003a57a
- (void)_onQueue_noteDatabaseRebuild;	// IMP=0x001000000003a509
- (id)allInstalledBundleIDsInDatabaseWithUUID:(id *)arg1 lastSequenceNumber:(unsigned long long *)arg2;	// IMP=0x001000000003a1fd
- (void)fetchDatabaseUUID:(id *)arg1 andCurrentLastSequenceNumber:(unsigned long long *)arg2;	// IMP=0x0010000000039fd4
- (void)enumerateApplicationEventsReturningDBUUID:(id *)arg1 startingSequenceNumber:(unsigned long long *)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000039c7f
- (_Bool)clearApplicationEventsForDBUUID:(id)arg1 endingSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000039a36
- (_Bool)_onQueue_clearApplicationEventsForDBUUID:(id)arg1 endingSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000039603
- (void)_onQueue_addAppEvent:(id)arg1;	// IMP=0x00100000000393a9
- (_Bool)enumerateApplicationsForBundleIDs:(id)arg1 currentDBUUID:(id *)arg2 currentLastSequenceNumber:(unsigned long long *)arg3 error:(id *)arg4 enumerator:(CDUnknownBlockType)arg5;	// IMP=0x0010000000038f35
- (_Bool)_onQueue_enumerateApplicationsForBundleIDs:(id)arg1 error:(id *)arg2 enumerator:(CDUnknownBlockType)arg3;	// IMP=0x0010000000038b5a
- (id)applicationsForAppRecords:(id)arg1 currentDBUUID:(id *)arg2 currentLastSequenceNumber:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x0010000000038733
- (id)applicationForAppRecord:(id)arg1 currentLastSequenceNumber:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x00100000000383ef
- (id)_onQueue_applicationForAppRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000038084
- (_Bool)_onQueue_infoMatchesCurrentLSDatabaseWithUUID:(id *)arg1;	// IMP=0x0010000000037e6a
- (void)_onQueue_writeAppListToDisk;	// IMP=0x0010000000037822
- (id)init;	// IMP=0x0010000000036733

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
