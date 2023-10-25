//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (DAKeychainAddition)
+ (int)da_classicPortForScheme:(id)arg1;	// IMP=0x00600000000274b2
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;	// IMP=0x006000000002748a
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 user:(id)arg3 port:(int)arg4 uri:(id)arg5;	// IMP=0x0060000000027251
+ (id)da_URLWithDirtyString:(id)arg1;	// IMP=0x0060000000027158
- (id)URLWithUsername:(id)arg1;	// IMP=0x00100000000169be
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;	// IMP=0x001000000001672a
- (id)URLByRemovingLastPathComponent;	// IMP=0x00100000000165b8
- (id)URLWithoutUsername;	// IMP=0x001000000001648d
- (id)uri;	// IMP=0x00100000000163bd
- (id)da_pathWithoutTrailingRemovingSlash;	// IMP=0x001000000002709c
- (id)da_rawPath;	// IMP=0x001000000002708a
- (id)da_urlBySettingPath:(id)arg1;	// IMP=0x0010000000027076
- (id)da_urlBySettingPort:(id)arg1;	// IMP=0x0010000000027062
- (id)da_urlBySettingHost:(id)arg1;	// IMP=0x001000000002704e
- (id)da_urlBySettingScheme:(id)arg1;	// IMP=0x001000000002703a
- (id)da_urlForLogging;	// IMP=0x0010000000026f3b
- (id)da_urlByRemovingUsername;	// IMP=0x0010000000026eca
- (id)da_urlBySettingPassword:(id)arg1;	// IMP=0x0010000000026e37
- (id)da_urlBySettingUsername:(id)arg1;	// IMP=0x0010000000026da4
- (id)da_urlBySettingPath:(id)arg1 keepUsername:(_Bool)arg2;	// IMP=0x0010000000026cf7
- (id)da_urlBySettingPort:(id)arg1 keepUsername:(_Bool)arg2;	// IMP=0x0010000000026c38
- (id)da_urlBySettingHost:(id)arg1 keepUsername:(_Bool)arg2;	// IMP=0x0010000000026b8b
- (id)da_urlBySettingScheme:(id)arg1 keepUsername:(_Bool)arg2;	// IMP=0x0010000000026ade
- (_Bool)da_isEqualToDAVURL:(id)arg1;	// IMP=0x00100000000264bc
- (id)da_leastInfoStringRepresentationRelativeToParentURL:(id)arg1;	// IMP=0x0010000000027541
@end
