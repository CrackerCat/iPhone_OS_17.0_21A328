//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSSiriAudioRoute : NSObject
{
    _Bool _isBluetooth;	// 8 = 0x8
    NSString *_deviceName;	// 16 = 0x10
    NSString *_uid;	// 24 = 0x18
    NSString *_source;	// 32 = 0x20
    NSString *_destination;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000003b4a0
@property(readonly, copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(readonly, copy, nonatomic) NSString *source; // @synthesize source=_source;
// Error: Property attributes should begin with the type ('T') attribute, property name: isBluetooth
// Property attributes: (null)

@property(readonly, copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(readonly, copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (id)initWithAudioDeviceID:(unsigned int)arg1;	// IMP=0x001000000003af74

@end
