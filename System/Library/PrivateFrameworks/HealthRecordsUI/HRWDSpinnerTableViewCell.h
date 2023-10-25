//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSString, UIActivityIndicatorView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface HRWDSpinnerTableViewCell : UITableViewCell
{
    UIView *_contentContainerView;	// 8 = 0x8
    UIActivityIndicatorView *_spinner;	// 16 = 0x10
    UILabel *_waitingReasonLabel;	// 24 = 0x18
}

+ (id)defaultReuseIdentifier;	// IMP=0x00400000000543b2
- (void).cxx_destruct;	// IMP=0x0000000000055570
@property(retain) UILabel *waitingReasonLabel; // @synthesize waitingReasonLabel=_waitingReasonLabel;
@property(retain) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
- (void)prepareForReuse;	// IMP=0x0000000000055491
@property(retain, nonatomic) NSString *waitingReason;
- (void)setupConstraints;	// IMP=0x00000000000545b9
- (void)setupSubviews;	// IMP=0x000000000005442f
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000543bf

@end
