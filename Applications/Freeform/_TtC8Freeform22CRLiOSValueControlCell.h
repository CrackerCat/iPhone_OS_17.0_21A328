//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSString, UIView, _TtC8Freeform18CRLiOSValueControl;
@protocol CRLiOSValueControlDelegate;

@interface _TtC8Freeform22CRLiOSValueControlCell
{
    MISSING_TYPE *wantsFullSizeControl;	// 8 = 0x8
    MISSING_TYPE *secondRowHeightConstraint;	// 16 = 0x10
    MISSING_TYPE *assistantTitle;	// 24 = 0x18
}

+ (id)valuelessStepperWithTitle:(id)arg1 target:(id)arg2 didIncrease:(SEL)arg3 didDecrease:(SEL)arg4;	// IMP=0x002000000087c310
+ (id)newAutoAssistantWithTitle:(id)arg1 cells:(id)arg2 selectedIndex:(long long)arg3 delegate:(id)arg4;	// IMP=0x001000000098fbc0
- (void).cxx_destruct;	// IMP=0x004000000087cf30
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000087ced0
@property(nonatomic, copy) NSString *assistantTitle;
@property(nonatomic, retain) id <CRLiOSValueControlDelegate> delegate;
@property(nonatomic, readonly) NSArray *allValueControlsInCell;
@property(nonatomic, copy) NSArray *accessibilityElements;
@property(nonatomic) _Bool isAccessibilityElement;
@property(nonatomic, readonly) _Bool isUserCurrentlyInteracting;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x001000000087c9d0
@property(nonatomic, readonly) _Bool currentContentSizeCategoryWrapsToNextLine;
@property(nonatomic, retain) UIView *accessoryView;
@property(nonatomic, readonly) _TtC8Freeform18CRLiOSValueControl *control;
@property(nonatomic) _Bool wantsFullSizeControl; // @synthesize wantsFullSizeControl;
- (id)initWithTitle:(id)arg1 list:(id)arg2 currentIndex:(long long)arg3 autoText:(id)arg4 accessory:(long long)arg5 target:(id)arg6 action:(SEL)arg7;	// IMP=0x001000000087c240
- (id)initWithTitle:(id)arg1 list:(id)arg2 currentIndex:(long long)arg3 accessory:(long long)arg4 target:(id)arg5 action:(SEL)arg6;	// IMP=0x001000000087c020
- (id)initWithTitle:(id)arg1 integerValue:(long long)arg2 min:(long long)arg3 max:(long long)arg4 step:(long long)arg5 autoText:(id)arg6 customFormatter:(id)arg7 accessory:(long long)arg8 target:(id)arg9 action:(SEL)arg10;	// IMP=0x001000000087bdf0
- (id);	// IMP=0x001000000087bb50
- (id)initWithTitle:(id)arg1 integerValue:(long long)arg2 customFormatter:(id)arg3 accessory:(long long)arg4 target:(id)arg5 action:(SEL)arg6;	// IMP=0x001000000087b930
- (id)initWithTitle:(id)arg1 integerValue:(long long)arg2 modulus:(long long)arg3 step:(long long)arg4 formatter:(id)arg5 accessory:(long long)arg6 target:(id)arg7 action:(SEL)arg8;	// IMP=0x001000000087b720
- (id)initWithTitle:(id)arg1 integerValue:(long long)arg2 min:(long long)arg3 max:(long long)arg4 step:(long long)arg5 autoText:(id)arg6 formatter:(id)arg7 accessory:(long long)arg8 target:(id)arg9 action:(SEL)arg10;	// IMP=0x001000000087b4f0
- (id)initWithTitle:(id)arg1 integerValue:(long long)arg2 min:(long long)arg3 max:(long long)arg4 step:(long long)arg5 formatter:(id)arg6 accessory:(long long)arg7 target:(id)arg8 action:(SEL)arg9;	// IMP=0x001000000087b240
- (id)initWithTitle:(id)arg1 integerValue:(long long)arg2 formatter:(id)arg3 accessory:(long long)arg4 target:(id)arg5 action:(SEL)arg6;	// IMP=0x001000000087b020
- (id)initWithTitle:(id)arg1 integerValue:(long long)arg2 min:(long long)arg3 max:(long long)arg4 step:(long long)arg5 autoText:(id)arg6 accessory:(long long)arg7 target:(id)arg8 action:(SEL)arg9;	// IMP=0x001000000087ae10
- (id)initWithTitle:(id)arg1 integerValue:(long long)arg2 min:(long long)arg3 max:(long long)arg4 step:(long long)arg5 accessory:(long long)arg6 target:(id)arg7 action:(SEL)arg8;	// IMP=0x001000000087abf0
- (id)initWithTitle:(id)arg1 integerValue:(long long)arg2 accessory:(long long)arg3 target:(id)arg4 action:(SEL)arg5;	// IMP=0x001000000087aa10
- (id)initWithTitle:(id)arg1 floatValue:(double)arg2 min:(double)arg3 max:(double)arg4 step:(double)arg5 autoText:(id)arg6 customFormatter:(id)arg7 accessory:(long long)arg8 target:(id)arg9 action:(SEL)arg10;	// IMP=0x001000000087a7e0
- (id)initWithTitle:(id)arg1 floatValue:(double)arg2 min:(double)arg3 max:(double)arg4 step:(double)arg5 customFormatter:(id)arg6 accessory:(long long)arg7 target:(id)arg8 action:(SEL)arg9;	// IMP=0x001000000087a570
- (id)initWithTitle:(id)arg1 floatValue:(double)arg2 customFormatter:(id)arg3 accessory:(long long)arg4 target:(id)arg5 action:(SEL)arg6;	// IMP=0x001000000087a340
- (id)initWithTitle:(id)arg1 floatValue:(double)arg2 exponentialTransformer:(id)arg3 crlFormat:(id)arg4 locale:(id)arg5 target:(id)arg6 action:(SEL)arg7;	// IMP=0x001000000087a0f0
- (id)initWithTitle:(id)arg1 floatValue:(double)arg2 modulus:(double)arg3 step:(double)arg4 crlFormat:(id)arg5 locale:(id)arg6 accessory:(long long)arg7 target:(id)arg8 action:(SEL)arg9;	// IMP=0x0010000000879e70
- (id)initWithTitle:(id)arg1 floatValue:(double)arg2 min:(double)arg3 max:(double)arg4 step:(double)arg5 autoText:(id)arg6 crlFormat:(id)arg7 locale:(id)arg8 accessory:(long long)arg9 target:(id)arg10 action:(SEL)arg11;	// IMP=0x0010000000879bc0
- (id)initWithTitle:(id)arg1 floatValue:(double)arg2 min:(double)arg3 max:(double)arg4 step:(double)arg5 crlFormat:(id)arg6 locale:(id)arg7 accessory:(long long)arg8 target:(id)arg9 action:(SEL)arg10;	// IMP=0x0010000000879910
- (id)initWithTitle:(id)arg1 floatValue:(double)arg2 crlFormat:(id)arg3 locale:(id)arg4 accessory:(long long)arg5 target:(id)arg6 action:(SEL)arg7;	// IMP=0x0010000000879690
- (id)initWithTitle:(id)arg1 floatValue:(double)arg2 exponentialTransformer:(id)arg3 formatter:(id)arg4 target:(id)arg5 action:(SEL)arg6;	// IMP=0x0010000000879440
- (id)initWithTitle:(id)arg1 floatValue:(double)arg2 modulus:(double)arg3 step:(double)arg4 formatter:(id)arg5 accessory:(long long)arg6 target:(id)arg7 action:(SEL)arg8;	// IMP=0x00100000008791f0
- (id)initWithTitle:(id)arg1 floatValue:(double)arg2 min:(double)arg3 max:(double)arg4 step:(double)arg5 autoText:(id)arg6 formatter:(id)arg7 accessory:(long long)arg8 target:(id)arg9 action:(SEL)arg10;	// IMP=0x0010000000878f90
- (id)initWithTitle:(id)arg1 floatValue:(double)arg2 min:(double)arg3 max:(double)arg4 step:(double)arg5 formatter:(id)arg6 accessory:(long long)arg7 target:(id)arg8 action:(SEL)arg9;	// IMP=0x0010000000878d20
- (id)initWithTitle:(id)arg1 floatValue:(double)arg2 formatter:(id)arg3 accessory:(long long)arg4 target:(id)arg5 action:(SEL)arg6;	// IMP=0x0010000000878af0
- (id)initWithTitle:(id)arg1 floatValue:(double)arg2 min:(double)arg3 max:(double)arg4 step:(double)arg5 autoText:(id)arg6 accessory:(long long)arg7 target:(id)arg8 action:(SEL)arg9;	// IMP=0x00100000008788b0
- (id)initWithTitle:(id)arg1 floatValue:(double)arg2 min:(double)arg3 max:(double)arg4 step:(double)arg5 accessory:(long long)arg6 target:(id)arg7 action:(SEL)arg8;	// IMP=0x0010000000878670
- (id)initWithTitle:(id)arg1 floatValue:(double)arg2 accessory:(long long)arg3 target:(id)arg4 action:(SEL)arg5;	// IMP=0x0010000000878450
- (id)initWithTitle:(id)arg1 seconds:(double)arg2 min:(double)arg3 max:(double)arg4 accessory:(long long)arg5 target:(id)arg6 action:(SEL)arg7;	// IMP=0x0010000000878240
- (id)initWithTitle:(id)arg1 seconds:(double)arg2 accessory:(long long)arg3 target:(id)arg4 action:(SEL)arg5;	// IMP=0x00100000008780c0
- (id)initWithTitle:(id)arg1 percent:(double)arg2 accessory:(long long)arg3 target:(id)arg4 action:(SEL)arg5;	// IMP=0x0010000000877f50
- (id)initWithTitle:(id)arg1 degrees:(double)arg2 accessory:(long long)arg3 target:(id)arg4 action:(SEL)arg5;	// IMP=0x0010000000877e90
- (id)initWithTitle:(id)arg1 points:(double)arg2 min:(double)arg3 max:(double)arg4 accessory:(long long)arg5 target:(id)arg6 action:(SEL)arg7;	// IMP=0x0010000000877db0
- (id)initWithTitle:(id)arg1 rulerLength:(double)arg2 min:(double)arg3 max:(double)arg4 accessory:(long long)arg5 target:(id)arg6 action:(SEL)arg7;	// IMP=0x0010000000877d00
- (id)initWithTitle:(id)arg1 rulerLength:(double)arg2 accessory:(long long)arg3 target:(id)arg4 action:(SEL)arg5;	// IMP=0x0010000000877b30
- (id)initWithTitle:(id)arg1 control:(id)arg2 target:(id)arg3 action:(SEL)arg4;	// IMP=0x00100000008778e0
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000877730
- (id)initWithTitle:(id)arg1 control:(id)arg2;	// IMP=0x00100000008776e0
- (id)newAutoAssistantForControl:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000098fdf0
- (id)newAutoAssistantWithDelegate:(id)arg1;	// IMP=0x001000000098fa90

@end
