//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKStrength : SKAction
{
    struct SKCStrength *_mycaction;	// 8 = 0x8
}

+ (id)strengthBy:(double)arg1 duration:(double)arg2;	// IMP=0x006000000004cfb8
+ (id)strengthTo:(double)arg1 duration:(double)arg2;	// IMP=0x006000000004cf37
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000004c842
- (id)reversedAction;	// IMP=0x000000000004d0da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004d05c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004ccc5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004c953
- (id)init;	// IMP=0x000000000004c84a

@end
