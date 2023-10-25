//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDDatabaseTransaction, NSString;
@protocol HDHealthRecordsAccountEventObserver, HDHealthRecordsSupportedChangeObserver;

@protocol HDHealthRecordsProfileExtension
- (void)removeAccountEventObserver:(id <HDHealthRecordsAccountEventObserver>)arg1;
- (void)addAccountEventObserver:(id <HDHealthRecordsAccountEventObserver>)arg1;
- (long long)hasIssuerBackedAccountsWithTransaction:(HDDatabaseTransaction *)arg1 error:(id *)arg2;
- (long long)hasGatewayBackedAccountsWithTransaction:(HDDatabaseTransaction *)arg1 error:(id *)arg2;
- (long long)hasIssuerBackedAccountsWithError:(id *)arg1;
- (long long)hasGatewayBackedAccountsWithError:(id *)arg1;
- (void)unregisterHealthRecordsSupportedChangeObserver:(id <HDHealthRecordsSupportedChangeObserver>)arg1;
- (void)registerHealthRecordsSupportedChangeObserver:(id <HDHealthRecordsSupportedChangeObserver>)arg1;
- (_Bool)isSupportedFHIRResourceType:(NSString *)arg1 FHIRVersionString:(NSString *)arg2;
- (_Bool)isSupportedFHIRVersionString:(NSString *)arg1;
- (_Bool)deviceConfigurationSupportsHealthRecords:(_Bool *)arg1 error:(id *)arg2;
@end
