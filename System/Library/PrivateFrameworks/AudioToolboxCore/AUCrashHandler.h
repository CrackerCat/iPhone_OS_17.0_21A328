//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AUCrashHandler : NSObject
{
    int _watchedPid;	// 8 = 0x8
    CDUnknownBlockType _crashCallback;	// 16 = 0x10
}

+ (id)_deanonymizeUserHomePath:(id)arg1;	// IMP=0x00100000001ac254
+ (_Bool)_isAppleApplicationInPath:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000001ac1b8
+ (_Bool)_bundleIdentifierIsApple:(id)arg1;	// IMP=0x00100000001ac112
+ (_Bool)_pathIsApple:(id)arg1;	// IMP=0x00100000001ac03e
- (void).cxx_destruct;	// IMP=0x00000000001abfc4
- (void)didWriteDiagnosticLog:(id)arg1 logId:(id)arg2 logFilePath:(id)arg3 logInfo:(id)arg4 error:(id)arg5;	// IMP=0x00000000001abfbe
- (void)willWriteDiagnosticLog:(id)arg1 logId:(id)arg2 logInfo:(id)arg3;	// IMP=0x00000000001ab3ed
- (void)dealloc;	// IMP=0x00000000001ab33a
- (id)initWithPid:(int)arg1 withCrashBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ab1dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
