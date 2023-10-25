//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (BUIO)
+ (id)bu_fileWritePOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;	// IMP=0x0020000000006289
+ (id)bu_fileWriteUnknownErrorWithUserInfo:(id)arg1;	// IMP=0x002000000000620d
+ (id)bu_fileReadPOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;	// IMP=0x002000000000618d
+ (id)bu_fileReadCorruptedFileErrorWithUserInfo:(id)arg1;	// IMP=0x0020000000006114
+ (id)bu_fileReadUnknownErrorWithUserInfo:(id)arg1;	// IMP=0x002000000000609b
+ (id)bu_userInfoWithErrorType:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0020000000005fd9
+ (id)bu_IOErrorWithCode:(long long)arg1;	// IMP=0x0020000000005f09
+ (id)bu_errorWithError:(id)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 additionalUserInfo:(id)arg4;	// IMP=0x002000000000f651
+ (id)bu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;	// IMP=0x002000000000f54c
+ (id)bu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;	// IMP=0x002000000000f3c2
+ (id)bu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;	// IMP=0x002000000000f39f
+ (id)bu_errorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x002000000000f380
+ (id)bu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;	// IMP=0x002000000000f27a
@property(readonly, nonatomic) _Bool bu_isWriteError;
@property(readonly, nonatomic) _Bool bu_isCorruptedError;
@property(readonly, nonatomic) _Bool bu_isReadError;
- (_Bool)bu_isErrorPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000000101f2
- (void)bu_enumerateErrorUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ffdd
@property(readonly, nonatomic) _Bool bu_isNoPermissionError;
@property(readonly, nonatomic) _Bool bu_isFileExistsError;
@property(readonly, nonatomic) _Bool bu_isNoSuchFileError;
@property(readonly, nonatomic) _Bool bu_isCancelError;
@property(readonly, nonatomic) _Bool bu_isOutOfSpaceError;
- (id)bu_localizedAlertMessage;	// IMP=0x001000000000fba1
- (id)bu_localizedAlertTitle;	// IMP=0x001000000000fb04
- (id)bu_errorPreservingCancel;	// IMP=0x001000000000f9a3
- (id)bu_errorPreservingAlertTitle;	// IMP=0x001000000000f81e
@end
