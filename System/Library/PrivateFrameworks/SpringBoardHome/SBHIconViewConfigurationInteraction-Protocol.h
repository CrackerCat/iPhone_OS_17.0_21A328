//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@protocol NSCopying><NSSecureCoding, SBHIconViewConfigurationInteractionDelegate, SBLeafIconDataSource;

@protocol SBHIconViewConfigurationInteraction <NSObject>
@property(readonly, nonatomic) id <SBLeafIconDataSource> configuredDataSource;
@property(nonatomic) __weak id <SBHIconViewConfigurationInteractionDelegate> delegate;
@property(readonly, copy, nonatomic) id <NSCopying><NSSecureCoding> configuration;
- (void)endConfigurationImmediately;
- (void)endConfiguration;
- (void)popConfiguration;
- (void)beginConfiguration;
@end
