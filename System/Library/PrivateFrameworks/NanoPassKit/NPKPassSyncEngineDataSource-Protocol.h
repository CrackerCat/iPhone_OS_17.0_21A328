//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NPKPassLibrarySyncState, NPKPassSyncEngine, NSData, NSDictionary, NSString;

@protocol NPKPassSyncEngineDataSource <NSObject>
- (NPKPassLibrarySyncState *)passSyncEngineNeedsUpdatedPassLibraryState:(NPKPassSyncEngine *)arg1;
- (NSData *)passSyncEngine:(NPKPassSyncEngine *)arg1 dataForPassWithUniqueID:(NSString *)arg2;
- (NSData *)passSyncEngine:(NPKPassSyncEngine *)arg1 partialDataForPassWithUniqueID:(NSString *)arg2 baseManifest:(NSDictionary *)arg3 outRemoteAssets:(id *)arg4;
@end
