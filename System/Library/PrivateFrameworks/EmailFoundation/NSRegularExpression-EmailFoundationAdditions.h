//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSRegularExpression.h>

@interface NSRegularExpression (EmailFoundationAdditions)
+ (id)ef_regularExpressionForQuotedStringsInLocales:(id)arg1;	// IMP=0x0060000000026484
- (id)ef_stringByRemovingTokensFromString:(id)arg1 tokenizationHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002645a
- (id)ef_stringByRemovingTokensFromString:(id)arg1 matchingOptions:(unsigned long long)arg2 tokenizationOptions:(unsigned long long)arg3 tokenizationHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002618c
- (void)ef_enumerateTokensInString:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000025e3e
@end
