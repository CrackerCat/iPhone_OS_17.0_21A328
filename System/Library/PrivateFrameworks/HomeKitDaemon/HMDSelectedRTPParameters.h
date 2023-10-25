//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDSelectedRTPParameters : HAPTLVBase
{
    NSNumber *_payloadType;	// 8 = 0x8
    NSNumber *_synchronizationSource;	// 16 = 0x10
    NSNumber *_maximumBitrate;	// 24 = 0x18
    NSNumber *_minimumBitrate;	// 32 = 0x20
    NSNumber *_rtcpInterval;	// 40 = 0x28
    NSNumber *_maxMTU;	// 48 = 0x30
    NSNumber *_comfortNoisePayloadType;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000007c599
- (void).cxx_destruct;	// IMP=0x000000000007c513
@property(readonly, copy, nonatomic) NSNumber *comfortNoisePayloadType; // @synthesize comfortNoisePayloadType=_comfortNoisePayloadType;
@property(copy, nonatomic) NSNumber *maxMTU; // @synthesize maxMTU=_maxMTU;
@property(readonly, copy, nonatomic) NSNumber *rtcpInterval; // @synthesize rtcpInterval=_rtcpInterval;
@property(readonly, copy, nonatomic) NSNumber *minimumBitrate; // @synthesize minimumBitrate=_minimumBitrate;
@property(readonly, copy, nonatomic) NSNumber *maximumBitrate; // @synthesize maximumBitrate=_maximumBitrate;
@property(retain, nonatomic) NSNumber *synchronizationSource; // @synthesize synchronizationSource=_synchronizationSource;
@property(readonly, copy, nonatomic) NSNumber *payloadType; // @synthesize payloadType=_payloadType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007c2c3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007be2e
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000007bbec
- (_Bool)_parseFromTLVData;	// IMP=0x000000000007b86e
@property(readonly, copy) NSData *tlvData;
- (id)initWithPayloadType:(id)arg1 maximumBitrate:(id)arg2 minimumBitrate:(id)arg3 rtcpInterval:(id)arg4 comfortNoisePayloadType:(id)arg5;	// IMP=0x000000000007b536

@end
