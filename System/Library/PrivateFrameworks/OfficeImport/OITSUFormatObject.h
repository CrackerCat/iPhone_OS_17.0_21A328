//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUFormatObject : NSObject
{
    CDStruct_730f14de mFormatStruct;	// 8 = 0x8
    _Bool mUseExpandedContents;	// 48 = 0x30
}

+ (id)defaultDurationFormat;	// IMP=0x0010000000279ffd
+ (id)defaultDateFormat:(id)arg1;	// IMP=0x0010000000279ee4
@property(readonly, nonatomic) _Bool useExpandedContents; // @synthesize useExpandedContents=mUseExpandedContents;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000027a3b7
- (unsigned long long)hash;	// IMP=0x000000000027a353
- (void)p_setFormatStruct:(CDStruct_730f14de)arg1;	// IMP=0x000000000027a2ea
@property(readonly, nonatomic) CDStruct_730f14de formatStruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027a248
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027a23d
- (void)dealloc;	// IMP=0x000000000027a1ed
- (id)initWithTSUFormatFormatStruct:(CDStruct_730f14de)arg1;	// IMP=0x000000000027a1d9
- (id)initWithTSUFormatFormatStruct:(CDStruct_730f14de)arg1 useExpandedContents:(_Bool)arg2;	// IMP=0x000000000027a150
- (id)init;	// IMP=0x000000000027a07f

@end
