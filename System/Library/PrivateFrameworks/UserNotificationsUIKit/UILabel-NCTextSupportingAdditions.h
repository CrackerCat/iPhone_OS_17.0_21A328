//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@class NSString, UIColor, UIFont;

@interface UILabel (NCTextSupportingAdditions)
- (double)unui_drawingHeightWithNumberOfLines:(unsigned long long)arg1;	// IMP=0x00200000000ae477
- (double)unui_measuringHeightWithNumberOfLines:(unsigned long long)arg1;	// IMP=0x00200000000ae3f3
- (unsigned long long)unui_numberOfLinesInFrame:(struct CGRect)arg1 maximum:(unsigned long long)arg2 drawingContext:(inout id)arg3;	// IMP=0x00200000000ae341
@property(nonatomic, setter=nc_setNumberOfLines:) unsigned long long nc_numberOfLines;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIFont *font;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=nc_isMenuEnabled, setter=nc_setMenuEnabled:) _Bool nc_menuEnabled;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *textColor;
@end
