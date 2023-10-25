//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SFAccountIconSharingBadgeImageProvider : NSObject
{
    NSHashTable *_subscribers;	// 8 = 0x8
    NSMutableDictionary *_badgeDiameterToImageCache;	// 16 = 0x10
}

+ (id)sharedProvider;	// IMP=0x0060000000188823
- (void).cxx_destruct;	// IMP=0x0000000000188df3
- (void)_resetAndInformSubscribers;	// IMP=0x0000000000188cbb
- (void)addCoordinatorAsSubscriber:(id)arg1;	// IMP=0x0000000000188ca5
- (id)_createBadgeImageWithDiameter:(unsigned long long)arg1;	// IMP=0x00000000001889c7
- (id)badgeImageForDiameter:(unsigned long long)arg1;	// IMP=0x00000000001888a8
- (id)init;	// IMP=0x000000000018874d

@end
