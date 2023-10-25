//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLHeapDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLHeapDescriptorInternal : MTLHeapDescriptor
{
    struct MTLHeapDescriptorPrivate *_private;	// 16 = 0x10
}

- (_Bool)validateWithDevice:(id)arg1;	// IMP=0x00000000000ce164
- (unsigned long long)protectionOptions;	// IMP=0x00000000000ce14f
- (void)setProtectionOptions:(unsigned long long)arg1;	// IMP=0x00000000000ce13a
- (unsigned long long)pinnedGPUAddress;	// IMP=0x00000000000ce125
- (void)setPinnedGPUAddress:(unsigned long long)arg1;	// IMP=0x00000000000ce110
- (void)setResourceOptions:(unsigned long long)arg1;	// IMP=0x00000000000ce0e8
- (unsigned long long)resourceOptions;	// IMP=0x00000000000ce0d3
- (void)setHazardTrackingMode:(unsigned long long)arg1;	// IMP=0x00000000000ce0ac
- (unsigned long long)hazardTrackingMode;	// IMP=0x00000000000ce092
- (const struct MTLHeapDescriptorPrivate *)descriptorPrivate;	// IMP=0x00000000000ce081
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000cde12
- (id)description;	// IMP=0x00000000000cddfe
- (void)setType:(long long)arg1;	// IMP=0x00000000000cdde9
- (long long)type;	// IMP=0x00000000000cddd4
@property(nonatomic) _Bool sparsePageAccessCountersEnabled;
@property(nonatomic) long long sparsePageSize;
- (void)setStorageMode:(unsigned long long)arg1;	// IMP=0x00000000000cdd57
- (unsigned long long)storageMode;	// IMP=0x00000000000cdd42
- (void)setCpuCacheMode:(unsigned long long)arg1;	// IMP=0x00000000000cdd1e
- (unsigned long long)cpuCacheMode;	// IMP=0x00000000000cdd09
- (void)setSize:(unsigned long long)arg1;	// IMP=0x00000000000cdcf5
- (unsigned long long)size;	// IMP=0x00000000000cdce1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cdc63
- (unsigned long long)hash;	// IMP=0x00000000000cdc46
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cdbeb
- (void)dealloc;	// IMP=0x00000000000cdbaa
- (id)init;	// IMP=0x00000000000cdb08

@end
