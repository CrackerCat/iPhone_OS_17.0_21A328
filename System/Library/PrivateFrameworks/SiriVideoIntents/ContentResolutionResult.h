//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface ContentResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x0060000000177dcd
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x0060000000177d60
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x0060000000177d0a
+ (id)confirmationRequiredWithContentToConfirm:(id)arg1;	// IMP=0x0060000000177c76
+ (id)disambiguationWithContentsToDisambiguate:(id)arg1;	// IMP=0x0060000000177c23
+ (id)successWithResolvedContent:(id)arg1;	// IMP=0x0060000000177bdc
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x0000000000177eef

@end
