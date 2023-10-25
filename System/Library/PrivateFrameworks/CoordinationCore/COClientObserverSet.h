//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMapTable;

__attribute__((visibility("hidden")))
@interface COClientObserverSet : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMapTable *_observers;	// 16 = 0x10
    NSDictionary *_registrations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000089910
@property(copy, nonatomic) NSDictionary *registrations; // @synthesize registrations=_registrations;
@property(copy, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
- (void)removeClientObserver:(id)arg1 forNotificationName:(id)arg2;	// IMP=0x00000000000893c6
- (void)addClientObserver:(id)arg1 forNotificationName:(id)arg2;	// IMP=0x00000000000890eb
- (id)clientObserversForNotificationName:(id)arg1;	// IMP=0x0000000000088f66
- (id)clientObserversForXPCConnection:(id)arg1;	// IMP=0x0000000000088dbc
- (id)clientObservers;	// IMP=0x0000000000088b7c
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000088b3e
- (id)init;	// IMP=0x0000000000088ab9

@end
