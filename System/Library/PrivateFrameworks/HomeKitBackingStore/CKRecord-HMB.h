//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@class NSString;

@interface CKRecord (HMB)
+ (id)recordFromExternalData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008624c
+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000009babb
- (id)hmbObjectForKey:(id)arg1 encrypted:(_Bool)arg2;	// IMP=0x00100000000852ed
- (void)hmbSetObject:(id)arg1 forKey:(id)arg2 encrypted:(_Bool)arg3;	// IMP=0x001000000008522b
- (id)externalID:(id *)arg1;	// IMP=0x00100000000851cc
- (id)externalData:(id *)arg1;	// IMP=0x001000000008511a
- (id)hmbDescription;	// IMP=0x0010000000085014
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000009b866

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
