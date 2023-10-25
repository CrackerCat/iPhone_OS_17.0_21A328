//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTUserDataEntity : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct UserDataEntity *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c4741
- (id)flatbuffData;	// IMP=0x00000000000c45ba
- (Offset_0b2b2f48)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000c41a8
- (void)attributes_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c3ff7
- (unsigned long long)attributes_count;	// IMP=0x00000000000c3f5b
- (id)attributes_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000c3e62
@property(readonly, nonatomic) NSArray *attributes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c3d39
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UserDataEntity *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000c3b8e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct UserDataEntity *)arg2;	// IMP=0x00000000000c3b79
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c3b5f
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c3b48

@end
