//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (PhotosUICore)
- (void)px_addObject:(id)arg1 removingFirstObjectIfNeededToKeepMaximumCount:(long long)arg2;	// IMP=0x0090000000b0622b
- (void)px_addObjectIfNotNil:(id)arg1;	// IMP=0x0090000000b06212
- (void)px_insertObjects:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0090000000b06180
- (id)px_popFirstPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0090000000b0610c
- (id)px_popRange:(struct _NSRange)arg1;	// IMP=0x0090000000b06082
- (id)px_popLast;	// IMP=0x0090000000b0600b
- (id)px_popFirst;	// IMP=0x0090000000b05fa5
@end
