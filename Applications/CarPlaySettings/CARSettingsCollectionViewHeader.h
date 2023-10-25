//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface CARSettingsCollectionViewHeader : UICollectionReusableView
{
    NSString *_title;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    NSLayoutConstraint *_leadingConstraint;	// 24 = 0x18
    struct UIEdgeInsets _sectionInsets;	// 32 = 0x20
}

+ (id)reuseIdentifier;	// IMP=0x004000000001119a
- (void).cxx_destruct;	// IMP=0x002000000001164a
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct UIEdgeInsets sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000111a7

@end
