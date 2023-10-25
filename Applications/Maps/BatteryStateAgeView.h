//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSDate, UIActivityIndicatorView, UILabel;

@interface BatteryStateAgeView : UIView
{
    long long _configuration;	// 8 = 0x8
    UILabel *_stateUpdatedLabel;	// 16 = 0x10
    UIActivityIndicatorView *_activityIndicator;	// 24 = 0x18
    _Bool _shouldShowSeparator;	// 32 = 0x20
    NSDate *_dateOfLastSync;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000b98d68
@property(retain, nonatomic) NSDate *dateOfLastSync; // @synthesize dateOfLastSync=_dateOfLastSync;
@property(nonatomic) _Bool shouldShowSeparator; // @synthesize shouldShowSeparator=_shouldShowSeparator;
- (id)viewForLastBaselineLayout;	// IMP=0x0010000000b98d32
- (id)viewForFirstBaselineLayout;	// IMP=0x0010000000b98d1d
- (void)stopAnimating;	// IMP=0x0010000000b98cbc
- (void)startAnimating;	// IMP=0x0010000000b98c5b
- (void)_updateContents;	// IMP=0x0010000000b98715
- (void)_setupStyling;	// IMP=0x0010000000b9865c
- (void)_setupConstraints;	// IMP=0x0010000000b98050
- (id)initWithConfiguration:(long long)arg1;	// IMP=0x0010000000b97e5e

@end
