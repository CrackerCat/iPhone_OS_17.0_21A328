//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFVersion;

__attribute__((visibility("hidden")))
@interface HMDCompositeSettingVersionValue
{
    HMFVersion *_version;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002ea785
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly, copy) HMFVersion *version; // @synthesize version=_version;
- (id)attributeDescriptions;	// IMP=0x00000000002ea634
- (id)initWithVersion:(id)arg1 type:(long long)arg2;	// IMP=0x00000000002ea5a3

@end
