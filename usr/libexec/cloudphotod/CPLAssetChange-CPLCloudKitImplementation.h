//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLAssetChange.h>

@interface CPLAssetChange (CPLCloudKitImplementation)
+ (id)ckValueForRelatedRecord:(id)arg1;	// IMP=0x0020000000124e79
+ (id)ckPropertyForRelatedIdentifier;	// IMP=0x0010000000124e6c
- (void)setMostRecentAddedDateOnCKRecord:(id)arg1 withCPLEnabledDate:(id)arg2;	// IMP=0x0020000000124d90
- (void)fillWithCKRecord:(id)arg1;	// IMP=0x001000000012a305
- (_Bool)shouldClearMissingResourcesInCKRecord;	// IMP=0x0010000000130f3c
- (void)fillCKRecordBuilder:(id)arg1;	// IMP=0x001000000012ebb7
@end
