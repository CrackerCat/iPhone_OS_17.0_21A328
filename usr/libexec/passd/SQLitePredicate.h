//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SQLitePredicate : NSObject
{
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x004000000009553a
- (unsigned long long)hash;	// IMP=0x0010000000095520
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x0010000000095518
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x0010000000095510
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;	// IMP=0x001000000009550a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000954ff

@end
