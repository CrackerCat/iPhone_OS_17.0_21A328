//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSString;

@interface CRLCADisplayLinkPlatformAdapter : NSObject
{
    CADisplayLink *_displayLink;	// 8 = 0x8
    id _target;	// 16 = 0x10
    SEL _action;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000002056e0
- (void)p_displayLinkDidTrigger:(id)arg1;	// IMP=0x001000000020564c
@property(nonatomic) _Bool paused;
- (void)invalidate;	// IMP=0x0010000000205072
- (void)dealloc;	// IMP=0x0010000000204e77
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0010000000204d6e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
