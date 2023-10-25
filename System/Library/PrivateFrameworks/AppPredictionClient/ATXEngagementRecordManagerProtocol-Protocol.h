//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppPredictionClient/NSObject-Protocol.h>

@class ATXExecutableIdentifier, ATXProactiveSuggestion, NSArray, NSDate, NSDictionary, NSSet, NSString;

@protocol ATXEngagementRecordManagerProtocol <NSObject>
- (NSDictionary *)jsonDict;
- (_Bool)hasReferenceForSuggestion:(ATXProactiveSuggestion *)arg1;
- (void)removeAllEngagementsWithCompletion:(void (^)(void))arg1;
- (void)removeEngagementForExecutableIdentifier:(ATXExecutableIdentifier *)arg1 recordType:(unsigned long long)arg2 abortingRemovalIfEngagementDateIsLaterThanDate:(NSDate *)arg3;
- (void)removeAllEngagementsOfRecordType:(unsigned long long)arg1;
- (void)removeAllEngagementsForSuggestion:(ATXProactiveSuggestion *)arg1;
- (void)removeEngagementForSuggestion:(ATXProactiveSuggestion *)arg1 recordType:(unsigned long long)arg2;
- (void)updateForClientModelCacheUpdate:(NSArray *)arg1 clientModelId:(NSString *)arg2;
- (void)addHiddenSuggestion:(ATXProactiveSuggestion *)arg1 duration:(double)arg2 engagementRecordType:(unsigned long long)arg3;
- (void)addEngagedExecutable:(NSString *)arg1 clientModelId:(NSString *)arg2 engagementRecordType:(unsigned long long)arg3;
- (void)addEngagedSuggestion:(ATXProactiveSuggestion *)arg1 engagementRecordType:(unsigned long long)arg2;
- (_Bool)hasEngagedWithExecutable:(NSString *)arg1 engagementRecordType:(unsigned long long)arg2;
- (_Bool)hasEngagedWithSuggestion:(ATXProactiveSuggestion *)arg1 engagedExecutables:(NSSet *)arg2;
- (_Bool)hasEngagedWithSuggestion:(ATXProactiveSuggestion *)arg1 engagementRecordType:(unsigned long long)arg2;
- (NSSet *)engagedExecutablesOfType:(unsigned long long)arg1 queryOptions:(unsigned long long)arg2;
@end
