//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (CKSQLiteCompiledStatement)
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;	// IMP=0x00200000000722df
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x00200000000c9869
- (void)CKAssignToContainerWithID:(id)arg1;	// IMP=0x00200000000ca7b9
- (id)CKShuffledArray;	// IMP=0x00200000000cb70e
- (id)CKComponentsAndSubcomponentsJoinedByString:(id)arg1;	// IMP=0x00200000000cb4e9
- (id)CKFirstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x002000000015349f
- (_Bool)CKContains:(CDUnknownBlockType)arg1;	// IMP=0x00200000001533df
- (id)CKFilter:(CDUnknownBlockType)arg1;	// IMP=0x0020000000153232
- (id)_CKReduceIntoDictionary:(_Bool)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0020000000152f29
- (id)CKCompactReduceIntoDictionary:(CDUnknownBlockType)arg1;	// IMP=0x0020000000152f0f
- (id)CKReduceIntoDictionary:(CDUnknownBlockType)arg1;	// IMP=0x0020000000152ef8
- (id)CKFlatMap:(CDUnknownBlockType)arg1;	// IMP=0x0020000000152d36
- (id)CKCompactMapToDictionary:(CDUnknownBlockType)arg1;	// IMP=0x0020000000152ae6
- (id)CKCompactMap:(CDUnknownBlockType)arg1;	// IMP=0x0020000000152924
- (id)CKMapToDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00200000001526e1
- (id)CKMapWithIndex:(CDUnknownBlockType)arg1;	// IMP=0x00200000001525cf
- (id)CKMap:(CDUnknownBlockType)arg1;	// IMP=0x002000000015240c
- (id)ckEquivalencyProperties;	// IMP=0x00200000001956c0
- (id)CKDeepCopyWithLeafNodeCopyBlock:(CDUnknownBlockType)arg1;	// IMP=0x002000000026f5f0
- (id)CKDeepCopy;	// IMP=0x002000000026f27d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
