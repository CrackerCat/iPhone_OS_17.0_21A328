//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface FKACrosshairPointPickerView : UIView
{
    UIView *_verticalLineView;	// 8 = 0x8
    UIView *_horizontalLineView;	// 16 = 0x10
    unsigned long long _xPrecisionLevel;	// 24 = 0x18
    unsigned long long _yPrecisionLevel;	// 32 = 0x20
    struct CGPoint _selectedPoint;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000073b4
@property(nonatomic) unsigned long long yPrecisionLevel; // @synthesize yPrecisionLevel=_yPrecisionLevel;
@property(nonatomic) unsigned long long xPrecisionLevel; // @synthesize xPrecisionLevel=_xPrecisionLevel;
@property(nonatomic) struct CGPoint selectedPoint; // @synthesize selectedPoint=_selectedPoint;
@property(retain, nonatomic) UIView *horizontalLineView; // @synthesize horizontalLineView=_horizontalLineView;
@property(retain, nonatomic) UIView *verticalLineView; // @synthesize verticalLineView=_verticalLineView;
- (id);	// IMP=0x001000000000730e
- (double)_yIncrement;	// IMP=0x00100000000072cd
- (double)_xIncrement;	// IMP=0x001000000000728c
- (void)layoutSubviews;	// IMP=0x0010000000006e8d
- (void)decreaseYPrecision;	// IMP=0x0010000000006e33
- (void)increaseYPrecision;	// IMP=0x0010000000006e01
- (void)decreaseXPrecision;	// IMP=0x0010000000006da7
- (void)increaseXPrecision;	// IMP=0x0010000000006d75
- (void)moveDown;	// IMP=0x0010000000006d12
- (void)moveUp;	// IMP=0x0010000000006caf
- (void)moveRight;	// IMP=0x0010000000006c48
- (void)moveLeft;	// IMP=0x0010000000006be1
@property(readonly, nonatomic) struct CGPoint selectedScreenPoint;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000006851

@end
