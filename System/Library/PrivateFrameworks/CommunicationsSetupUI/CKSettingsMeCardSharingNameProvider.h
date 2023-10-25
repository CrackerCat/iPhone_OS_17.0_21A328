//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKSettingsMeCardSharingNameProvider : NSObject
{
    NSString *_givenName;	// 8 = 0x8
    NSString *_middleName;	// 16 = 0x10
    NSString *_familyName;	// 24 = 0x18
    NSString *_nickname;	// 32 = 0x20
}

+ (id)nameProviderForNickname:(id)arg1;	// IMP=0x00100000000505b9
- (void).cxx_destruct;	// IMP=0x00000000000506ea
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(retain, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(retain, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
