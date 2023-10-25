//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SetupAssistant/NSObject-Protocol.h>

@class RPFileTransferSession;

@protocol BYDaemonMigrationSourceProtocol <NSObject>
- (void)setFileTransferTemplate:(RPFileTransferSession *)arg1;
- (void)launchSetupForMigration;
- (void)registerAsUserInterfaceHost:(void (^)(NSString *))arg1;
- (void)cancel;
@end
