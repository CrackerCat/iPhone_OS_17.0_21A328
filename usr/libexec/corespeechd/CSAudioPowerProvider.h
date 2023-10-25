//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioPowerMeter, NSString;

@interface CSAudioPowerProvider : NSObject
{
    CSAudioPowerMeter *_powerMeter;	// 8 = 0x8
    float _cachedAvgPower;	// 16 = 0x10
    float _cachedPeakPower;	// 20 = 0x14
}

+ (id)sharedInstance;	// IMP=0x00200000001363a9
- (void).cxx_destruct;	// IMP=0x0020000000136399
- (void)getAudioPowerUpdateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000136379
- (void)processAudioChunkForTV:(id)arg1;	// IMP=0x001000000013630d
- (void)processAudioChunk:(id)arg1;	// IMP=0x00100000001361fd
- (id)init;	// IMP=0x0010000000136149

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
