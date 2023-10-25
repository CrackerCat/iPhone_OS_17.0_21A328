//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection, NSHashTable, NSString, UIOServer;
@protocol BSServiceConnectionHost;

__attribute__((visibility("hidden")))
@interface _UIOServiceConnection : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    BSServiceConnection<BSServiceConnectionHost> *_connection;	// 16 = 0x10
    UIOServer *_server;	// 24 = 0x18
}

+ (id)connectionWithBSServiceConnection:(id)arg1 toServer:(id)arg2;	// IMP=0x00100000000aae33
- (void).cxx_destruct;	// IMP=0x00000000000ab3f4
@property(readonly, nonatomic) __weak UIOServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) __weak BSServiceConnection<BSServiceConnectionHost> *connection; // @synthesize connection=_connection;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ab3bc
@property(readonly) unsigned long long hash;
- (void)serviceConnectionDidInvalidate;	// IMP=0x00000000000ab210
- (void)removeAllObservers;	// IMP=0x00000000000ab1fa
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000ab1e4
- (void)addObserver:(id)arg1;	// IMP=0x00000000000ab17a
- (_Bool)clientHasEntitlement:(id)arg1;	// IMP=0x00000000000ab0c7
- (void)sendAction:(id)arg1;	// IMP=0x00000000000ab04c
- (oneway void)performOverlayServerAction:(id)arg1;	// IMP=0x00000000000aafa0
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) long long pid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
