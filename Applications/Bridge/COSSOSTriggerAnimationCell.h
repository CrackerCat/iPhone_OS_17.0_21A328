//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class UIView;

@interface COSSOSTriggerAnimationCell : PSTableCell
{
    UIView *_triggerImageView;	// 120 = 0x78
}

+ (double)preferredCellHeight;	// IMP=0x0020000000003acc
- (void).cxx_destruct;	// IMP=0x0020000000004135
@property(retain, nonatomic) UIView *triggerImageView; // @synthesize triggerImageView=_triggerImageView;
- (void)setupConstraints;	// IMP=0x0010000000003d9c
- (void)loadTriggerImageView;	// IMP=0x0010000000003c11
- (_Bool)isLayoutLeftToRight;	// IMP=0x0010000000003bc2
- (_Bool)isCrownOrientationOnRightSide;	// IMP=0x0010000000003ada
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x0010000000003a80

@end
