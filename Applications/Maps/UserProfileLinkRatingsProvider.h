//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSString, UserProfileLink;

@interface UserProfileLinkRatingsProvider : NSObject
{
    UserProfileLink *_newLink;	// 8 = 0x8
    long long _count;	// 16 = 0x10
    GEOObserverHashTable *_observers;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00200000008e2597
- (void).cxx_destruct;	// IMP=0x00200000008e2c6a
- (void)reviewedPlaceObjectsDidChange;	// IMP=0x00100000008e2c58
@property(readonly, nonatomic) GEOObserverHashTable *observers;
- (void)_updateLinkWithCount:(long long)arg1 notifyObservers:(_Bool)arg2;	// IMP=0x00100000008e2a67
- (void)_fetchCount;	// IMP=0x00100000008e294a
@property(readonly, nonatomic) _Bool hasRatings;
- (id)retrieveSubtitleText;	// IMP=0x00100000008e28a3
@property(readonly, nonatomic) long long userProfileLinkType;
- (id)createUserProfileLink;	// IMP=0x00100000008e2679
- (id)init;	// IMP=0x00100000008e25ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
