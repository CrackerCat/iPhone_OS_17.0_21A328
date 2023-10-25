//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/NSObject-Protocol.h>

@class NSArray, SFCollaborationItemsProvider;
@protocol SFCollaborationService;

@protocol SFCollaborationItemsProviderDelegate <NSObject>
- (id <SFCollaborationService>)collaborationServiceForItemsProvider:(SFCollaborationItemsProvider *)arg1;
- (NSArray *)collaborationItemsProvider:(SFCollaborationItemsProvider *)arg1 resolveActivityItem:(id)arg2;
@end
