//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMHomeManagerDelegateAdapter : NSObject
{
    CDUnknownBlockType _didUpdateHomes;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001aca3
@property(copy) CDUnknownBlockType didUpdateHomes; // @synthesize didUpdateHomes=_didUpdateHomes;
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x000000000001ac00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
