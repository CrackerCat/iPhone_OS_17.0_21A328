//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCPPackageProperties : NSObject
{
    NSString *mCreator;	// 8 = 0x8
    NSString *mDescription;	// 16 = 0x10
    NSString *mKeywords;	// 24 = 0x18
    NSString *mTitle;	// 32 = 0x20
    NSString *mAppVersion;	// 40 = 0x28
    NSString *mSubject;	// 48 = 0x30
    NSString *mCompany;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000036f9f8
@property(retain) NSString *company; // @synthesize company=mCompany;
@property(retain) NSString *subject; // @synthesize subject=mSubject;
- (id)appVersion;	// IMP=0x000000000036f9a4
- (id)title;	// IMP=0x00000000001b8a48
- (id)keywords;	// IMP=0x00000000001b8a64
- (id)description;	// IMP=0x00000000001b8a72
- (id)creator;	// IMP=0x00000000001b8a56
- (id)initWithCoreXml:(struct _xmlDoc *)arg1 appXml:(struct _xmlDoc *)arg2;	// IMP=0x000000000036fa57
- (void)readFromCoreXml:(struct _xmlDoc *)arg1 appXml:(struct _xmlDoc *)arg2;	// IMP=0x000000000036ffe2
- (void)readFromAppXml:(struct _xmlDoc *)arg1;	// IMP=0x000000000036fe29
- (void)readFromCoreXml:(struct _xmlDoc *)arg1;	// IMP=0x000000000036fac3

@end
