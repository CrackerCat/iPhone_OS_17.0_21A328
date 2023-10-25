//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFMailboxUid, MailAccount, NSString;

@interface FavoriteItem_Mailbox
{
    MFMailboxUid *_mailbox;	// 104 = 0x68
    MailAccount *_account;	// 112 = 0x70
    int _mailboxType;	// 120 = 0x78
    NSString *_accountRelativePath;	// 128 = 0x80
    NSString *_displayName;	// 136 = 0x88
    _Bool _originalPushState;	// 144 = 0x90
}

+ (_Bool)_defaultShouldSync;	// IMP=0x00400000000156cb
- (void).cxx_destruct;	// IMP=0x0020000000016ec8
@property(retain) MFMailboxUid *mailbox; // @synthesize mailbox=_mailbox;
@property _Bool originalPushState; // @synthesize originalPushState=_originalPushState;
- (id)analyticsKey;	// IMP=0x0010000000016e6b
- (void)_postNotification;	// IMP=0x0010000000016d45
- (void)wasChangedExternally;	// IMP=0x0010000000016cef
- (void)wasRemovedFromCollecion:(id)arg1;	// IMP=0x0010000000016a5f
- (void)wasAddedToCollection:(id)arg1;	// IMP=0x001000000001679a
- (id)syncValue;	// IMP=0x00100000000165e7
- (id)syncKey;	// IMP=0x001000000001659c
- (_Bool)acceptsMessageTransfers;	// IMP=0x0010000000016522
- (id)representingMailbox;	// IMP=0x001000000001634d
- (id)account;	// IMP=0x0010000000016338
- (id)criterion;	// IMP=0x00100000000162c1
- (_Bool)isVisible;	// IMP=0x001000000001629a
- (id)displayName;	// IMP=0x0010000000016252
- (id)parentItemID;	// IMP=0x00100000000161ee
- (id)itemUUID;	// IMP=0x0010000000016165
- (id)itemID;	// IMP=0x00100000000160ac
- (id)dictionaryRepresentation;	// IMP=0x0010000000015d2b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000015ad1
- (unsigned long long)hash;	// IMP=0x0010000000015ab4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000015870
- (id)initWithMailbox:(id)arg1;	// IMP=0x00100000000156d3

@end
