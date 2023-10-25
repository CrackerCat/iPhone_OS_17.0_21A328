//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

__attribute__((visibility("hidden")))
@interface SiriTTSOspreyStreamingPartialResponse : NSObject
{
    NSData *_audioData;	// 8 = 0x8
    NSArray *_timingInfos;	// 16 = 0x10
    struct AudioStreamBasicDescription _asbd;	// 24 = 0x18
}

+ (void)processServerLogs:(id)arg1;	// IMP=0x0060000000113f75
- (void).cxx_destruct;	// IMP=0x0000000000113f4d
@property(readonly, nonatomic) NSArray *timingInfos; // @synthesize timingInfos=_timingInfos;
@property(readonly, nonatomic) NSData *audioData; // @synthesize audioData=_audioData;
@property(nonatomic) struct AudioStreamBasicDescription asbd; // @synthesize asbd=_asbd;
- (id)initWithOspreyPartialResponse:(id)arg1;	// IMP=0x0000000000113c2a

@end
