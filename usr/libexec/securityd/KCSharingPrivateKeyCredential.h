//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, NSDate, NSString;

@interface KCSharingPrivateKeyCredential : NSObject
{
    NSString *_sharingGroup;	// 8 = 0x8
    NSString *_accessGroup;	// 16 = 0x10
    long long _keyType;	// 24 = 0x18
    NSData *_applicationTag;	// 32 = 0x20
    NSString *_label;	// 40 = 0x28
    MISSING_TYPE *_applicationLabel;	// 48 = 0x30
    NSData *_keyMaterial;	// 56 = 0x38
    long long _keySizeInBits;	// 64 = 0x40
    long long _effectiveKeySize;	// 72 = 0x48
    NSDate *_creationDate;	// 80 = 0x50
    NSDate *_modificationDate;	// 88 = 0x58
}

+ (id)requiredAttributeKeys;	// IMP=0x00200000001286c9
+ (const struct SecDbClass *)databaseItemClass;	// IMP=0x00100000001286aa
- (void).cxx_destruct;	// IMP=0x0020000000128640
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) long long effectiveKeySize; // @synthesize effectiveKeySize=_effectiveKeySize;
@property(readonly, nonatomic) long long keySizeInBits; // @synthesize keySizeInBits=_keySizeInBits;
@property(readonly, nonatomic) NSData *keyMaterial; // @synthesize keyMaterial=_keyMaterial;
@property(readonly, nonatomic) NSData *applicationLabel; // @synthesize applicationLabel=_applicationLabel;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSData *applicationTag; // @synthesize applicationTag=_applicationTag;
@property(readonly, nonatomic) long long keyType; // @synthesize keyType=_keyType;
@property(readonly, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(readonly, nonatomic) NSString *sharingGroup; // @synthesize sharingGroup=_sharingGroup;
- (id)attributesWithAccessGroups:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001280e8
- (id)proto;	// IMP=0x0010000000127ef1
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000127861
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001275fb
- (id)initWithAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012633a
- (id)initWithProto:(id)arg1 sharingGroup:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001260df
- (id)initWithDatabaseItem:(struct SecDbItem *)arg1 error:(id *)arg2;	// IMP=0x001000000012603b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
