//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOConfigExpiringKey, GEOSQLiteDB, NSString;

__attribute__((visibility("hidden")))
@interface _GEOConfigDBUpdateExpireOperation
{
    GEOSQLiteDB *_db;	// 16 = 0x10
    GEOConfigExpiringKey *_expire;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002a442e
- (_Bool)performOperation;	// IMP=0x00000000002a4232
- (id)init:(id)arg1 expire:(id)arg2;	// IMP=0x00000000002a4190

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
