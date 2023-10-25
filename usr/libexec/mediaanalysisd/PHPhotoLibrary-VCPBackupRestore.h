//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPhotoLibrary.h>

@interface PHPhotoLibrary (VCPBackupRestore)
- (_Bool)mad_isBackupRestoreEligibleForTask:(unsigned long long)arg1;	// IMP=0x001000000006f1fb
- (id)mad_intermediateRestoredDatabaseFilepath;	// IMP=0x001000000006f19b
- (id)mad_intermediateUnencryptedRestoreFilepathForTask:(unsigned long long)arg1;	// IMP=0x001000000006efe4
- (id)mad_intermediateEncryptedRestoreFilepathForTask:(unsigned long long)arg1;	// IMP=0x001000000006ee2d
- (id)vcp_mediaAnalysisIntermediateRestoreDirectory;	// IMP=0x001000000006edcd
- (id)mad_intermediateEncryptedBackupFilepathForTask:(unsigned long long)arg1;	// IMP=0x001000000006ec16
- (id)mad_intermediateUnencryptedBackupFilepathForTask:(unsigned long long)arg1;	// IMP=0x001000000006ea5f
- (id)vcp_mediaAnalysisIntermediateBackupDirectory;	// IMP=0x001000000006e9ff
- (id)mad_backupFilepathForTask:(unsigned long long)arg1;	// IMP=0x001000000006e848
- (id)vcp_mediaAnalysisBackupFilepath;	// IMP=0x001000000006e831
- (id)vcp_mediaAnalysisBackupDirectory;	// IMP=0x001000000006e7d1
- (_Bool)vcp_openAndWaitWithUpgrade:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00100000000ea9b5
- (int)_bumpFaceProcessingVersionIfNeededWithError:(id *)arg1;	// IMP=0x00100000000ea858
- (int)vcp_bumpFaceProcessingToVersion:(int)arg1 withError:(id *)arg2;	// IMP=0x00100000000ea657
- (int)_resetCurrentFaceProgress;	// IMP=0x00100000000ea4b5
- (int)_resetChangeTokenAndProcessingStatusForFaceProcessing;	// IMP=0x00100000000ea1fa
@end
