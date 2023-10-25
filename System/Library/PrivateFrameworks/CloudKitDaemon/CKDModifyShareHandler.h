//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordID, CKShare;

@interface CKDModifyShareHandler
{
    _Bool _haveAddedOwnerToShare;	// 8 = 0x8
    _Bool _isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;	// 9 = 0x9
    struct _PCSPublicIdentityData *_selfPPPCSOwnerIdentity;	// 16 = 0x10
}

+ (id)modifyHandlerForDeleteWithShareID:(id)arg1 operation:(id)arg2;	// IMP=0x00600000001ba27e
+ (id)modifyHandlerWithShare:(id)arg1 operation:(id)arg2;	// IMP=0x00600000001ba1ec
@property(nonatomic) struct _PCSPublicIdentityData *selfPPPCSOwnerIdentity; // @synthesize selfPPPCSOwnerIdentity=_selfPPPCSOwnerIdentity;
@property(nonatomic) _Bool isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade; // @synthesize isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade=_isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
@property(nonatomic) _Bool haveAddedOwnerToShare; // @synthesize haveAddedOwnerToShare=_haveAddedOwnerToShare;
- (void)dealloc;	// IMP=0x00000000001c88d7
- (void)updateParticipantsForFetchedShare:(id)arg1 error:(id)arg2;	// IMP=0x00000000001c8599
- (void)savePCSDataToCache;	// IMP=0x00000000001c8376
- (void)setServerRecord:(id)arg1;	// IMP=0x00000000001c7cca
- (void)clearProtectionDataForRecord;	// IMP=0x00000000001c7869
- (id)_removePublicKey:(id)arg1 fromInvitedPCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x00000000001c75e0
- (id)_ensurePrivateParticipant:(id)arg1 isInInvitedSharePCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x00000000001c5423
- (unsigned long long)invitedPCSPermissionForParticipant:(id)arg1;	// IMP=0x00000000001c5387
- (struct _PCSPublicIdentityData *)createPublicIdentityFromPublicKeyForParticipant:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c4ffb
- (_Bool)_addedPrivateParticipantNeedsAManateeInvitation:(id)arg1;	// IMP=0x00000000001c4f75
- (id)_publicKeyForParticipant:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c49ce
- (id)_removePrivateParticipant:(id)arg1 fromInvitedSharePCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x00000000001c410e
- (_Bool)_removePrivateParticipantsFromInvitedPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;	// IMP=0x00000000001c3e04
- (_Bool)_modifyRoleForParticipant:(id)arg1 invitedPCS:(struct _OpaquePCSShareProtection *)arg2 shareeIdentities:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001c3568
- (void)_setupParticipantsProtectionInfos;	// IMP=0x00000000001c1e03
- (void)_addPublicKeyToSelfParticipant;	// IMP=0x00000000001c1553
- (_Bool)_cleanPublicPCSforShareWithError:(id *)arg1;	// IMP=0x00000000001c1229
- (_Bool)_updateSharePublicPCSWithError:(id *)arg1;	// IMP=0x00000000001c08f2
- (_Bool)_serializePCSDataForShareWithError:(id *)arg1;	// IMP=0x00000000001bf38d
- (void)_alignParticipantPermissions;	// IMP=0x00000000001bef54
- (id)_rollShareAndZonePCSIfNeededForSharePCS:(id)arg1 zonePCSData:(id)arg2;	// IMP=0x00000000001bea39
- (void)prepareForSave;	// IMP=0x00000000001be258
- (void)_prepareDependentPCSUpdateIfNeededForShareWithSharePCS:(id)arg1 error:(id)arg2;	// IMP=0x00000000001bd618
- (id)_handleSharePCSData:(id)arg1 zonePCSData:(id)arg2;	// IMP=0x00000000001bcc5b
- (id)_createNewSharePCSDataWithError:(id *)arg1;	// IMP=0x00000000001bc444
- (void)_fetchRootRecordPublicSharingIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001bc0af
- (void)_fetchSharePCSData;	// IMP=0x00000000001bb1cd
- (void)fetchSharePCSData;	// IMP=0x00000000001ba8b6
- (void)noteSideEffectRecordPendingDelete:(id)arg1;	// IMP=0x00000000001ba7b3
- (void)noteSideEffectRecordAbsent:(id)arg1;	// IMP=0x00000000001ba7ad
- (void)noteSideEffectRecordPendingModify:(id)arg1;	// IMP=0x00000000001ba690
- (id)sideEffectRecordIDs;	// IMP=0x00000000001ba4ea
- (unsigned long long)serviceType;	// IMP=0x00000000001ba455
- (_Bool)isCloudDocsContainer;	// IMP=0x00000000001ba3bb
- (_Bool)isShare;	// IMP=0x00000000001ba3b3
@property(readonly, nonatomic) CKRecordID *shareID;
@property(readonly, nonatomic) CKShare *share;

@end
