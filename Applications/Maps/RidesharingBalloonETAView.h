//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSNumber, UIActivityIndicatorView, UILabel;

@interface RidesharingBalloonETAView : UIView
{
    UIActivityIndicatorView *_spinner;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    UILabel *_subLabel;	// 24 = 0x18
    NSNumber *_minutes;	// 32 = 0x20
    unsigned long long _balloonState;	// 40 = 0x28
}

+ (id)balloonStrokeColor;	// IMP=0x00400000008f391a
+ (id)balloonFillColor;	// IMP=0x00100000008f3901
- (void).cxx_destruct;	// IMP=0x00200000008f3977
@property(nonatomic) unsigned long long balloonState; // @synthesize balloonState=_balloonState;
@property(copy, nonatomic) NSNumber *minutes; // @synthesize minutes=_minutes;
- (id)_minutesText;	// IMP=0x00100000008f3888
- (void)crossfadeView:(id)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x00100000008f3859
- (void)setScheduledPickupWindowStart:(id)arg1;	// IMP=0x00100000008f3310
- (void)setMinutes:(id)arg1 withState:(unsigned long long)arg2;	// IMP=0x00100000008f2e31
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000008f27c4

@end
