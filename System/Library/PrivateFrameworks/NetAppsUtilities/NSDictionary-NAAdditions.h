//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (NAAdditions)
- (void)na_each:(CDUnknownBlockType)arg1;	// IMP=0x006000000000244a
- (_Bool)na_allSatisfy:(CDUnknownBlockType)arg1;	// IMP=0x0060000000002332
- (_Bool)na_any:(CDUnknownBlockType)arg1;	// IMP=0x006000000000221a
- (id)na_dictionaryByMappingValues:(CDUnknownBlockType)arg1;	// IMP=0x0060000000002094
- (id)na_filter:(CDUnknownBlockType)arg1;	// IMP=0x0060000000001efd
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(CDUnknownBlockType)arg2;	// IMP=0x0060000000001d24
- (id)na_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x0060000000001beb
- (id)na_map:(CDUnknownBlockType)arg1;	// IMP=0x0060000000001a82
- (id)na_firstKeyPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00600000000017e7
@end
