//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PSUICellularPlanListGroup : NSObject
{
}

- (id)getLogger;	// IMP=0x000000000007df52
- (void)danglingPlanPressed:(id)arg1;	// IMP=0x000000000007de88
- (id)danglingPlanSpecifierDetailText:(id)arg1;	// IMP=0x000000000007de20
- (id)planSpecifierDetailText:(id)arg1;	// IMP=0x000000000007db28
- (id)specifiers;	// IMP=0x000000000007cea0
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;	// IMP=0x000000000007cdba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
