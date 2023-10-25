//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKEncryptedData;

@interface CKDChainPCSData
{
    CKEncryptedData *_encryptedChainPCSPrivateKey;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000350102
- (void).cxx_destruct;	// IMP=0x0000000000350261
@property(retain, nonatomic) CKEncryptedData *encryptedChainPCSPrivateKey; // @synthesize encryptedChainPCSPrivateKey=_encryptedChainPCSPrivateKey;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000035018d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000035010a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000035006d
- (id)CKPropertiesDescription;	// IMP=0x000000000034ff85
- (id)initWithPCSData:(id)arg1 encryptedPrivateKey:(id)arg2;	// IMP=0x000000000034ff0d

@end
