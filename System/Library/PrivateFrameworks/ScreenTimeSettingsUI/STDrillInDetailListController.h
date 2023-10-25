//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class STAllowanceProgressGroupSpecifierProvider, STCategoryDetailsGroupSpecifierProvider, STDrillInItemInfoGroupSpecifierProvider, STDrillInUsageGroupSpecifierProvider, STUsageItem;

__attribute__((visibility("hidden")))
@interface STDrillInDetailListController
{
    STUsageItem *_usageItem;	// 192 = 0xc0
    STDrillInUsageGroupSpecifierProvider *_screenTimeGroupSpecifierProvider;	// 200 = 0xc8
    STDrillInItemInfoGroupSpecifierProvider *_drillInItemInfoGroupSpecifierProvider;	// 208 = 0xd0
    STCategoryDetailsGroupSpecifierProvider *_categoryDetailsGroupSpecifierProvider;	// 216 = 0xd8
    STAllowanceProgressGroupSpecifierProvider *_allowanceProgressGroupSpecifierProvider;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x000000000005a298
@property(readonly, nonatomic) STAllowanceProgressGroupSpecifierProvider *allowanceProgressGroupSpecifierProvider; // @synthesize allowanceProgressGroupSpecifierProvider=_allowanceProgressGroupSpecifierProvider;
@property(readonly, nonatomic) STCategoryDetailsGroupSpecifierProvider *categoryDetailsGroupSpecifierProvider; // @synthesize categoryDetailsGroupSpecifierProvider=_categoryDetailsGroupSpecifierProvider;
@property(readonly, nonatomic) STDrillInItemInfoGroupSpecifierProvider *drillInItemInfoGroupSpecifierProvider; // @synthesize drillInItemInfoGroupSpecifierProvider=_drillInItemInfoGroupSpecifierProvider;
@property(readonly, nonatomic) STDrillInUsageGroupSpecifierProvider *screenTimeGroupSpecifierProvider; // @synthesize screenTimeGroupSpecifierProvider=_screenTimeGroupSpecifierProvider;
@property(readonly, nonatomic) STUsageItem *usageItem; // @synthesize usageItem=_usageItem;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000000005a079
- (void)_didFetchAppInfo:(id)arg1;	// IMP=0x000000000005a00b
- (void)viewDidLoad;	// IMP=0x0000000000059e80
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x0000000000059e38
- (id)initWithUsageItem:(id)arg1 coordinator:(id)arg2;	// IMP=0x0000000000059aa0

@end
