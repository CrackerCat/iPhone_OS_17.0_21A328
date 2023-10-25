//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class STIntroDowntimeTableViewController, STIntroductionViewModel;

__attribute__((visibility("hidden")))
@interface STIntroDowntimeViewController
{
    STIntroductionViewModel *_model;	// 8 = 0x8
    CDUnknownBlockType _continueHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000073fde
@property(readonly, copy) CDUnknownBlockType continueHandler; // @synthesize continueHandler=_continueHandler;
@property(readonly) STIntroductionViewModel *model; // @synthesize model=_model;
- (void)_notNow:(id)arg1;	// IMP=0x0000000000073f7f
- (void)_setDowntime:(id)arg1;	// IMP=0x0000000000073eb3
- (void)loadView;	// IMP=0x0000000000073c7d
@property(retain, nonatomic) STIntroDowntimeTableViewController *tableViewController;
- (id)initWithIntroductionModel:(id)arg1 continueHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007396c

@end
