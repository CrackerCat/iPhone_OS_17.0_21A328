//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _LSBundleProvider : NSObject
{
    void *_provider;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x0000000000146176
- (id)bundle:(_Bool)arg1 reason:(id)arg2;	// IMP=0x000000000014614f
- (id)bundle;	// IMP=0x0000000000146136
- (struct __CFBundle *)cfBundleRef:(_Bool)arg1 reason:(id)arg2;	// IMP=0x00000000001460c2
- (struct __CFBundle *)cfBundleRef;	// IMP=0x00000000001460a4
- (id)initWithURL:(id)arg1 useCacheIfPossible:(_Bool)arg2;	// IMP=0x0000000000145fe7
- (id)initWithCFBundle:(struct __CFBundle *)arg1;	// IMP=0x0000000000145f4c
- (_Bool)usingCachedItem;	// IMP=0x0000000000145f37
- (id)infoDictionary;	// IMP=0x0000000000145f1d
- (id)bundleIdentifier;	// IMP=0x0000000000145f03
- (id)bundlePath;	// IMP=0x0000000000145edf
- (id)bundleURL;	// IMP=0x0000000000145ec5
@property(readonly) void *provider;

@end
