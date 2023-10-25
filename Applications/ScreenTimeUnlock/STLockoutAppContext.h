//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface STLockoutAppContext : NSObject
{
    NSString *_eventType;	// 8 = 0x8
    NSString *_clientName;	// 16 = 0x10
    NSString *_clientBundleID;	// 24 = 0x18
    NSDictionary *_additionalParameters;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000001a60
+ (id)contextWithData:(id)arg1;	// IMP=0x0010000000001fb6
- (void).cxx_destruct;	// IMP=0x0010000000001f78
@property(copy, nonatomic) NSDictionary *additionalParameters; // @synthesize additionalParameters=_additionalParameters;
@property(copy, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (id)debugDescription;	// IMP=0x0010000000001e01
- (id)description;	// IMP=0x0010000000001d35
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000001ca0
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000001b5e
- (id)initWithEventType:(id)arg1;	// IMP=0x0010000000001a68
- (id)dataRepresentation;	// IMP=0x00100000000020eb

@end
