//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPCalculationDatastore : NSObject
{
}

+ (void)refreshCurrencyCache;	// IMP=0x0020000000047266
@property(readonly, nonatomic) unsigned int domain;
- (id)performQuery:(id)arg1;	// IMP=0x0010000000047327
- (void)preheat;	// IMP=0x0010000000047321
- (void)deactivate;	// IMP=0x001000000004731b
- (void)activate;	// IMP=0x0010000000047315

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
