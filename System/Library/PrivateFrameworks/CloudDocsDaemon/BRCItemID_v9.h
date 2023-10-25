//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCALRowID, NSString;

__attribute__((visibility("hidden")))
@interface BRCItemID_v9 : NSObject
{
    BRCALRowID *_appLibraryRowID;	// 8 = 0x8
    unsigned char _kind;	// 16 = 0x10
    unsigned char _uuid[16];	// 17 = 0x11
}

+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;	// IMP=0x0010000000147863
- (void).cxx_destruct;	// IMP=0x000000000014811e
- (id)_initAsLibraryRootWithAppLibraryRowID:(id)arg1 enclosureUUID:(id)arg2;	// IMP=0x0000000000147f00
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;	// IMP=0x0000000000147b3c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000147b31
- (id)initWithUUIDObject:(struct _UUIDItemObject_OLD *)arg1;	// IMP=0x0000000000147771
- (id)initWithRootObject:(struct RootItemObject *)arg1;	// IMP=0x0000000000147688
- (id)initWithUUID:(const char *)arg1;	// IMP=0x0000000000147644
- (id)itemIDString;	// IMP=0x000000000014749a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
