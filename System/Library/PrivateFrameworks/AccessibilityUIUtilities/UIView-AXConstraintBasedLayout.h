//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (AXConstraintBasedLayout)
- (void)ax_setContentHuggingAndCompressionResistance:(CDStruct_818bb265)arg1;	// IMP=0x00600000000179c7
- (id)ax_pinConstraintsInAllDimensionsToView:(id)arg1;	// IMP=0x0060000000017867
- (id)ax_firstCommonAncestorWithView:(id)arg1;	// IMP=0x00600000000176fb
- (unsigned long long)_ax_depth;	// IMP=0x0060000000017687
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6 priority:(float)arg7;	// IMP=0x0060000000017576
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6;	// IMP=0x0060000000017559
- (void)ax_constrainLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6 priority:(float)arg7;	// IMP=0x006000000001753e
- (void)ax_constrainLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6;	// IMP=0x0060000000017523
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;	// IMP=0x00600000000174f8
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x00600000000174d0
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;	// IMP=0x00600000000174a2
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x0060000000017477
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2;	// IMP=0x0060000000017462
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2 priority:(float)arg3;	// IMP=0x0060000000017434
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2;	// IMP=0x0060000000017409
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;	// IMP=0x00600000000173ee
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x00600000000173d3
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;	// IMP=0x00600000000173b8
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x006000000001739d
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2;	// IMP=0x0060000000017382
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2 priority:(float)arg3;	// IMP=0x0060000000017367
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2;	// IMP=0x006000000001734c
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;	// IMP=0x006000000001731f
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x00600000000172f5
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;	// IMP=0x00600000000172c5
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x0060000000017298
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2;	// IMP=0x0060000000017283
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2 priority:(float)arg3;	// IMP=0x0060000000017253
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2;	// IMP=0x0060000000017226
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;	// IMP=0x006000000001720b
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x00600000000171f0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;	// IMP=0x00600000000171d5
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x00600000000171ba
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2;	// IMP=0x006000000001719f
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2 priority:(float)arg3;	// IMP=0x0060000000017184
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2;	// IMP=0x0060000000017169
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;	// IMP=0x0060000000017141
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x006000000001711c
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3;	// IMP=0x0060000000017107
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;	// IMP=0x00600000000170dc
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x00600000000170c4
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 priority:(float)arg3;	// IMP=0x00600000000170ac
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2;	// IMP=0x0060000000017097
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2 priority:(float)arg3;	// IMP=0x006000000001706c
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2;	// IMP=0x0060000000017044
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;	// IMP=0x0060000000017029
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x006000000001700e
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3;	// IMP=0x0060000000016ff3
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;	// IMP=0x0060000000016fd8
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x0060000000016fbd
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 priority:(float)arg3;	// IMP=0x0060000000016fa2
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2;	// IMP=0x0060000000016f87
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2 priority:(float)arg3;	// IMP=0x0060000000016f6c
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2;	// IMP=0x0060000000016f51
@end
