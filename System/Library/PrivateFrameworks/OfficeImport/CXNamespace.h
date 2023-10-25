//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CXNamespace : NSObject
{
    const char *mUri;	// 8 = 0x8
    struct _xmlDoc *mDocument;	// 16 = 0x10
    struct _xmlNs *mDocumentNamespace;	// 24 = 0x18
    CXNamespace *mFallbackNamespace;	// 32 = 0x20
}

+ (void)clearRegisteredNamespaces;	// IMP=0x00600000002defd6
+ (_Bool)isPrefixSupportedFromStream:(struct _xmlTextReader *)arg1 prefix:(const char *)arg2;	// IMP=0x00600000002def95
+ (_Bool)isPrefixSupportedFromNodeContext:(struct _xmlNode *)arg1 prefix:(const char *)arg2;	// IMP=0x00600000001ff130
+ (_Bool)isNamespaceSupported:(const char *)arg1;	// IMP=0x00600000001ff1c6
+ (void)registerNamespace:(id)arg1;	// IMP=0x006000000000284a
- (void).cxx_destruct;	// IMP=0x00000000002df040
@property(retain, nonatomic) CXNamespace *fallbackNamespace; // @synthesize fallbackNamespace=mFallbackNamespace;
- (const char *)fallbackUri;	// IMP=0x00000000002def7f
- (const char *)uri;	// IMP=0x0000000000002983
- (_Bool)containsAttribute:(struct _xmlAttr *)arg1;	// IMP=0x00000000001986e3
- (_Bool)containsNode:(struct _xmlNode *)arg1;	// IMP=0x000000000002535b
- (id)initUnsupportedNsWithUri:(const char *)arg1;	// IMP=0x000000000000280d
- (id)initWithUri:(const char *)arg1 fallbackNamespace:(id)arg2;	// IMP=0x00000000002def0c
- (id)initWithUri:(const char *)arg1;	// IMP=0x00000000000027b9
- (id)init;	// IMP=0x00000000002deebe

@end
