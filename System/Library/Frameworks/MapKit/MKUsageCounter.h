//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface MKUsageCounter : NSObject
{
    NSMutableSet *_countedEventsSet;	// 8 = 0x8
}

+ (id)sharedCounter;	// IMP=0x00600000000f96e8
- (void).cxx_destruct;	// IMP=0x00000000000f994c
- (void)countUsageOfTypeIfNeeded:(unsigned long long)arg1;	// IMP=0x00000000000f98c4
- (void)createCountedEventsSetIfNeeded;	// IMP=0x00000000000f988d
- (void)count:(unsigned long long)arg1;	// IMP=0x00000000000f975c
- (id)fieldNameForType:(unsigned long long)arg1;	// IMP=0x00000000000f973d

@end
