//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INSpeakableString, NSNumber;

@protocol INSetCarLockStatusIntentExport <NSObject, JSExport>
@property(copy, nonatomic) INSpeakableString *carName;
@property(copy, nonatomic) NSNumber *locked;
- (id)init;
@end
