//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCVolume : NSObject
{
    struct statfs _stfs;	// 8 = 0x8
    int _deviceID;	// 2176 = 0x880
}

@property(readonly, nonatomic) int deviceID; // @synthesize deviceID=_deviceID;
- (_Bool)setupWithError:(id *)arg1;	// IMP=0x0000000000006a2c
- (id)description;	// IMP=0x000000000000697c
@property(readonly, nonatomic) NSString *fsTypeName;
- (int)_setUpForStatfs:(struct statfs)arg1;	// IMP=0x000000000000689e
@property(readonly, nonatomic) NSString *mountPath;

@end
