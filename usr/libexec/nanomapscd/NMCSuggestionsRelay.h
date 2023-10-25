//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsSelfBuildingResourceDepot, NMCSuggestionsProvider, NMCSuggestionsSender, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NMCSuggestionsRelay : NSObject
{
    MapsSuggestionsSelfBuildingResourceDepot *_resourceDepot;	// 8 = 0x8
    id _requestObserver;	// 16 = 0x10
    id _supportedMessagesObserver;	// 24 = 0x18
    int _destinationdObserver;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_goToSleepTimer;	// 48 = 0x30
    NMCSuggestionsProvider *_provider;	// 56 = 0x38
    NMCSuggestionsSender *_sender;	// 64 = 0x40
}

+ (id)sharedRelay;	// IMP=0x002000000005ebf8
- (void).cxx_destruct;	// IMP=0x002000000005fcc8
- (void)_cleanupProvider;	// IMP=0x001000000005fc8d
- (void)_goToSleep;	// IMP=0x001000000005fbe6
- (void)_resetSleepTimer;	// IMP=0x001000000005f995
- (void)_tearDownSleepTimer;	// IMP=0x001000000005f956
- (void)providerDidProduceSuggestionsBlob:(id)arg1;	// IMP=0x001000000005f88e
- (void)triggerUpNextSync;	// IMP=0x001000000005f657
- (void)connection:(id)arg1 didChangeDeviceNearby:(_Bool)arg2;	// IMP=0x001000000005f546
- (id)init;	// IMP=0x001000000005ec4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
