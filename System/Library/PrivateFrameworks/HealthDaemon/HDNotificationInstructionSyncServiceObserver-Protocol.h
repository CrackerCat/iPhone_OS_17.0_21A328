//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDNotificationInstruction, HDNotificationInstructionSyncService;

@protocol HDNotificationInstructionSyncServiceObserver <NSObject>
- (void)notificationInstructionSyncService:(HDNotificationInstructionSyncService *)arg1 didReceiveNotificationInstruction:(HDNotificationInstruction *)arg2;
@end
