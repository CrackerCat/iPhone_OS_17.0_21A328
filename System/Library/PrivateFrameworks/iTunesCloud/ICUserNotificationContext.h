//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ICUserNotificationContext : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    struct __CFRunLoopSource *_runLoopSourceRef;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001619c3
@property(nonatomic) struct __CFRunLoopSource *runLoopSourceRef; // @synthesize runLoopSourceRef=_runLoopSourceRef;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)clearRunLoop;	// IMP=0x0000000000161970

@end
