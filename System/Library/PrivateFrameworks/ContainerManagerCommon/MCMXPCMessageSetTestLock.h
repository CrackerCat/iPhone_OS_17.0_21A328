//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MCMXPCMessageSetTestLock
{
    _Bool _enable;	// 8 = 0x8
    unsigned long long _requestedLocks;	// 16 = 0x10
}

@property(readonly, nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(readonly, nonatomic) unsigned long long requestedLocks; // @synthesize requestedLocks=_requestedLocks;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000000000b6cc6

@end
