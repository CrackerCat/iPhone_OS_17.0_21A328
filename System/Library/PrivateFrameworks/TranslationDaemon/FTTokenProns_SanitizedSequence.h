//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTokenProns_SanitizedSequence : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SanitizedSequence *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d7af7
- (id)flatbuffData;	// IMP=0x00000000000d7970
- (Offset_2dc830c1)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000d755f
- (void)sanitized_tokens_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d73ae
- (unsigned long long)sanitized_tokens_count;	// IMP=0x00000000000d7312
- (id)sanitized_tokens_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d7219
@property(readonly, nonatomic) NSArray *sanitized_tokens;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d70f0
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SanitizedSequence *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000d6f45
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SanitizedSequence *)arg2;	// IMP=0x00000000000d6f30
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d6f16
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d6eff

@end
