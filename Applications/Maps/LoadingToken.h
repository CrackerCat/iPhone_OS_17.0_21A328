//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface LoadingToken : NSObject
{
    CDUnknownBlockType _invalidate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000a2afb0
- (void)end;	// IMP=0x0010000000a2af7f
- (void)dealloc;	// IMP=0x0010000000a2af41
- (id)initWithInvalidationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000a2aece

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
