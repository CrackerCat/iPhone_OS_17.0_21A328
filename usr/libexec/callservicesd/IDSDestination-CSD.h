//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSDestination.h>

@interface IDSDestination (CSD)
+ (id)destinationWithTUConversationParticipant:(id)arg1;	// IMP=0x00100000000092c2
+ (id)destinationWithTUConversationMember:(id)arg1;	// IMP=0x0010000000009227
- (id)deviceForService:(id)arg1;	// IMP=0x00200000002a915d
- (_Bool)canReceiveMessagesForCallProvider:(id)arg1;	// IMP=0x00100000002a902d
@property(nonatomic, readonly) _Bool canReceiveRelayedCalls;
@end
