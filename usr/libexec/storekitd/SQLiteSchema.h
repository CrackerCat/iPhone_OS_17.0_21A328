//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SQLiteConnection;

@interface SQLiteSchema : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003a5ad
- (void)_setUserVersion:(long long)arg1;	// IMP=0x001000000003a54b
- (_Bool)tableExists:(id)arg1;	// IMP=0x001000000003a414
- (_Bool)migrateToVersion:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a109
@property(readonly) long long currentUserVersion;
- (_Bool)column:(id)arg1 existsInTable:(id)arg2;	// IMP=0x0010000000039e12
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000039da7

@end
