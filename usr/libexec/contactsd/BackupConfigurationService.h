//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BackupConfigurationService
{
}

+ (_Bool)hasLocalContactsWithError:(id *)arg1;	// IMP=0x004000000000c8b8
+ (_Bool)checkBackupConfigurationWithFileManager:(id)arg1 url:(id)arg2 tccServices:(id)arg3;	// IMP=0x001000000000c379
+ (_Bool)checkBackupConfiguration;	// IMP=0x001000000000c2c2
+ (void)run;	// IMP=0x001000000000c20b
+ (const char *)activityIdentifier;	// IMP=0x001000000000c1fe

@end
