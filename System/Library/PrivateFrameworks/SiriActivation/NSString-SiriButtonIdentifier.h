//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (SiriButtonIdentifier)
+ (id)stringWithSiriButtonIdentifier:(long long)arg1;	// IMP=0x0080000000004abc
+ (id)stringWithSiriPresentationIdentifier:(long long)arg1;	// IMP=0x00800000000251c6
+ (id)stringWithSiriPresentationActivationCancelReason:(unsigned long long)arg1;	// IMP=0x008000000002535c
+ (id)stringWithSiriHomeAffordanceSuppression:(long long)arg1;	// IMP=0x008000000002555f
+ (id)stringWithSiriActivationEventType:(long long)arg1;	// IMP=0x0080000000025880
+ (id)stringWithSiriSpotlightContextSource:(long long)arg1;	// IMP=0x0080000000038da2
- (long long)siriPresentationIdentifier;	// IMP=0x001000000002520e
- (unsigned long long)cancelReason;	// IMP=0x0010000000025380
@end
