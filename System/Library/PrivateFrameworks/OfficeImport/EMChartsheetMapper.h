//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDChartSheet;

__attribute__((visibility("hidden")))
@interface EMChartsheetMapper
{
    EDChartSheet *mChartSheet;	// 40 = 0x28
    struct CGRect mBox;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000046a245
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x000000000018561a
- (int)preprocessHeightWithState:(id)arg1;	// IMP=0x00000000001ecaca
- (int)preprocessWidthWithState:(id)arg1;	// IMP=0x00000000001eca92
- (int)width;	// IMP=0x000000000018abf3
- (id)initWithChartSheet:(id)arg1 parent:(id)arg2;	// IMP=0x00000000001854e0

@end
