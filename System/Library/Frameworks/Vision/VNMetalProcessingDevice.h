//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VNProcessingDevice.h"

@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface VNMetalProcessingDevice : VNProcessingDevice
{
    id <MTLDevice> _metalDevice;	// 8 = 0x8
}

+ (id)allDevices;	// IMP=0x0060000000134136
- (void).cxx_destruct;	// IMP=0x0000000000134123
- (int)espressoStorageType;	// IMP=0x0000000000134118
- (int)espressoEngine;	// IMP=0x000000000013410d
- (int)espressoDeviceID;	// IMP=0x00000000001340f8
- (id)metalDevice;	// IMP=0x00000000001340e3
- (_Bool)targetsGPU;	// IMP=0x00000000001340db
- (id)computeDevice;	// IMP=0x0000000000134084
- (id)description;	// IMP=0x0000000000133fd2
- (unsigned long long)hash;	// IMP=0x0000000000133f51
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000133e59
- (id)initWithMetalDevice:(id)arg1;	// IMP=0x0000000000133deb

@end
