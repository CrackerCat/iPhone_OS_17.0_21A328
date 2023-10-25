//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView, UILabel;

@interface PKPrintStatusTableViewCell : UITableViewCell
{
    UIActivityIndicatorView *_activityIndicator;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_hostLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000002a83
@property(retain, nonatomic) UILabel *hostLabel; // @synthesize hostLabel=_hostLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;	// IMP=0x001000000000234f
- (struct UIEdgeInsets)layoutMargins;	// IMP=0x00100000000022b9
@property(nonatomic) _Bool showActive;
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x0010000000001fb4

@end
