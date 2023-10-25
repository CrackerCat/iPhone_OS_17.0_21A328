//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImage;

__attribute__((visibility("hidden")))
@interface MCLRatingsView : UIView
{
    double _imageaspect;	// 8 = 0x8
    NSLayoutConstraint *_widthConstraint;	// 16 = 0x10
    _Bool _actionVariant;	// 24 = 0x18
    double _spacing;	// 32 = 0x20
    double _value;	// 40 = 0x28
    UIImage *_emptyImage;	// 48 = 0x30
    UIImage *_fullImage;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000024c50
@property(nonatomic) _Bool actionVariant; // @synthesize actionVariant=_actionVariant;
@property(retain, nonatomic) UIImage *fullImage; // @synthesize fullImage=_fullImage;
@property(retain, nonatomic) UIImage *emptyImage; // @synthesize emptyImage=_emptyImage;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000024870
- (void)updateConstraints;	// IMP=0x0000000000024760
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000024340

@end
