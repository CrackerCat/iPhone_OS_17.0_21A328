//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class REMCDAlarm;

@interface REMCDAlarmTrigger
{
}

+ (id)cdEntityName;	// IMP=0x002000000004afcc
+ (_Bool)isAbstract;	// IMP=0x001000000004afc4
+ (id)keyPathsForValuesAffectingEffectiveMinimumSupportedVersion;	// IMP=0x001000000005dee4
+ (id)fetchRequest;	// IMP=0x00100000000ab7d0
+ (_Bool)shouldAttemptLocalObjectMerge;	// IMP=0x00100000006b9390
+ (id)newCloudObjectForRecord:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x00100000006b7050
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;	// IMP=0x00100000006b6920
+ (id)recordTypes;	// IMP=0x00100000006b6800
+ (id)alarmReferenceCKRecordType;	// IMP=0x00100000006b6490
+ (id)ckRecordType;	// IMP=0x00100000006ba420
@property(retain, nonatomic) REMCDAlarm *alarm; // @dynamic alarm;
- (_Bool)isTemporal;	// IMP=0x001000000004b0ab
- (void)debug_lowLevelRemoveFromParent;	// IMP=0x001000000005df87
- (long long)parentEffectiveMinimumSupportedVersion;	// IMP=0x001000000005df04
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x001000000005de76
- (id)modelObject;	// IMP=0x001000000005de06
- (void)fixBrokenReferences;	// IMP=0x00100000006b9cf0
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x00100000006b9680
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x00100000006b9420
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x00100000006b93b0
- (id)parentCloudObject;	// IMP=0x00100000006b9340
- (id)newlyCreatedRecord;	// IMP=0x00100000006b92e0
- (void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;	// IMP=0x00100000006b87a0
- (_Bool)shouldMarkAsDeletedInsteadOfDeletingImmediately;	// IMP=0x00100000006b71e0
- (_Bool)supportsDeletionByTTL;	// IMP=0x00100000006b71b0
- (id)recordType;	// IMP=0x00100000006b7160
- (id)recordZoneName;	// IMP=0x00100000006b7100

// Remaining properties
@property(nonatomic) _Bool isExtraneous; // @dynamic isExtraneous;

@end
