//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VUIStreamingBookmarkCache : NSObject
{
    NSMutableDictionary *_bookmarkCacheStore;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x006000000009fb99
- (void).cxx_destruct;	// IMP=0x00000000000a076d
- (void)_activeAccountChangedNotification:(id)arg1;	// IMP=0x00000000000a064a
- (void)removeBookmark:(id)arg1;	// IMP=0x00000000000a05ce
- (void)addBookmark:(id)arg1 absoluteResumeTime:(id)arg2 absoluteBookmarkTimestamp:(id)arg3 relativeResumeTime:(id)arg4 relativeBookmarkTimestamp:(id)arg5;	// IMP=0x00000000000a04b6
- (void)resumeTimeInfoByReference:(id)arg1 outAbsoluteResumeTime:(id *)arg2 outAbsoluteTimestamp:(id *)arg3 outMainContentRelativeResumeTime:(id *)arg4 outMainContentRelativeTimestamp:(id *)arg5;	// IMP=0x00000000000a01f8
- (_Bool)resumeTimeAndTimestampByReference:(id)arg1 serverResumeTime:(id)arg2 serverBookmarkTimestamp:(id)arg3 mostRecentResumeTime:(id *)arg4 mostRecentBookmarkTimestamp:(id *)arg5;	// IMP=0x000000000009fd11
- (void)dealloc;	// IMP=0x000000000009fc9c
- (id)init;	// IMP=0x000000000009fbee

@end
