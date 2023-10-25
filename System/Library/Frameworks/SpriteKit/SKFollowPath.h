//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKFollowPath : SKAction
{
    struct SKCFollowPath *_mycaction;	// 8 = 0x8
    struct CGPath *_cgPath;	// 16 = 0x10
}

+ (id)followPath:(struct CGPath *)arg1 asOffset:(_Bool)arg2 orientToPath:(_Bool)arg3 speed:(double)arg4;	// IMP=0x0060000000066c3f
+ (id)followPath:(struct CGPath *)arg1 speed:(double)arg2;	// IMP=0x0060000000066b6d
+ (id)followPath:(struct CGPath *)arg1 asOffset:(_Bool)arg2 orientToPath:(_Bool)arg3 duration:(double)arg4;	// IMP=0x0060000000066ab9
+ (id)followPath:(struct CGPath *)arg1 duration:(double)arg2;	// IMP=0x0060000000066a10
+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000066440
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000670ed
- (id)reversedAction;	// IMP=0x0000000000066dab
- (void)dealloc;	// IMP=0x0000000000066d1f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006668f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000066529
- (id)init;	// IMP=0x0000000000066448

@end
