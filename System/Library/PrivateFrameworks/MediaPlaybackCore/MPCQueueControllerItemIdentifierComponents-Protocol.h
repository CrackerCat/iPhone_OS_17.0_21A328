//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class NSString;

@protocol MPCQueueControllerItemIdentifierComponents <NSObject>
@property(readonly, nonatomic) unsigned short behaviorFlags;
@property(readonly, nonatomic) _Bool isPlaceholder;
@property(readonly, copy, nonatomic) NSString *itemID;
@property(readonly, copy, nonatomic) NSString *sectionID;
@property(readonly, copy, nonatomic) NSString *contentItemID;
@end
