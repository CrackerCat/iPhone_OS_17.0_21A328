//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class MISSING_TYPE;

@interface _TtC6Health30CloudSyncWelcomeViewController : OBWelcomeController
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *cloudSyncControl;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00400000000659e0
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x0010000000065980
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x0010000000065950
- (void)didTapDisableCloudSync:(id)arg1;	// IMP=0x00100000000658c0
- (void)didTapEnableCloudSync:(id)arg1;	// IMP=0x0010000000065590
- (void)viewDidLoad;	// IMP=0x0010000000065460

@end
