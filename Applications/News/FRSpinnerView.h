//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface FRSpinnerView : UIView
{
    _Bool _isAnimating;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    UIActivityIndicatorView *_activityIndicator;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x004000000005811c
+ (id)loadingText;	// IMP=0x00100000000580b4
+ (struct CGSize)loadingLabelSize;	// IMP=0x0010000000057e90
+ (id)loadingFont;	// IMP=0x0010000000057e18
- (void).cxx_destruct;	// IMP=0x0020000000058c41
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (unsigned long long)accessibilityTraits;	// IMP=0x0010000000058b27
- (id)accessibilityLabel;	// IMP=0x00100000000589fe
- (id)accessibilityElements;	// IMP=0x00100000000589f6
- (_Bool)isAccessibilityElement;	// IMP=0x00100000000589bd
- (void)stopAnimating;	// IMP=0x0010000000058878
- (void)startAnimating;	// IMP=0x001000000005872e
- (void)_setupViews;	// IMP=0x00100000000581f0
- (id)_init;	// IMP=0x0010000000058176
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000058164
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000058152

@end
