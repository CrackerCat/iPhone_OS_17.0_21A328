//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/EFPubliclyDescribable-Protocol.h>
#import <Email/EMCollectionItem-Protocol.h>
#import <Email/EMObject-Protocol.h>

@class ECMessageFlags, ECSubject, EFFuture, EMFollowUp, EMObjectID, EMReadLater, NSArray, NSDate, NSIndexSet, NSString, NSURL;
@protocol EMCollectionItemID;

@protocol EMMessageListItem <EMCollectionItem, EMObject, EFPubliclyDescribable>
@property(readonly) _Bool isEditable;
@property(readonly) _Bool shouldArchiveByDefault;
@property(readonly) _Bool supportsArchiving;
@property(readonly) _Bool deleteMovesToTrash;
@property(readonly) EFFuture *displayMessage;
@property(readonly) EMObjectID *displayMessageObjectID;
@property(readonly) id <EMCollectionItemID> displayMessageItemID;
@property(readonly, copy) NSArray *mailboxesIfAvailable;
@property(readonly, copy) NSArray *mailboxes;
@property(readonly, copy) NSArray *mailboxObjectIDs;
@property(readonly) long long conversationID;
@property(readonly) unsigned long long count;
@property(readonly, nonatomic) NSURL *brandIndicatorLocation;
@property(readonly) long long senderBucket;
@property(readonly) long long conversationNotificationLevel;
@property(readonly) _Bool hasAttachments;
@property(readonly) _Bool isCCMe;
@property(readonly) _Bool isToMe;
@property(readonly) long long unsubscribeType;
@property(readonly) _Bool isBlocked;
@property(readonly) _Bool isVIP;
@property(readonly, copy) NSIndexSet *flagColors;
@property(readonly) _Bool hasUnflagged;
@property(readonly) ECMessageFlags *flags;
@property(readonly, copy) NSArray *ccList;
@property(readonly, copy) NSArray *toList;
@property(readonly, copy) NSArray *senderList;
@property(readonly, copy) NSString *summary;
@property(readonly) ECSubject *subject;
@property(readonly) EMFollowUp *followUp;
@property(readonly) NSDate *sendLaterDate;
@property(readonly) EMReadLater *readLater;
@property(readonly) NSDate *displayDate;
@property(readonly) NSDate *date;
@end
