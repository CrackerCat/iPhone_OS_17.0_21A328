//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ExpansionBoard/NSObject-Protocol.h>

@class EXBDisplayArrangementItem, FBSDisplayConfigurationRequest;

@protocol EXBDisplayEndpointClientSettings <NSObject>
@property(copy, nonatomic) FBSDisplayConfigurationRequest *displayConfigurationRequest;
@property(copy, nonatomic) EXBDisplayArrangementItem *displayArrangementItem;
@property(nonatomic) _Bool wantsControlOfDisplay;
@end
