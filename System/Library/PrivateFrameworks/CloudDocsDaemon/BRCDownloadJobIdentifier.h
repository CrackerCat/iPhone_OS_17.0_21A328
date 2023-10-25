//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCDownloadJobIdentifier : NSObject
{
    int _kind;	// 8 = 0x8
    unsigned long long _itemDBRowID;	// 16 = 0x10
    NSString *_etag;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b69f5
@property(readonly, nonatomic) int kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(readonly, nonatomic) unsigned long long itemDBRowID; // @synthesize itemDBRowID=_itemDBRowID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b69cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b696a
- (_Bool)isEqualToDownloadJobIdentifier:(id)arg1;	// IMP=0x00000000000b690b
@property(readonly) unsigned long long hash;
- (id)columnsValues;	// IMP=0x00000000000b68a8
- (id)columns;	// IMP=0x00000000000b6883
- (id)matchingJobsWhereSQLClause;	// IMP=0x00000000000b684e
@property(readonly, copy) NSString *description;
- (id)jobsDescription;	// IMP=0x00000000000b67e3
- (id)initWithDBRowID:(unsigned long long)arg1 etag:(id)arg2 kind:(int)arg3;	// IMP=0x00000000000b6762

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
