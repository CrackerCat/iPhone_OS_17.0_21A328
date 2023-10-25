//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface MRDExternalDeviceCredentialDatabase : NSObject
{
    struct sqlite3 *_dbHandle;	// 8 = 0x8
    NSMutableArray *_tokenRecords;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000052ffb
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (id)_loadTokenRecords;	// IMP=0x0010000000052cd1
- (void)_initializeDatabaseSchema;	// IMP=0x0010000000052c3e
- (void)_validateDatabase;	// IMP=0x0010000000052a14
- (void)_openDatabase;	// IMP=0x001000000005286a
- (_Bool)clearExpiredTokenRecords;	// IMP=0x0010000000052651
- (_Bool)saveTokenRecord:(id)arg1;	// IMP=0x00100000000521f8
@property(readonly, nonatomic) NSArray *tokenRecords;
- (void)dealloc;	// IMP=0x0010000000052141
- (id)init;	// IMP=0x001000000005212d
- (id)initWithPath:(id)arg1;	// IMP=0x0010000000052074

@end
