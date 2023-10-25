//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class NSData, NSDictionary, NSObject, NSString;

@protocol GKExtensionProtocol <NSObject>
- (void)setInitialState:(NSDictionary *)arg1 withReply:(void (^)(_Bool))arg2;
- (void)messageFromClient:(NSData *)arg1;

@optional
- (void)tearDownExtensionWithReply:(void (^)(_Bool))arg1;
- (void)hostApp:(NSString *)arg1 grantingAccessExtensionSandbox:(NSString *)arg2 replyWithEndpoint:(void (^)(NSXPCListenerEndpoint *))arg3;
- (void)nudge;
- (void)setValue:(NSObject *)arg1 forKeyPath:(NSString *)arg2 withReply:(void (^)(_Bool))arg3;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidFinish;
@end
