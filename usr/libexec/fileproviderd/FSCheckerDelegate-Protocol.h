//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FSChecker, NSArray, NSString;

@protocol FSCheckerDelegate
- (_Bool)checker:(FSChecker *)arg1 handleLockedItemAtPath:(NSString *)arg2 handle:(const struct fpfs_item_handle *)arg3;
- (_Bool)checker:(FSChecker *)arg1 handleItem:(int)arg2 itemStatus:(const CDStruct_bb5def0f *)arg3 under:(NSArray *)arg4 brokenInvariants:(unsigned long long)arg5;
@end
