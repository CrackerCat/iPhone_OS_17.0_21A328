//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMSDFraudReportService : NSObject
{
}

+ (_Bool)isConnectionEntitled:(id)arg1;	// IMP=0x002000000001e528
+ (id)sharedPerformQueue;	// IMP=0x001000000001e4a7
- (id)_reportedScoreFromFSRDataString:(id)arg1;	// IMP=0x002000000001eb6a
- (void)performFraudReportRefreshWithAccount:(id)arg1 transactionID:(id)arg2 nameSpace:(id)arg3 fsrData:(id)arg4 keyID:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000001e5b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
