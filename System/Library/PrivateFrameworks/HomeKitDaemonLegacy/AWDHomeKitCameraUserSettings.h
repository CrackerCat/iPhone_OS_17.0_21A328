//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitCameraUserSettings : PBCodable
{
    _Bool _isImportingFromPhotoLibraryEnabled;	// 8 = 0x8
    _Bool _isOwner;	// 9 = 0x9
    _Bool _isSharingFaceClassificationsEnabled;	// 10 = 0xa
    struct {
        unsigned int isImportingFromPhotoLibraryEnabled:1;
        unsigned int isOwner:1;
        unsigned int isSharingFaceClassificationsEnabled:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool isOwner; // @synthesize isOwner=_isOwner;
@property(nonatomic) _Bool isImportingFromPhotoLibraryEnabled; // @synthesize isImportingFromPhotoLibraryEnabled=_isImportingFromPhotoLibraryEnabled;
@property(nonatomic) _Bool isSharingFaceClassificationsEnabled; // @synthesize isSharingFaceClassificationsEnabled=_isSharingFaceClassificationsEnabled;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000008f53
- (unsigned long long)hash;	// IMP=0x0000000000008eec
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000008df4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008d58
- (void)copyTo:(id)arg1;	// IMP=0x0000000000008cdf
- (void)writeTo:(id)arg1;	// IMP=0x0000000000008c49
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000008c3c
- (id)dictionaryRepresentation;	// IMP=0x0000000000008aea
- (id)description;	// IMP=0x0000000000008a3b
@property(nonatomic) _Bool hasIsOwner;
@property(nonatomic) _Bool hasIsImportingFromPhotoLibraryEnabled;
@property(nonatomic) _Bool hasIsSharingFaceClassificationsEnabled;

@end
