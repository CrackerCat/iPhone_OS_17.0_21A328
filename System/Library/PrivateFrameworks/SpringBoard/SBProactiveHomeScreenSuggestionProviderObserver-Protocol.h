//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class INIntent, NSString, SBProactiveHomeScreenSuggestionProvider;

@protocol SBProactiveHomeScreenSuggestionProviderObserver
- (void)proactiveHomeScreenSuggestionProvider:(SBProactiveHomeScreenSuggestionProvider *)arg1 willUseTemporaryIntent:(INIntent *)arg2 forIconWithIdentifier:(NSString *)arg3 widgetUniqueIdentifier:(NSString *)arg4;
- (void)proactiveHomeScreenSuggestionProviderDidUpdatePrediction:(SBProactiveHomeScreenSuggestionProvider *)arg1;
@end
