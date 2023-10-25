//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface BAAppStoreEventDescriptor : NSObject
{
    _Bool _userInitiated;	// 8 = 0x8
    _Bool _automaticInstall;	// 9 = 0x9
    NSString *_appBundleIdentifier;	// 16 = 0x10
    NSURL *_appBundleURL;	// 24 = 0x18
    unsigned long long _eventType;	// 32 = 0x20
    unsigned long long _clientType;	// 40 = 0x28
}

+ (id)descriptorWithAppBundleIdentifier:(id)arg1 appBundleURL:(id)arg2 event:(unsigned long long)arg3 client:(unsigned long long)arg4;	// IMP=0x00200000000121f3
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000012129
+ (id)new;	// IMP=0x0010000000012121
- (void).cxx_destruct;	// IMP=0x0020000000012538
@property(nonatomic) _Bool automaticInstall; // @synthesize automaticInstall=_automaticInstall;
@property(nonatomic) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(readonly, nonatomic) unsigned long long clientType; // @synthesize clientType=_clientType;
@property(readonly, nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) NSURL *appBundleURL; // @synthesize appBundleURL=_appBundleURL;
@property(readonly, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000123ae
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000012272
- (id)init;	// IMP=0x0010000000012113

@end
