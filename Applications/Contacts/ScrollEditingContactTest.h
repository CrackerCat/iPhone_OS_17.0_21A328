//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNTestNavigationControllerDelegate, NSString;

@interface ScrollEditingContactTest
{
    CNTestNavigationControllerDelegate *_navControllerDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000407b
@property(retain, nonatomic) CNTestNavigationControllerDelegate *navControllerDelegate; // @synthesize navControllerDelegate=_navControllerDelegate;
- (void)editAndScrollContactViewController:(id)arg1;	// IMP=0x0010000000003ef7
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000003ee2
- (void)didShow:(id)arg1;	// IMP=0x0010000000003de0
- (void)resetDelegate;	// IMP=0x0010000000003cdb
- (void)prepareForNextTest;	// IMP=0x0010000000003c9d
- (_Bool)prepareForTestWithOptions:(id)arg1;	// IMP=0x001000000000377b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
