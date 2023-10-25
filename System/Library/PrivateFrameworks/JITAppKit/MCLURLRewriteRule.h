//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSRegularExpression, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface MCLURLRewriteRule
{
    NSRegularExpression *_replacePattern;	// 8 = 0x8
    NSString *_replaceTemplate;	// 16 = 0x10
    NSSet *_ignoreHosts;	// 24 = 0x18
}

+ (id)urlRewriteRuleFromHost:(id)arg1 toHost:(id)arg2 ignoreHosts:(id)arg3;	// IMP=0x0060000000003540
- (void).cxx_destruct;	// IMP=0x0000000000004150
- (void)rewriteURLRequest:(id)arg1;	// IMP=0x0000000000003c60
- (id)initWithMatchPattern:(id)arg1 replacePattern:(id)arg2 replaceTemplate:(id)arg3 ignoreHosts:(id)arg4;	// IMP=0x0000000000003ad0

@end
