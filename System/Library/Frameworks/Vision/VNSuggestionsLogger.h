//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNSuggestionsLogger
{
}

- (void)logString:(id)arg1;	// IMP=0x00000000000165e1
- (void)logFinalSuggestionsList:(id)arg1;	// IMP=0x000000000001638e
- (void)logConnectedGroups:(id)arg1;	// IMP=0x0000000000015ecc
- (void)logFilteredByInputQuerySuggestons:(id)arg1;	// IMP=0x0000000000015eb3
- (void)logAllSuggestons:(id)arg1;	// IMP=0x0000000000015e9a
- (void)logSuggestons:(id)arg1 description:(id)arg2;	// IMP=0x000000000001595f
- (void)logInputFaceIdsWithFlags:(id)arg1;	// IMP=0x000000000001561a
- (id)initWithOptions:(id)arg1 logEnabled:(_Bool)arg2;	// IMP=0x00000000000155e4

@end
