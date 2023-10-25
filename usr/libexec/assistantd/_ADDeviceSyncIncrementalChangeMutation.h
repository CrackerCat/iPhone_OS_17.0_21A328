//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceSyncIncrementalChange, NSArray, NSDate, NSString;

@interface _ADDeviceSyncIncrementalChangeMutation : NSObject
{
    ADDeviceSyncIncrementalChange *_base;	// 8 = 0x8
    unsigned long long _generation;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
    NSArray *_insertedOrUpdatedItems;	// 32 = 0x20
    NSArray *_deletedItemUUIDs;	// 40 = 0x28
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasGeneration:1;
        unsigned int hasDate:1;
        unsigned int hasInsertedOrUpdatedItems:1;
        unsigned int hasDeletedItemUUIDs:1;
    } _mutationFlags;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000020d2b8
- (void)setDeletedItemUUIDs:(id)arg1;	// IMP=0x001000000020d298
- (id)getDeletedItemUUIDs;	// IMP=0x001000000020d260
- (void)setInsertedOrUpdatedItems:(id)arg1;	// IMP=0x001000000020d240
- (id)getInsertedOrUpdatedItems;	// IMP=0x001000000020d208
- (void)setDate:(id)arg1;	// IMP=0x001000000020d1e8
- (id)getDate;	// IMP=0x001000000020d1b0
- (void)setGeneration:(unsigned long long)arg1;	// IMP=0x001000000020d1a2
- (unsigned long long)getGeneration;	// IMP=0x001000000020d180
- (_Bool)isDirty;	// IMP=0x001000000020d175
- (id)initWithBase:(id)arg1;	// IMP=0x001000000020d10a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
