//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _HKDocumentQueryServerConfiguration : HKQueryServerConfiguration
{
    _Bool _includeDocumentData;	// 8 = 0x8
    NSArray *_sortDescriptors;	// 16 = 0x10
    unsigned long long _limit;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000025fb5e
- (void).cxx_destruct;	// IMP=0x000000000025fdba
@property(nonatomic) _Bool includeDocumentData; // @synthesize includeDocumentData=_includeDocumentData;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000025fc96
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000025fb66
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025fad0

@end
