//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPredicate;

@interface RecentsDataFilter : NSObject
{
    unsigned int _searchMode;	// 8 = 0x8
    NSPredicate *_filterPredicate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002985b3
@property(readonly, nonatomic) unsigned int searchMode; // @synthesize searchMode=_searchMode;
@property(readonly, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
- (id)filteredRecents:(id)arg1 excludingDuplicatesOfEntries:(id)arg2;	// IMP=0x0010000000296edc
- (id)init;	// IMP=0x0010000000296ec5
- (id)initWithFilterPredicate:(id)arg1;	// IMP=0x0010000000296eab
- (id)initWithSearchMode:(unsigned int)arg1;	// IMP=0x0010000000296e97
- (id)initWithSearchMode:(unsigned int)arg1 filterPredicate:(id)arg2;	// IMP=0x0010000000296e20

@end
