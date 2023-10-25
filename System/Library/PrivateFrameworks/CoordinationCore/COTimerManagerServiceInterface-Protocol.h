//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/NSObject-Protocol.h>

@class COHomeKitAccessoryMemento, MTTimer, NSArray, NSSet, NSString, NSUUID;

@protocol COTimerManagerServiceInterface <NSObject>
- (void)canDispatchAsAccessory:(COHomeKitAccessoryMemento *)arg1 asInstance:(NSUUID *)arg2 reply:(void (^)(_Bool))arg3;
- (void)removeObserverForNotificationName:(NSString *)arg1 asAccessory:(COHomeKitAccessoryMemento *)arg2 withCallback:(void (^)(NSError *))arg3;
- (void)addObserverForNotificationName:(NSString *)arg1 asAccessory:(COHomeKitAccessoryMemento *)arg2 asInstance:(NSUUID *)arg3 constraints:(NSSet *)arg4 withCallback:(void (^)(NSError *))arg5;
- (void)dismissTimerWithIdentifier:(NSString *)arg1 asAccessory:(COHomeKitAccessoryMemento *)arg2 withCallback:(void (^)(NSError *))arg3;
- (void)removeTimer:(MTTimer *)arg1 asAccessory:(COHomeKitAccessoryMemento *)arg2 withCallback:(void (^)(NSError *))arg3;
- (void)updateTimer:(MTTimer *)arg1 asAccessory:(COHomeKitAccessoryMemento *)arg2 withCallback:(void (^)(NSError *))arg3;
- (void)addTimer:(MTTimer *)arg1 asAccessory:(COHomeKitAccessoryMemento *)arg2 asInstance:(NSUUID *)arg3 withCallback:(void (^)(NSError *))arg4;
- (void)timersAsAccessory:(COHomeKitAccessoryMemento *)arg1 forAccessories:(NSArray *)arg2 callback:(void (^)(NSDictionary *, NSError *))arg3;
- (void)timersAsAccessory:(COHomeKitAccessoryMemento *)arg1 asInstance:(NSUUID *)arg2 withCallback:(void (^)(NSArray *, NSError *))arg3;
@end
