//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSData, NSString;

@interface NSArray (FezAdditions)
- (id)__imMapToDictionary:(CDUnknownBlockType)arg1;	// IMP=0x0030000000005aad
- (id)__imArrayByApplyingBlock:(CDUnknownBlockType)arg1 filter:(CDUnknownBlockType)arg2;	// IMP=0x00300000000057d8
- (id)__imArrayByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x003000000000554f
- (id)__imArrayByFilteringWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00300000000052f2
- (void)__imForEach:(CDUnknownBlockType)arg1;	// IMP=0x003000000000521d
- (_Bool)containsObject:(id)arg1 matchingComparison:(SEL)arg2;	// IMP=0x00300000000051f2
- (long long)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2;	// IMP=0x0030000000005118
- (_Bool)containsObjectIdenticalTo:(id)arg1;	// IMP=0x00300000000050f5
- (id)__imFirstObject;	// IMP=0x00300000000050ae
- (id)_copyForEnumerating;	// IMP=0x003000000000507a
- (_Bool)_hasSameMembers:(id)arg1;	// IMP=0x0030000000004fb2
- (id)__imDeepCopy;	// IMP=0x0030000000004f33
- (_Bool)__imIsMutable;	// IMP=0x0030000000004f0a
- (id)__imSetFromArray;	// IMP=0x0030000000004ebe
- (id)__IMStripPotentialTokenURIs;	// IMP=0x0030000000004e35
@property(readonly, nonatomic) NSString *SHA256HexString;
@property(readonly, nonatomic) NSData *SHA256Data;
- (void)_SHA256Bytes:(char *)arg1;	// IMP=0x0030000000015f9c
@end
