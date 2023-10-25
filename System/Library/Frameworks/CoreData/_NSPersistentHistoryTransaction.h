//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSPersistentHistoryTransaction.h"

@class NSArray, NSData, NSManagedObjectID, NSPersistentStoreCoordinator, NSString;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryTransaction : NSPersistentHistoryTransaction
{
    long long _rowIdentifier;	// 8 = 0x8
    double _timestamp;	// 16 = 0x10
    NSArray *_changes;	// 24 = 0x18
    NSString *_storeID;	// 32 = 0x20
    NSString *_bundleID;	// 40 = 0x28
    NSString *_processID;	// 48 = 0x30
    NSString *_contextName;	// 56 = 0x38
    NSString *_author;	// 64 = 0x40
    NSData *_queryGeneration;	// 72 = 0x48
    NSPersistentStoreCoordinator *_coordinator;	// 80 = 0x50
    NSManagedObjectID *_backingObjectID;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001bcd7
- (id)objectIDNotification;	// IMP=0x000000000001c398
- (id)_backingObjectID;	// IMP=0x000000000001c387
- (id)author;	// IMP=0x000000000001c376
- (id)contextName;	// IMP=0x000000000001c365
- (id)processID;	// IMP=0x000000000001c354
- (id)bundleID;	// IMP=0x000000000001c343
- (id)storeID;	// IMP=0x000000000001c332
- (id)postQueryGenerationToken;	// IMP=0x000000000001c22f
- (id)initialQueryGenerationToken;	// IMP=0x000000000001c174
- (id)token;	// IMP=0x000000000001c108
- (long long)transactionNumber;	// IMP=0x000000000001c0f7
- (id)changes;	// IMP=0x000000000001c0e6
- (id)timestamp;	// IMP=0x000000000001c07d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001bf20
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001bcdf
- (void)dealloc;	// IMP=0x000000000001bbee
- (id)initWithDictionary:(id)arg1 andObjectID:(id)arg2;	// IMP=0x000000000001b98c

@end
