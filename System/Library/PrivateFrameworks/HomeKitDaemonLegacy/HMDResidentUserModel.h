//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDResidentUserModel
{
    NSString *_displayName;	// 8 = 0x8
}

+ (id)properties;	// IMP=0x00600000009ba8ce
- (void).cxx_destruct;	// IMP=0x00000000009ba8bb
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;

// Remaining properties
@property(retain, nonatomic) NSNumber *configState; // @dynamic configState;
@property(retain, nonatomic) HMDDevice *device; // @dynamic device;
@property(retain, nonatomic) NSString *deviceIdentifier; // @dynamic deviceIdentifier;

@end
