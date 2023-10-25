//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileAccessNode, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface NSFileReactorProxy : NSObject
{
    NSXPCConnection *_client;	// 8 = 0x8
    id _reactorID;	// 16 = 0x10
    NSFileAccessNode *_itemLocation;	// 24 = 0x18
    unsigned int _effectiveUserIdentifier;	// 32 = 0x20
}

+ (void)_enumerateParentDirectoriesStartingAtURL:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00600000007f0da4
- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f0e6a
- (id)_clientProxy;	// IMP=0x00000000007f0e62
- (_Bool)allowedForURL:(id)arg1;	// IMP=0x00000000007f0d9c
- (id)description;	// IMP=0x00000000007f0d83
- (id)descriptionWithIndenting:(id)arg1;	// IMP=0x00000000007f0c13
- (void)invalidate;	// IMP=0x00000000007f0c0d
- (void)forwardUsingProxy:(id)arg1;	// IMP=0x00000000007f0c07
- (id)itemLocation;	// IMP=0x00000000007f0bf0
- (void)setItemLocation:(id)arg1;	// IMP=0x00000000007f0bea
@property unsigned int effectiveUserIdentifier;
- (id)reactorID;	// IMP=0x00000000007f0bc1
- (id)client;	// IMP=0x00000000007f0baa
- (void)dealloc;	// IMP=0x00000000007f0b3d
- (id)initWithClient:(id)arg1 reactorID:(id)arg2;	// IMP=0x00000000007f0ab1

@end
