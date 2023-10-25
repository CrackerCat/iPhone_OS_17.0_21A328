//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSExtension, NSString, NSUUID, TKHostTokenDriverCache, TKTokenDriverHostContext;
@protocol OS_os_transaction;

@interface TKHostTokenDriver : NSObject
{
    TKHostTokenDriverCache *_cache;	// 8 = 0x8
    NSObject<OS_os_transaction> *_alive;	// 16 = 0x10
    _Bool _invalidated;	// 24 = 0x18
    NSExtension *_extension;	// 32 = 0x20
    NSUUID *_requestIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001348a
@property(retain, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, nonatomic) __weak TKHostTokenDriverCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void)dealloc;	// IMP=0x0010000000013343
- (void)releaseTokenWithTokenID:(id)arg1;	// IMP=0x001000000001320b
- (_Bool)configureWithError:(id *)arg1;	// IMP=0x0010000000013040
- (id)acquireTokenWithSlot:(id)arg1 AID:(id)arg2 tokenID:(id *)arg3 error:(id *)arg4;	// IMP=0x0010000000012abf
- (id)acquireTokenWithTokenID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000012582
@property(readonly, nonatomic) TKTokenDriverHostContext *context;
- (id)contextWithError:(id *)arg1;	// IMP=0x001000000001160b
@property(readonly, nonatomic) _Bool valid;
- (void)invalidate;	// IMP=0x001000000001153e
- (void)keepAlive:(_Bool)arg1;	// IMP=0x00100000000113fc
@property(readonly, nonatomic) NSString *classID;
- (id)description;	// IMP=0x00100000000111b1
- (id)initWithExtension:(id)arg1 cache:(id)arg2;	// IMP=0x0010000000011117

@end
