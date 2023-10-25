//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

@interface NEKResultsPipe
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_completions;	// 16 = 0x10
    _Bool _isTruncated;	// 24 = 0x18
    _Bool _isEffectivelyEmpty;	// 25 = 0x19
    _Bool _isDeferrable;	// 26 = 0x1a
}

- (void).cxx_destruct;	// IMP=0x002000000006af35
@property(readonly, nonatomic) _Bool isDeferrable; // @synthesize isDeferrable=_isDeferrable;
- (void)markAsDeferrable;	// IMP=0x001000000006aef2
- (void)markAsTruncated;	// IMP=0x001000000006aebf
@property(readonly, nonatomic) _Bool isTruncated;
- (void)markAsNotEffectivelyEmpty;	// IMP=0x001000000006ae57
@property(readonly, nonatomic) _Bool isEffectivelyEmpty;
@property(readonly, nonatomic) CDUnknownBlockType completion;
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006abdd
- (void)sealCompletions;	// IMP=0x001000000006ab9c
- (id)initWithFIFOLength:(long long)arg1 name:(id)arg2;	// IMP=0x001000000006ab16

@end
