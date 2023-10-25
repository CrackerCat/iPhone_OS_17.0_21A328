//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADProperties : NSObject
{
    OADProperties *mParent;	// 8 = 0x8
    unsigned int mIsMerged:1;	// 16 = 0x10
    unsigned int mIsMergedWithParent:1;	// 16 = 0x10
}

+ (id)defaultProperties;	// IMP=0x006000000002b161
- (void).cxx_destruct;	// IMP=0x0000000000318af6
- (id)description;	// IMP=0x0000000000318ab8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031892c
- (unsigned long long)hash;	// IMP=0x0000000000103f69
- (void)removeUnnecessaryOverrides;	// IMP=0x000000000002fd59
- (_Bool)isAnythingOverridden;	// IMP=0x0000000000318924
- (void)flatten;	// IMP=0x00000000003188de
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;	// IMP=0x00000000003188d8
- (void)changeParentPreservingEffectiveValues:(id)arg1;	// IMP=0x0000000000318837
- (_Bool)isMergedPropertyForSelector:(SEL)arg1;	// IMP=0x0000000000023580
- (id)possiblyInexistentOverrideForSelector:(SEL)arg1;	// IMP=0x0000000000318823
- (id)overrideForSelector:(SEL)arg1;	// IMP=0x0000000000022dc4
- (id)overrideForSelector:(SEL)arg1 mustExist:(_Bool)arg2;	// IMP=0x000000000031876d
- (void)setMergedWithParent:(_Bool)arg1;	// IMP=0x00000000000233ce
- (_Bool)isMergedWithParent;	// IMP=0x00000000000233b1
- (void)setMerged:(_Bool)arg1;	// IMP=0x00000000000233be
- (_Bool)isMerged;	// IMP=0x00000000000233a6
- (void)setParent:(id)arg1;	// IMP=0x000000000000b0db
- (void)p_setParent:(id)arg1;	// IMP=0x000000000000b19f
- (id)parent;	// IMP=0x000000000000b1a5
- (id)initWithDefaults;	// IMP=0x000000000000ae34
- (id)init;	// IMP=0x000000000000ae6c

@end
