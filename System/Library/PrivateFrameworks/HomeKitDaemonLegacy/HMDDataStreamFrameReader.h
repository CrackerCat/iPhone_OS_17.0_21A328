//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface HMDDataStreamFrameReader : NSObject
{
    NSObject<OS_dispatch_data> *_partialFrame;	// 8 = 0x8
    _Bool _headerInfoRead;	// 16 = 0x10
    _Bool _streamFailed;	// 17 = 0x11
    unsigned char _currentframeType;	// 18 = 0x12
    unsigned long long _payloadLength;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0060000000307d09
- (void).cxx_destruct;	// IMP=0x0000000000307cf9
- (id)popRawFrame;	// IMP=0x0000000000307c40
- (void)reset;	// IMP=0x0000000000307c18
- (void)_readFrameHeaderIfPossible;	// IMP=0x0000000000307b86
- (void)pushFrameData:(id)arg1;	// IMP=0x0000000000307b15
- (unsigned long long)bytesNeededForCurrentFrame;	// IMP=0x0000000000307ab0
- (unsigned long long)_getCurrentFrameSize;	// IMP=0x0000000000307a8b
- (_Bool)hasPartialData;	// IMP=0x0000000000307a67
- (_Bool)hasCompleteFrame;	// IMP=0x0000000000307a2c
- (_Bool)hasFailed;	// IMP=0x0000000000307a23
- (id)init;	// IMP=0x00000000003079dd

@end
