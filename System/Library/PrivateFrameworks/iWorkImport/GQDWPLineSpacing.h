//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GQDWPLineSpacing : NSObject
{
    int mMode;	// 8 = 0x8
    float mAmount;	// 12 = 0xc
}

+ (const struct StateSpec *)stateForReading;	// IMP=0x00100000000205c4
- (float)amount;	// IMP=0x000000000002061c
- (int)mode;	// IMP=0x0000000000020613
- (id)init;	// IMP=0x00000000000205d1
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;	// IMP=0x0000000000020627

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
