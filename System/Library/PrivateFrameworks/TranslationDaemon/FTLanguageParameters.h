//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTLanguageParameters : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct LanguageParameters *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000127bf1
- (id)flatbuffData;	// IMP=0x0000000000127a6a
- (Offset_3379e06c)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001278c1
@property(readonly, nonatomic) NSString *fork_id;
@property(readonly, nonatomic) NSString *request_locale;
@property(readonly, nonatomic) NSString *language;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012776c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageParameters *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000001275c1
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageParameters *)arg2;	// IMP=0x00000000001275ac
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000127592
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000012757b

@end
