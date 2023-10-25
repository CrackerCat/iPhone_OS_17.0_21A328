//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SCNProgramSemanticInfo : NSObject
{
    NSString *_semantic;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000300133
+ (id)infoWithSemantic:(id)arg1 options:(id)arg2;	// IMP=0x00100000002fffc6
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *semantic; // @synthesize semantic=_semantic;
- (void)dealloc;	// IMP=0x000000000030013b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000030007c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000300016

@end
