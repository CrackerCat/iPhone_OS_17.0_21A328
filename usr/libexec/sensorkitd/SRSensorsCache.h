//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSCache;

@interface SRSensorsCache : NSObject
{
    NSCache *_sensorsCache;	// 8 = 0x8
    NSArray *_sensorDescriptionsDirs;	// 16 = 0x10
}

+ (void)setDefaultCache:(id)arg1;	// IMP=0x002000000001e3e0
+ (void)initialize;	// IMP=0x001000000001e330
- (void)dealloc;	// IMP=0x002000000001e680
- (id)initWithDirectories:(id)arg1;	// IMP=0x001000000001e620
- (id)init;	// IMP=0x001000000001e440

@end
