//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IMDAskToBuyNotificationContext : NSObject
{
    NSArray *_actions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000055adc
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (id)notificationCategories;	// IMP=0x000000000005597d
- (void)populateUserInfoForNotificationContent:(id)arg1 messageBalloonBundleID:(id)arg2 payloadData:(id)arg3;	// IMP=0x000000000005558e
- (_Bool)canPopulateUserInfoForMessageBalloonBundleID:(id)arg1;	// IMP=0x0000000000055525

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
