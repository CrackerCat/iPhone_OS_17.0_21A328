//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AvatarUI/NSObject-Protocol.h>

@protocol AVTDeviceResourceConsumerDelegate;

@protocol AVTDeviceResourceConsumer <NSObject>
@property(nonatomic) __weak id <AVTDeviceResourceConsumerDelegate> consumerDelegate;
- (void)releaseRenderingResourceForEstimatedDuration:(double)arg1;
@end
