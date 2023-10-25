//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMPOSIXUser, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MCMUserIdentity : NSObject
{
    NSURL *_homeDirectoryURL;	// 8 = 0x8
    unsigned int _kernelPersonaID;	// 16 = 0x10
    int _personaType;	// 20 = 0x14
    NSString *_personaUniqueString;	// 24 = 0x18
    long long _extensionHandle;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    MCMPOSIXUser *_posixUser;	// 48 = 0x30
}

+ (id)_identifierForPOSIXUID:(unsigned int)arg1 personaUniqueString:(id)arg2 personaType:(int)arg3;	// IMP=0x0010000000061e00
+ (_Bool)isUserIdentityRequiredForContainerClass:(unsigned long long)arg1;	// IMP=0x0010000000061d6a
+ (id)userIdentityWithPlist:(id)arg1 cache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0010000000061cca
- (void).cxx_destruct;	// IMP=0x0000000000061894
@property(readonly, nonatomic) int personaType; // @synthesize personaType=_personaType;
@property(readonly, nonatomic) NSURL *homeDirectoryURL; // @synthesize homeDirectoryURL=_homeDirectoryURL;
@property(readonly, nonatomic) MCMPOSIXUser *posixUser; // @synthesize posixUser=_posixUser;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long extensionHandle; // @synthesize extensionHandle=_extensionHandle;
@property(readonly, nonatomic) unsigned int kernelPersonaID; // @synthesize kernelPersonaID=_kernelPersonaID;
@property(readonly, nonatomic) NSString *personaUniqueString; // @synthesize personaUniqueString=_personaUniqueString;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000615eb
- (_Bool)isStrictlyEqualToUserIdentity:(id)arg1;	// IMP=0x0000000000061572
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000614e2
- (_Bool)isEqualToUserIdentity:(id)arg1;	// IMP=0x000000000006149d
- (unsigned long long)hash;	// IMP=0x000000000006145c
- (id)_descriptionForPersonaType:(int)arg1;	// IMP=0x0000000000061410
@property(readonly, nonatomic) NSString *shortDescription;
- (id)description;	// IMP=0x0000000000061288
- (id)userIdentityWithPOSIXUser:(id)arg1;	// IMP=0x000000000006114b
@property(readonly, nonatomic) _Bool homeDirectoryExists;
@property(readonly, nonatomic, getter=isNoSpecificPersona) _Bool noSpecificPersona;
@property(readonly, nonatomic, getter=isDataSeparated) _Bool dataSeparated;
@property(readonly, copy, nonatomic) id plist;
- (id)initWithVersion2PlistDictionary:(id)arg1 cache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000000000606af
- (id)initWithVersion1PlistDictionary:(id)arg1 cache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000000000601a6
- (id)initWithPlist:(id)arg1 cache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000000006001f
- (void)dealloc;	// IMP=0x000000000005ffb5
- (id)initWithPOSIXUser:(id)arg1 homeDirectoryURL:(id)arg2 personaUniqueString:(id)arg3 personaType:(int)arg4 kernelPersonaID:(unsigned int)arg5;	// IMP=0x000000000005fd12
- (id)init;	// IMP=0x000000000005fc42

@end
