//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC7NewsUI233ChannelFeedResponsivenessTestCase : NSObject
{
    MISSING_TYPE *testName;	// 8 = 0x8
    MISSING_TYPE *timeoutInSeconds;	// 24 = 0x18
    MISSING_TYPE *aggregate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000b227d0
- (id)init;	// IMP=0x0000000000b226d0
- (void)runTestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b22640
@property(nonatomic, readonly) unsigned long long aggregate; // @synthesize aggregate;
@property(nonatomic, readonly) double timeoutInSeconds; // @synthesize timeoutInSeconds;
@property(nonatomic, readonly) NSString *testName;

@end
