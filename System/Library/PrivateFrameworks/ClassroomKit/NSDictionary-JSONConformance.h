//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (JSONConformance)
- (id)crk_JSONRepresentationWithPrettyPrinting:(_Bool)arg1 sortKeys:(_Bool)arg2;	// IMP=0x0020000000018d72
- (id)crk_dictionaryByAddingEntriesFromDictionary:(id)arg1;	// IMP=0x0020000000063929
@property(readonly, nonatomic) id crk_keyValueObservingNewObject;
@property(readonly, nonatomic) id crk_keyValueObservingOldObject;
- (id)crk_dictionaryByFilteringToKeys:(id)arg1;	// IMP=0x0020000000063cc7
- (id)crk_mapUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0020000000063b37
- (id)crk_mapToDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00200000000639a9
@end
