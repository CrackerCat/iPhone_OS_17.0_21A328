//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSSceneExtensible-Protocol.h>

@class FBSSceneClientSettings, FBSSceneSettings, NSSet, NSString;
@protocol FBSSceneComponent;

@protocol FBSComponentScene <FBSSceneExtensible>
- (id <FBSSceneComponent>)siblingComponentOfClass:(Class)arg1;
- (void)sendPrivateActions:(NSSet *)arg1;
- (void)sendActions:(NSSet *)arg1;
- (NSString *)loggingIdentifier;
- (FBSSceneClientSettings *)clientSettings;
- (FBSSceneSettings *)settings;
@end
