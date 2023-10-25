//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary;

@interface _TtC9libfssync4FPCK : NSObject
{
    MISSING_TYPE *numberOfFilesChecked;	// 8 = 0x8
    MISSING_TYPE *numberOfBrokenFilesInFSCheck;	// 16 = 0x10
    MISSING_TYPE *numberOfBrokenFilesInFSAndFSSnapshotCheck;	// 24 = 0x18
    MISSING_TYPE *numberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck;	// 32 = 0x20
    MISSING_TYPE *numberOfBrokenFilesInReconciliationTableCheck;	// 40 = 0x28
    MISSING_TYPE *numberOfBrokenFilesInBackupManifestCheck;	// 48 = 0x30
    MISSING_TYPE *totalDatalessItems;	// 56 = 0x38
    MISSING_TYPE *totalMaterializedItems;	// 64 = 0x40
    MISSING_TYPE *accumulatedFileSizes;	// 72 = 0x48
    MISSING_TYPE *accumulatedSizeOfDisk;	// 80 = 0x50
    MISSING_TYPE *accumulatedDownloads;	// 88 = 0x58
    MISSING_TYPE *accumulatedUploads;	// 96 = 0x60
    MISSING_TYPE *multipleHardlinksExtensions;	// 104 = 0x68
    MISSING_TYPE *pendingSetSize;	// 112 = 0x70
    MISSING_TYPE *superPendingSetSize;	// 120 = 0x78
    MISSING_TYPE *pendingSetErrors;	// 128 = 0x80
    MISSING_TYPE *superPendingSetErrors;	// 136 = 0x88
    MISSING_TYPE *pendingSetItemPayload;	// 144 = 0x90
    MISSING_TYPE *superPendingSetItemPayload;	// 152 = 0x98
    MISSING_TYPE *telemetryReport;	// 160 = 0xa0
    MISSING_TYPE *sqlDatabase;	// 168 = 0xa8
    MISSING_TYPE *fsSnapshotChecker;	// 176 = 0xb0
    MISSING_TYPE *fpSnapshotChecker;	// 184 = 0xb8
    MISSING_TYPE *openBackupDatabases;	// 192 = 0xc0
    MISSING_TYPE *providerDomainID;	// 200 = 0xc8
    MISSING_TYPE *usingFPFS;	// 208 = 0xd0
    MISSING_TYPE *diskVsFSSnapshotIgnoredFilenames;	// 216 = 0xd8
    MISSING_TYPE *launchOptions;	// 224 = 0xe0
    MISSING_TYPE *reason;	// 232 = 0xe8
    MISSING_TYPE *shouldPause;	// 240 = 0xf0
    MISSING_TYPE *discoveredDiskBrokenInvariantsCounters;	// 256 = 0x100
    MISSING_TYPE *repairedDiskBrokenInvariantsCounters;	// 264 = 0x108
    MISSING_TYPE *discoveredDiskVsFSSnapshotDiffCounters;	// 272 = 0x110
    MISSING_TYPE *repairedDiskVsFSSnapshotDiffCounters;	// 280 = 0x118
    MISSING_TYPE *discoveredFSSnapshotVsFPSnapshotDiffCounters;	// 288 = 0x120
    MISSING_TYPE *discoveredReconciliationTableBrokenInvariantsCounters;	// 296 = 0x128
    MISSING_TYPE *discoveredBackupManifestVsFSSnapshotDiffCounters;	// 304 = 0x130
    MISSING_TYPE *providerVersion;	// 312 = 0x138
    MISSING_TYPE *packageDetection;	// 328 = 0x148
    MISSING_TYPE *resultHandler;	// 336 = 0x150
    MISSING_TYPE *skippedLockedItems;	// 352 = 0x160
    MISSING_TYPE *rootURL;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_importIsRunning;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_vendorExcludedFolders;	// 0 = 0x0
}

+ (_Bool)dumpDatabaseAt:(id)arg1 fullDump:(_Bool)arg2 writeTo:(id)arg3 error:(id *)arg4;	// IMP=0x002000000033b1e0
- (void).cxx_destruct;	// IMP=0x004000000032b8d0
- (id)init;	// IMP=0x001000000033bca0
- (_Bool)checker:(id)arg1 handleLockedItemAtPath:(id)arg2 handle:(const struct fpfs_item_handle *)arg3;	// IMP=0x00100000003320b0
- (_Bool)checker:(id)arg1 handleItem:(int)arg2 itemStatus:(const CDStruct_bb5def0f *)arg3 under:(id)arg4 brokenInvariants:(unsigned long long)arg5;	// IMP=0x0010000000331670
- (_Bool)launchWithTelemetryFromURLs:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000330e20
- (void)dealloc;	// IMP=0x001000000032b8b0
- (id)initWithDatabasesBackupsPaths:(id)arg1 providerDomainID:(id)arg2 reason:(unsigned long long)arg3 usingFPFS:(_Bool)arg4 iCDPackageDetection:(_Bool)arg5;	// IMP=0x0010000000329c90
@property(nonatomic, copy) NSDictionary *telemetryReport;
@property(nonatomic) long long numberOfBrokenFilesInBackupManifestCheck; // @synthesize numberOfBrokenFilesInBackupManifestCheck;
@property(nonatomic) long long numberOfBrokenFilesInReconciliationTableCheck; // @synthesize numberOfBrokenFilesInReconciliationTableCheck;
@property(nonatomic) long long numberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck; // @synthesize numberOfBrokenFilesInFSSnapshotAndFPSnapshotCheck;
@property(nonatomic) long long numberOfBrokenFilesInFSAndFSSnapshotCheck; // @synthesize numberOfBrokenFilesInFSAndFSSnapshotCheck;
@property(nonatomic) long long numberOfBrokenFilesInFSCheck; // @synthesize numberOfBrokenFilesInFSCheck;
@property(nonatomic) long long numberOfFilesChecked; // @synthesize numberOfFilesChecked;

@end
