//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UABestAppSuggestionManager;

__attribute__((visibility("hidden")))
@interface UABestAppSuggestionManagerProxy : NSObject
{
    UABestAppSuggestionManager *_weakManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000048301
@property __weak UABestAppSuggestionManager *weakManager; // @synthesize weakManager=_weakManager;
- (void)notifyBestAppsChanged:(id)arg1 when:(id)arg2 confidence:(double)arg3;	// IMP=0x0000000000048245

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
