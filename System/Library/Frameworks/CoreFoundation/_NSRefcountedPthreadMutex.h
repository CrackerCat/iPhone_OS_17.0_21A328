//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSRefcountedPthreadMutex : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } lock;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x000000000000d632
- (id)init;	// IMP=0x000000000000d59b

@end
