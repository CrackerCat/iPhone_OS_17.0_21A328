//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface KCSharingIncomingRow : NSObject
{
}

+ (id)requiredAttributeKeys;	// IMP=0x0020000000162308
+ (const struct SecDbClass *)databaseItemClass;	// IMP=0x00100000001622e9
- (id)attributesWithAccessGroups:(id)arg1 error:(id *)arg2;	// IMP=0x002000000016250c
- (id)initWithAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001624c4
- (id)initWithIncomingDatabaseItem:(struct SecDbItem *)arg1 error:(id *)arg2;	// IMP=0x0010000000162421

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
