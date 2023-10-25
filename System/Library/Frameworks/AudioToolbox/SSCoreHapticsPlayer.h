//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHHapticEngine;

__attribute__((visibility("hidden")))
@interface SSCoreHapticsPlayer : NSObject
{
    CHHapticEngine *_engine;	// 8 = 0x8
    unsigned long long _ssid;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000545f0
@property(readonly) unsigned long long ssid; // @synthesize ssid=_ssid;
@property(readonly) CHHapticEngine *engine; // @synthesize engine=_engine;
- (void)prewarm:(_Bool)arg1;	// IMP=0x00000000000545cc
- (void)stop:(_Bool)arg1;	// IMP=0x00000000000545c6
- (_Bool)playWithOptions:(id)arg1 completionCallbackToken:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00000000000545be
- (id)initWithAudio:(id)arg1 hapticDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000545b0
- (id)initWithAudio:(id)arg1 haptic:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000545a2
- (id)init;	// IMP=0x0000000000054594

@end
