//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class MISSING_TYPE;

@interface ConfigurationIntentResponse : INIntentResponse
{
    MISSING_TYPE *code;	// 8 = 0x8
}

- (id)initWithCoder:(id)arg1;	// IMP=0x004000000008bdd0
- (id)init;	// IMP=0x001000000008bcd0
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x001000000008bb80
@property(nonatomic) long long code; // @synthesize code;

@end
