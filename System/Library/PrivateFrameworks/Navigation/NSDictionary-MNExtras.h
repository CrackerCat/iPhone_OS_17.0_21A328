//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (MNExtras)
+ (id)_navigation_serverStringDictionaryForMapItem:(id)arg1;	// IMP=0x00800000000f49bb
+ (id)_navigation_stringTokensForGenericCombinationsToken:(id)arg1 waypoints:(id)arg2 isSpokenString:(_Bool)arg3;	// IMP=0x00800000000f46eb
+ (id)_navigation_stringTokensForDirectionsError:(id)arg1 waypoints:(id)arg2;	// IMP=0x00800000000f43c0
+ (id)_navigation_serverStringDictionaryForDistance:(double)arg1 validDistance:(double)arg2 waypoints:(id)arg3 currentDestination:(id)arg4 legIndex:(unsigned long long)arg5 spoken:(_Bool)arg6 useDisplayName:(_Bool)arg7;	// IMP=0x00800000000f3ec6
+ (id)_navigation_serverStringDictionaryForDistance:(double)arg1 validDistance:(double)arg2 destination:(id)arg3 spoken:(_Bool)arg4 useDisplayName:(_Bool)arg5;	// IMP=0x00800000000f3ce4
@end
