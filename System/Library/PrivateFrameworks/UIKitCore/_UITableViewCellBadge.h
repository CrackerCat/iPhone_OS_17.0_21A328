//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIColor, UIFont, UILabel;

__attribute__((visibility("hidden")))
@interface _UITableViewCellBadge : UIView
{
    _Bool _selected;	// 128 = 0x80
    UILabel *_badgeTextLabel;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000001246f7f
@property(retain, nonatomic) UILabel *badgeTextLabel; // @synthesize badgeTextLabel=_badgeTextLabel;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (_Bool)isHighlighted;	// IMP=0x0000000001246ef6
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000001246eac
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *color;
@property(retain, nonatomic) UIFont *font;
- (void)layoutSubviews;	// IMP=0x0000000001246b15
- (void)_sizeToFit;	// IMP=0x0000000001246a1d
- (double)minHeight;	// IMP=0x0000000001246a0f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000012469a1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000012468ec

@end
