//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "STCoreOrganizationSettings.h"

@class NSString, STLocalOrganization;

__attribute__((visibility("hidden")))
@interface STLocalOrganizationSettings : STCoreOrganizationSettings
{
}

- (void)didChangeValueForKey:(id)arg1;	// IMP=0x0000000000037772
- (id)dictionaryRepresentation;	// IMP=0x0000000000037645
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000037128

// Remaining properties
@property(retain, nonatomic) STLocalOrganization *organization; // @dynamic organization;
@property(copy, nonatomic) NSString *recoveryAltDSID; // @dynamic recoveryAltDSID;

@end
