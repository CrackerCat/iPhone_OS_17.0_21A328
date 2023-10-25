//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTRequestStatsResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct RequestStatsResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b3dc1
- (id)flatbuffData;	// IMP=0x00000000000b3c3a
- (Offset_92033781)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000b2f9f
@property(readonly, nonatomic) NSString *request_locale;
@property(readonly, nonatomic) NSString *speech_id;
@property(readonly, nonatomic) NSString *language;
- (void)double_stats_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b2ca4
- (unsigned long long)double_stats_count;	// IMP=0x00000000000b2c08
- (id)double_stats_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b2b0f
@property(readonly, nonatomic) NSArray *double_stats;
- (void)int32_stats_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b2840
- (unsigned long long)int32_stats_count;	// IMP=0x00000000000b27a4
- (id)int32_stats_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b26ab
@property(readonly, nonatomic) NSArray *int32_stats;
- (void)bool_stats_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b23dc
- (unsigned long long)bool_stats_count;	// IMP=0x00000000000b2340
- (id)bool_stats_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b2247
@property(readonly, nonatomic) NSArray *bool_stats;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b211e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RequestStatsResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000b1f73
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RequestStatsResponse *)arg2;	// IMP=0x00000000000b1f5e
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000b1f44
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000b1f2d

@end
