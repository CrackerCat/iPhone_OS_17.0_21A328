//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKSQLite, NSError, NSMutableArray, NSString;

@interface CKSQLiteStatement : NSObject
{
    _Bool _reset;	// 8 = 0x8
    CKSQLite *_SQLite;	// 16 = 0x10
    NSString *_SQL;	// 24 = 0x18
    struct sqlite3_stmt *_handle;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSMutableArray *_temporaryBoundObjects;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001f663a
- (void)bindText:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001f5db5
- (void)invalidate:(id)arg1;	// IMP=0x00000000001f5a34

@end
