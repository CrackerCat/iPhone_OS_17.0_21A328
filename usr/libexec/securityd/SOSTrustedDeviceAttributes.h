//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SOSTrustedDeviceAttributes : NSObject
{
    NSString *_machineID;	// 8 = 0x8
    NSString *_serialNumber;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002475c7
- (void).cxx_destruct;	// IMP=0x002000000024759f
@property(retain) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain) NSString *machineID; // @synthesize machineID=_machineID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002474ec
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000247412

@end
