//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPredicate.h>

@interface NSPredicate (BRQueryItemAdditions_Private)
- (id)extractSearchTermFromPredicate;	// IMP=0x0060000000045fae
- (_Bool)isFolderOnlyPredicate;	// IMP=0x0060000000045dc8
- (_Bool)_isContentTypeFolderComparisonPredicate;	// IMP=0x0060000000045ca2
- (id)br_watchedFileObjectID;	// IMP=0x0060000000045c9a
- (id)br_fileObjectIDWithWatchedChildren;	// IMP=0x0060000000045c92
- (id)br_urlWithWatchedChildren;	// IMP=0x0060000000045c8a
- (id)br_watchedURL;	// IMP=0x0060000000045c82
@end
