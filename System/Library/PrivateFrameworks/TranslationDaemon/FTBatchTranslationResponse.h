//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTBatchTranslationResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct BatchTranslationResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000012ef51
- (id)flatbuffData;	// IMP=0x000000000012edca
- (Offset_b7e0ff9f)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000012e406
@property(readonly, nonatomic) NSString *translated_text_romanized;
- (void)translated_sentences_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000012e1e7
- (unsigned long long)translated_sentences_count;	// IMP=0x000000000012e14b
- (id)translated_sentences_objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000012e052
@property(readonly, nonatomic) NSArray *translated_sentences;
- (void)span_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000012dd83
- (unsigned long long)span_count;	// IMP=0x000000000012dce7
- (id)span_objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000012dbee
@property(readonly, nonatomic) NSArray *span;
@property(readonly, nonatomic) NSString *translated_text;
@property(readonly, nonatomic) NSString *paragraph_id;
@property(readonly, nonatomic) NSString *return_string;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *request_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012d8e2
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000012d737
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationResponse *)arg2;	// IMP=0x000000000012d722
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000012d708
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000012d6f1

@end
