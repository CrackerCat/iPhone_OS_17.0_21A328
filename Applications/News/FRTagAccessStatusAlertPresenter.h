//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TSExplicitContentRestrictionAlertPresenter;

@interface FRTagAccessStatusAlertPresenter : NSObject
{
    id <TSExplicitContentRestrictionAlertPresenter> _explicitContentRestrictionAlertPresenter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000006217c
@property(readonly, nonatomic) id <TSExplicitContentRestrictionAlertPresenter> explicitContentRestrictionAlertPresenter; // @synthesize explicitContentRestrictionAlertPresenter=_explicitContentRestrictionAlertPresenter;
- (void)presentAlertForTagAccessStatus:(unsigned long long)arg1 withPresentingViewController:(id)arg2;	// IMP=0x0010000000061bb9
- (id)initWithExplicitContentRestrictionAlertPresenter:(id)arg1;	// IMP=0x0010000000061b2d
- (id)init;	// IMP=0x00100000000619e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
