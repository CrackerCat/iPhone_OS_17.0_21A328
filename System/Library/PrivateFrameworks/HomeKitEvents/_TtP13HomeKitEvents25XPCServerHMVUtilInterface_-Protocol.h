//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSNumber, NSString, NSUUID;

@protocol _TtP13HomeKitEvents25XPCServerHMVUtilInterface_
- (void)hmvutilResetConfigurationWithReply:(void (^)(NSError *))arg1;
- (void)hmvutilSubmitTaskRequestForIdentifierWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)hmvutilRegisterForTaskWithIdentifierWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)exitWithExitStatus:(long long)arg1 reply:(void (^)(NSError *))arg2;
- (void)hmvutilEchoWithString:(NSString *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)hmvutilCreateRandomEventsWithRecordCount:(unsigned long long)arg1 home:(NSUUID *)arg2 category:(NSNumber *)arg3 accessory:(NSUUID *)arg4 user:(NSUUID *)arg5 uploadOnly:(_Bool)arg6 saveOnly:(_Bool)arg7 skipZoneCreation:(_Bool)arg8 date:(NSDate *)arg9 reply:(void (^)(NSError *))arg10;
- (void)hmvutilUploadEventsWithReply:(void (^)(NSError *))arg1;
- (void)hmvutilDumpLocalDatabaseWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)hmvutilCreateFakeEventsWithEventsData:(NSArray *)arg1 uploadOnly:(_Bool)arg2 saveOnly:(_Bool)arg3 skipZoneCreation:(_Bool)arg4 reply:(void (^)(NSError *))arg5;
- (void)hmvutilCreateEventsWithEventsData:(NSArray *)arg1 uploadOnly:(_Bool)arg2 saveOnly:(_Bool)arg3 skipZoneCreation:(_Bool)arg4 reply:(void (^)(NSError *))arg5;
- (void)hmvutilClearLocalDatabaseWithHomes:(NSArray *)arg1 reply:(void (^)(NSError *))arg2;
- (void)hmvutilClearEventsWithHomes:(NSArray *)arg1 reply:(void (^)(NSError *))arg2;
@end
