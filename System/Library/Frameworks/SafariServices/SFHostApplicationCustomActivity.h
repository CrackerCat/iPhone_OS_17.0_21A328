//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_SFActivity.h"

@class SFCustomActivityProxy;

__attribute__((visibility("hidden")))
@interface SFHostApplicationCustomActivity : _SFActivity
{
    SFCustomActivityProxy *_activityProxy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007dc22
@property(readonly, nonatomic) SFCustomActivityProxy *activityProxy; // @synthesize activityProxy=_activityProxy;
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x000000000007dc09
- (id)activityImage;	// IMP=0x000000000007dbec
- (id)activityTitle;	// IMP=0x000000000007dbcf
- (id)activityType;	// IMP=0x000000000007dbb2
- (id)initWithActivityProxy:(id)arg1;	// IMP=0x000000000007db31

@end
