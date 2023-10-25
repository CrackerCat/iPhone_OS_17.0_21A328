//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVItemBuilder, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface KMMapper_HMHome : NSObject
{
    KVItemBuilder *_builder;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
}

+ (Class)externalObjectClass;	// IMP=0x0010000000014baf
- (void).cxx_destruct;	// IMP=0x0000000000014b87
- (_Bool)_addItemWithItemId:(id)arg1 assistantHomeKitId:(id)arg2 fieldType:(long long)arg3 name:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000014961
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000137f6
- (long long)targetItemType;	// IMP=0x00000000000137eb
- (id)init;	// IMP=0x0000000000013795

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
