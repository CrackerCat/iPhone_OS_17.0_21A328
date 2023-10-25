//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class AWDHomeKitValue, NSString;

__attribute__((visibility("hidden")))
@interface HMDWHASettingEvent : HMMLogEvent
{
    NSString *_keyPath;	// 8 = 0x8
    AWDHomeKitValue *_value;	// 16 = 0x10
}

+ (id)eventWithKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x00000000008f5540
- (void).cxx_destruct;	// IMP=0x00000000008f550f
@property(copy, nonatomic) AWDHomeKitValue *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;

@end
