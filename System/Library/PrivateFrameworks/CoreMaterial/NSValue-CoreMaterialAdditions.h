//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@class NSString;

@interface NSValue (CoreMaterialAdditions)
+ (id)mt_identityValueForMaterialSettingsProperty:(id)arg1;	// IMP=0x001000000000d960
+ (id)mt_identityValueForFilter:(id)arg1;	// IMP=0x001000000000d86c
- (_Bool)mt_isIdentityValueForMaterialSettingsProperty:(id)arg1;	// IMP=0x001000000000dba5
- (_Bool)mt_isIdentityValueForFilter:(id)arg1;	// IMP=0x001000000000db28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
