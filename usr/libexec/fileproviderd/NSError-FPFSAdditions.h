//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (FPFSAdditions)
+ (id)fp_errorForDataProtectionClass:(int)arg1;	// IMP=0x00100000000061da
+ (id)fp_nonEvictableChildrenErrorWithFD:(int)arg1 trashIno:(unsigned long long)arg2 busyIno:(unsigned long long)arg3;	// IMP=0x0010000000005cc4
+ (id)purgeabilityErrorForReason:(unsigned long long)arg1 atURL:(id)arg2;	// IMP=0x0010000000005bec
- (id)fp_protectionClassBehindError;	// IMP=0x0020000000006041
@end
