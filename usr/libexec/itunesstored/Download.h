//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSMemoryEntity.h>

@class NSArray, SSDownloadPolicy;

@interface Download : SSMemoryEntity
{
    NSArray *_assets;	// 8 = 0x8
    SSDownloadPolicy *_downloadPolicy;	// 16 = 0x10
}

+ (Class)databaseEntityClass;	// IMP=0x0020000000145fd5
@property(copy, nonatomic) SSDownloadPolicy *downloadPolicy; // @synthesize downloadPolicy=_downloadPolicy;
@property(copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000146dc4
- (_Bool)_setThumbnailImageWithExternalAssets:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000146906
- (_Bool)_setDatabasePropertiesWithExternalMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000146549
- (_Bool)_setAssetsWithExternalThinnedAssets:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000146228
- (_Bool)_setAssetsWithExternalAssets:(id)arg1 error:(id *)arg2;	// IMP=0x001000000014618d
- (id)_copyValidAssetsWithExternalAssets:(id)arg1 validateVariants:(_Bool)arg2;	// IMP=0x0010000000145fe6
- (void)unionNetworkConstraints:(id)arg1;	// IMP=0x0010000000145ece
- (void)removeAssetsWithAssetType:(id)arg1;	// IMP=0x0010000000145dde
- (id)copyInMemoryStoreDownloadMetadata;	// IMP=0x0010000000145d92
- (id)copyStoreDownloadMetadata;	// IMP=0x0010000000145cff
- (id)assetForAssetIdentifier:(long long)arg1;	// IMP=0x0010000000145bc2
- (id)anyAssetForAssetType:(id)arg1;	// IMP=0x0010000000145a38
- (void)dealloc;	// IMP=0x00100000001459e0
- (id)initWithStoreDownload:(id)arg1;	// IMP=0x00100000001453f2
- (id)initWithExternalManifestDictionary:(id)arg1;	// IMP=0x001000000014518a
- (id)initWithClientXPCDownload:(id)arg1;	// IMP=0x0010000000144bd8
- (id)_newAssetArrayWithDownloadAssets:(id)arg1;	// IMP=0x001000000006b7ff
- (id)copyJobActivity;	// IMP=0x001000000006a411
- (id)initWithMicroPaymentDownload:(id)arg1 clientID:(id)arg2;	// IMP=0x00100000001988c8

@end
