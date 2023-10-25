//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardServices/NSObject-Protocol.h>

@class NSNumber, NSString, SBSDisplayModeSettings, SBSRelativeDisplayArrangement;

@protocol SBSExternalDisplayServiceClientToServerInterface <NSObject>
- (oneway void)setDisplayModeSettings:(SBSDisplayModeSettings *)arg1 forDisplay:(NSString *)arg2 options:(NSNumber *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (oneway void)setDisplayMirroringEnabled:(NSNumber *)arg1 forDisplay:(NSString *)arg2;
- (oneway void)setDisplayArrangement:(SBSRelativeDisplayArrangement *)arg1 forDisplay:(NSString *)arg2;
- (oneway void)getConnectedDisplayInfoWithCompletion:(void (^)(NSArray<__SBSConnectedDisplayInfo__> *, NSError *))arg1;
@end
