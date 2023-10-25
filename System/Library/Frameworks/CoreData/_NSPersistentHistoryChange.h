//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSPersistentHistoryChange.h"

@class NSData, NSDictionary, NSManagedObjectID, NSPersistentHistoryTransaction, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryChange : NSPersistentHistoryChange
{
    long long _changeID;	// 8 = 0x8
    NSManagedObjectID *_changedObjectID;	// 16 = 0x10
    long long _changeType;	// 24 = 0x18
    NSDictionary *_tombstone;	// 32 = 0x20
    NSPersistentHistoryTransaction *_transaction;	// 40 = 0x28
    NSData *_columns;	// 48 = 0x30
    NSSQLEntity *_sqlEntity;	// 56 = 0x38
    NSManagedObjectID *_backingObjectID;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000aeea7
- (id)_backingObjectID;	// IMP=0x00000000000b03cc
- (id)updatedProperties;	// IMP=0x00000000000afab5
- (long long)changeID;	// IMP=0x00000000000afaa4
- (id)transaction;	// IMP=0x00000000000afa93
- (void)_setTransaction:(id)arg1;	// IMP=0x00000000000afa82
- (long long)changeType;	// IMP=0x00000000000afa71
- (id)changedObjectID;	// IMP=0x00000000000afa60
- (id)tombstone;	// IMP=0x00000000000afa4f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000af945
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000af744
- (void)dealloc;	// IMP=0x00000000000af6a3
- (id)initWithDictionary:(id)arg1 andChangeObjectID:(id)arg2;	// IMP=0x00000000000aeeaf

@end
