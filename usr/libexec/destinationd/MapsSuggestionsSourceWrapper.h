//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, MapsSuggestionsDaemonMemory, NSMutableArray, NSString, NSXPCConnection;
@protocol MapsSuggestionsLocationUpdater, MapsSuggestionsSource, OS_dispatch_queue;

@interface MapsSuggestionsSourceWrapper : NSObject
{
    NSMutableArray *_connections;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSXPCConnection *_connectionForLocations;	// 24 = 0x18
    id <MapsSuggestionsLocationUpdater> _locationUpdater;	// 32 = 0x20
    CLLocation *_bestLocation;	// 40 = 0x28
    id <MapsSuggestionsSource> _source;	// 48 = 0x30
    MapsSuggestionsDaemonMemory *_memory;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000004945f
@property(nonatomic) __weak MapsSuggestionsDaemonMemory *memory; // @synthesize memory=_memory;
@property(readonly, nonatomic) id <MapsSuggestionsSource> source; // @synthesize source=_source;
- (void)didLoseLocationPermission;	// IMP=0x00100000000491dc
- (void)didUpdateLocation:(id)arg1;	// IMP=0x0010000000048f60
- (_Bool)detachSource:(id)arg1;	// IMP=0x0010000000048dc0
- (_Bool)attachSource:(id)arg1;	// IMP=0x0010000000048b5f
- (unsigned long long)addOrUpdateSuggestionEntries:(id)arg1 source:(id)arg2;	// IMP=0x0010000000048714
- (void)feedbackForContact:(id)arg1 action:(long long)arg2 forXPCConnection:(id)arg3;	// IMP=0x0010000000047fd8
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2 forXPCConnection:(id)arg3;	// IMP=0x0010000000047cbf
- (void)feedbackForEntryData:(id)arg1 action:(long long)arg2 forXPCConnection:(id)arg3;	// IMP=0x001000000004796b
- (void)removeEntryData:(id)arg1 behavior:(long long)arg2 forXPCConnection:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000475f0
- (void)forceEarlyUpdateForType:(long long)arg1 forXPCConnection:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000472da
- (void)removeMonitoredXPCConnection:(id)arg1;	// IMP=0x001000000004718c
- (void)addMonitoredXPCConnection:(id)arg1;	// IMP=0x0010000000046f07
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0010000000045936
- (id)initWithMemory:(id)arg1 locationUpdater:(id)arg2;	// IMP=0x00100000000456d8
@property(readonly, nonatomic) NSString *uniqueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
