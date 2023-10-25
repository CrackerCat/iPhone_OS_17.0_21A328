//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TTMergeableStringUndoEditCommand : NSObject
{
    void *_deleteRanges;	// 8 = 0x8
    void *_insertStrings;	// 16 = 0x10
}

@property(readonly, nonatomic) void *insertStrings; // @synthesize insertStrings=_insertStrings;
@property(readonly, nonatomic) void *deleteRanges; // @synthesize deleteRanges=_deleteRanges;
@property(readonly, copy) NSString *description;
- (_Bool)addToGroup:(id)arg1;	// IMP=0x0000000000136f8d
- (void)applyToString:(id)arg1;	// IMP=0x0000000000136db0
- (void)updateInsertTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;	// IMP=0x0000000000136c57
- (_Bool)hasTopoIDsThatCanChange;	// IMP=0x0000000000136b1b
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;	// IMP=0x00000000001369e0
- (void)dealloc;	// IMP=0x0000000000136979
- (id)init;	// IMP=0x00000000001368d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
