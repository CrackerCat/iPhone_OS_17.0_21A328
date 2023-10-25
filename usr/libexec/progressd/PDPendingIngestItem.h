//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;
@protocol PDDatabaseValue;

@interface PDPendingIngestItem : NSObject
{
    _Bool _wasDeleted;	// 8 = 0x8
    MISSING_TYPE *_entity;	// 16 = 0x10
    id <PDDatabaseValue> _entityIdentity;	// 24 = 0x18
}

+ (id)identityColumnName;	// IMP=0x0020000000167bc2
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000167b44
+ (id)entityName;	// IMP=0x0010000000167915
- (void).cxx_destruct;	// IMP=0x0020000000167c13
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
- (void)bindTo:(id)arg1;	// IMP=0x0010000000167a57
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x0010000000167922

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
