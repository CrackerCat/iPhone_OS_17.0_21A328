//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SQLiteConnection;

@interface InAppPromotionDatabaseTransaction
{
}

- (_Bool)_migrateITunesStoreDDatabaseAtPath:(id)arg1;	// IMP=0x0020000000003599
- (_Bool)removePromotionInfoForBundleID:(id)arg1;	// IMP=0x001000000000343e
- (_Bool)setPromotionInfo:(id)arg1 forBundleID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000025f0

// Remaining properties
@property(readonly) SQLiteConnection *connection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
