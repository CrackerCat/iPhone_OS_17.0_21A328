//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WebBookmarkCollection;

@interface CloudTabGroupExpiredChangeTokenHandler
{
    WebBookmarkCollection *_collection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001b5cc
@property(readonly, nonatomic) WebBookmarkCollection *collection; // @synthesize collection=_collection;
- (_Bool)itemWithServerIDIsFolder:(id)arg1;	// IMP=0x001000000001b567
- (id)serverIDsInFolderWithServerID:(id)arg1;	// IMP=0x001000000001b545
- (id)initWithCollection:(id)arg1;	// IMP=0x001000000001b4c4

@end
