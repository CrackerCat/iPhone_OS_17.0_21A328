//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLCloudKitLibraryShareZoneIdentification;

@interface CPLCloudKitStagingZoneIdentification
{
    CPLCloudKitLibraryShareZoneIdentification *_stagedZoneIdentification;	// 40 = 0x28
}

+ (id)libraryInfoRecordName;	// IMP=0x004000000011bf8a
+ (_Bool)isSupportedShareType:(id)arg1;	// IMP=0x001000000011bf58
+ (id)shareType;	// IMP=0x001000000011bf3f
+ (id)shareRecordName;	// IMP=0x001000000011bf26
+ (_Bool)supportsCloudKitScope:(id)arg1 engineScope:(id)arg2;	// IMP=0x001000000011bb5c
+ (long long)scopeTypeForCloudKitScope:(id)arg1 proposedScopeType:(long long)arg2 fetchedRecords:(id)arg3 currentUserID:(id)arg4;	// IMP=0x001000000011ba97
+ (id)recordsToFetchToIdentifyZoneID:(id)arg1 proposedScopeType:(long long)arg2 currentUserID:(id)arg3;	// IMP=0x001000000011b9be
- (void).cxx_destruct;	// IMP=0x002000000011bfcf
- (id)shareRecordIDToDelete;	// IMP=0x001000000011bfb3
- (_Bool)supportsZoneCreation;	// IMP=0x001000000011bfab
- (_Bool)supportsZoneDelete;	// IMP=0x001000000011bfa3
- (_Bool)isSupportedShareType:(id)arg1;	// IMP=0x001000000011bf71
- (id)scopeChangeFromCKRecords:(id)arg1 currentUserID:(id)arg2 previousScopeChange:(id)arg3;	// IMP=0x001000000011bb79

@end
