//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLPredictedWalkDistanceCloudKitDelegate : NSObject
{
    void *fPredictedWalkDistanceBoutDb;	// 8 = 0x8
}

- (_Bool)convertDataBlob:(id)arg1 toBoundStatement:(const void *)arg2;	// IMP=0x0020000000164ff1
- (id)convertStatementToDataBlobs:(const void *)arg1;	// IMP=0x0010000000164e33
- (id)columns;	// IMP=0x0010000000164e26
- (id)dataFieldKey;	// IMP=0x0010000000164e19
- (id)zoneName;	// IMP=0x0010000000164e0c
- (id)recordType;	// IMP=0x0010000000164dff
- (id)initWithPredictedWalkDistanceBoutRecorderDb:(void *)arg1;	// IMP=0x0010000000164dc2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
