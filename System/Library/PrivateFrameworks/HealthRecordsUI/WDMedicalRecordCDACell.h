//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class HKCDADocumentSample, HKSeparatorLineView, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordCDACell : UITableViewCell
{
    HKCDADocumentSample *_cdaSample;	// 8 = 0x8
    UIView *_background;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_dateLabel;	// 32 = 0x20
    UILabel *_patientTitle;	// 40 = 0x28
    UILabel *_patientLabel;	// 48 = 0x30
    UILabel *_institutionTitle;	// 56 = 0x38
    UILabel *_institutionLabel;	// 64 = 0x40
    HKSeparatorLineView *_separator;	// 72 = 0x48
    UIImageView *_discloseView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000041fdd
@property(retain, nonatomic) UIImageView *discloseView; // @synthesize discloseView=_discloseView;
@property(retain, nonatomic) HKSeparatorLineView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *institutionLabel; // @synthesize institutionLabel=_institutionLabel;
@property(retain, nonatomic) UILabel *institutionTitle; // @synthesize institutionTitle=_institutionTitle;
@property(retain, nonatomic) UILabel *patientLabel; // @synthesize patientLabel=_patientLabel;
@property(retain, nonatomic) UILabel *patientTitle; // @synthesize patientTitle=_patientTitle;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *background; // @synthesize background=_background;
@property(retain, nonatomic) HKCDADocumentSample *cdaSample; // @synthesize cdaSample=_cdaSample;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000041d42
- (void)_adjustFont;	// IMP=0x00000000000418c5
- (void)_setupSubviews;	// IMP=0x00000000000404a6
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000040373
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000040274

@end
