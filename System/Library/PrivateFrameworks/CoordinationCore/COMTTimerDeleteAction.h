//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTTimer;

__attribute__((visibility("hidden")))
@interface COMTTimerDeleteAction
{
    MTTimer *_timer;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000004435a
- (void).cxx_destruct;	// IMP=0x000000000004437e
@property(readonly, copy, nonatomic) MTTimer *timer; // @synthesize timer=_timer;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000044362
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000442bf
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000441df
- (id)initWithTimer:(id)arg1;	// IMP=0x0000000000044165

@end
