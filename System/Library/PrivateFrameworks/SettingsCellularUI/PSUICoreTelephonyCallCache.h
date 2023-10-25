//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CXCallObserver;

__attribute__((visibility("hidden")))
@interface PSUICoreTelephonyCallCache : NSObject
{
    CXCallObserver *_callObserver;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00600000000538e5
- (void).cxx_destruct;	// IMP=0x0000000000054413
@property(retain, nonatomic) CXCallObserver *callObserver; // @synthesize callObserver=_callObserver;
- (id)getLogger;	// IMP=0x00000000000543d8
- (id)localizedPhoneNumber:(id)arg1 context:(id)arg2;	// IMP=0x000000000005413d
- (_Bool)isActiveCallSubtype:(const char *)arg1;	// IMP=0x0000000000053ed7
- (_Bool)isActiveCallVoNR;	// IMP=0x0000000000053ebb
- (_Bool)isActiveCallVoLTE;	// IMP=0x0000000000053e9f
- (_Bool)isAnyCallActiveForProviderIdentifier:(id)arg1;	// IMP=0x0000000000053bb2
- (_Bool)isAnyTelephonyCallActive;	// IMP=0x0000000000053b99
- (_Bool)isAnyVOIPCallActive;	// IMP=0x0000000000053b5b
- (_Bool)isAnyCallActive;	// IMP=0x0000000000053ac4
- (id)init;	// IMP=0x0000000000053a04
- (id)initPrivate:(id)arg1;	// IMP=0x0000000000053985

@end
