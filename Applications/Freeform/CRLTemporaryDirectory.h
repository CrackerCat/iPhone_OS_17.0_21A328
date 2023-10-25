//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface CRLTemporaryDirectory : NSObject
{
    NSString *_path;	// 8 = 0x8
    _Bool _leak;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000a179e
- (_Bool)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a128f
- (void)removeDirectory;	// IMP=0x00100000000a0fb2
- (void)leakTemporaryDirectory;	// IMP=0x00100000000a0fa8
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSString *path;
- (void)dealloc;	// IMP=0x00100000000a0d19
- (void)setAssociatedLifetimeObject:(id)arg1;	// IMP=0x00100000000a0cfa
- (id)initForWritingToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a0beb
- (id)initWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a0b44
- (id)initWithSignature:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a0b2d
- (id)initWithError:(id *)arg1;	// IMP=0x00100000000a0b0f
- (id)init;	// IMP=0x00100000000a082a

@end
