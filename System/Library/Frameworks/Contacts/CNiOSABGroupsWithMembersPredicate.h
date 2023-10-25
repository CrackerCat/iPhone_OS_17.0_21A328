//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABGroupsWithMembersPredicate : CNPredicate
{
    _Bool _includeAllParentGroups;	// 24 = 0x18
    unsigned int _recordType;	// 28 = 0x1c
    NSArray *_recordIdentifiers;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000056780
- (void).cxx_destruct;	// IMP=0x0000000000056a68
@property(readonly, nonatomic) _Bool includeAllParentGroups; // @synthesize includeAllParentGroups=_includeAllParentGroups;
@property(readonly, nonatomic) unsigned int recordType; // @synthesize recordType=_recordType;
@property(readonly, copy, nonatomic) NSArray *recordIdentifiers; // @synthesize recordIdentifiers=_recordIdentifiers;
- (struct __CFArray *)cn_copyGroupsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x00000000000569b7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000568f7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000056788
- (id)initWithContact:(id)arg1 includeAllParentGroups:(_Bool)arg2;	// IMP=0x00000000000565fb
- (id)initWithGroup:(id)arg1 includeAllParentGroups:(_Bool)arg2;	// IMP=0x00000000000564c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
