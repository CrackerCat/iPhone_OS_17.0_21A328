//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeDataModel/NSObject-Protocol.h>

@class HMApplicationData;

@protocol HMApplicationData <NSObject>
@property(readonly, nonatomic) HMApplicationData *applicationData;
- (void)updateApplicationData:(HMApplicationData *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end
