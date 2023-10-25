//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol RBSInvalidatable;

__attribute__((visibility("hidden")))
@interface RBStateCaptureItem : NSObject
{
    id <RBSInvalidatable> _invalidatable;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005e44f
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)dealloc;	// IMP=0x000000000005e3ef
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000005e2c6

@end
