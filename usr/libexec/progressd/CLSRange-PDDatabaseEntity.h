//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSRange.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSRange (PDDatabaseEntity)
+ (long long)migrationOrder;	// IMP=0x002000000008970f
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000089674
+ (id)entityName;	// IMP=0x0010000000089432
+ (id)recordType;	// IMP=0x00100000000a15e3
+ (int)entityType;	// IMP=0x0010000000162262
+ (int)syncType;	// IMP=0x0010000000162257
- (void)bindTo:(id)arg1;	// IMP=0x001000000008954f
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000008943f
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x00100000000a1976
- (void)populate:(id)arg1;	// IMP=0x00100000000a16d2
- (id)initWithCKRecord:(id)arg1;	// IMP=0x00100000000a15f0
- (id)generateInsightEventsWithDatabase:(id)arg1;	// IMP=0x00100000000de347

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end
