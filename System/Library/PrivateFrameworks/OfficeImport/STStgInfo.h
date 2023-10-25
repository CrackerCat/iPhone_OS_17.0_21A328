//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface STStgInfo : NSObject
{
    NSString *m_pstrName;	// 8 = 0x8
    int m_type;	// 16 = 0x10
    unsigned int m_userFlags;	// 20 = 0x14
    unsigned int m_size;	// 24 = 0x18
    long long m_creationTime;	// 32 = 0x20
    long long m_modificationTime;	// 40 = 0x28
    int m_accessMode;	// 48 = 0x30
    CDStruct_214f2dba m_clsid;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000003721b5
- (void)setCLSID:(CDStruct_214f2dba)arg1;	// IMP=0x00000000003721a7
- (CDStruct_214f2dba)getCLSID;	// IMP=0x0000000000372199
- (void)setAccessMode:(int)arg1;	// IMP=0x0000000000372190
- (int)getAccessMode;	// IMP=0x0000000000372187
- (void)setModificationTime:(long long)arg1;	// IMP=0x000000000037217d
- (long long)getModificationTime;	// IMP=0x0000000000372173
- (void)setCreationTime:(long long)arg1;	// IMP=0x0000000000372169
- (long long)getCreationTime;	// IMP=0x000000000037215f
- (void)setSize:(unsigned int)arg1;	// IMP=0x0000000000372156
- (unsigned int)getSize;	// IMP=0x000000000037214d
- (void)setUserFlags:(unsigned int)arg1;	// IMP=0x0000000000372144
- (unsigned int)getUserFlags;	// IMP=0x000000000037213b
- (void)setType:(int)arg1;	// IMP=0x0000000000372132
- (int)getType;	// IMP=0x0000000000372129
- (void)setName:(id)arg1;	// IMP=0x0000000000372118
- (id)getName;	// IMP=0x000000000037210a
- (id)initWithStgInfo:(const struct _StgInfo *)arg1;	// IMP=0x000000000037202b
- (id)init;	// IMP=0x0000000000371fa8

@end
