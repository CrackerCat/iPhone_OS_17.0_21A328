//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@class NSString;

@interface NSSet (CKSQLiteCompiledStatement)
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;	// IMP=0x002000000007250d
- (void)CKAssignToContainerWithID:(id)arg1;	// IMP=0x00200000000ca901
- (id)CKFilter:(CDUnknownBlockType)arg1;	// IMP=0x0020000000154275
- (id)CKCompactMap:(CDUnknownBlockType)arg1;	// IMP=0x00200000001540b3
- (id)CKMap:(CDUnknownBlockType)arg1;	// IMP=0x0020000000153ef0
- (id)CKDeepCopyWithLeafNodeCopyBlock:(CDUnknownBlockType)arg1;	// IMP=0x002000000027053f
- (id)CKDeepCopy;	// IMP=0x00200000002701cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
