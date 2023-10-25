//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class SXComponentView;
@protocol SXComponent, SXComponentViewPostProcessor;

@protocol SXComponentViewPostProcessorManager <NSObject>
- (void)removeProcessor:(id <SXComponentViewPostProcessor>)arg1;
- (void)addProcessor:(id <SXComponentViewPostProcessor>)arg1;
- (void)processComponent:(id <SXComponent>)arg1 view:(SXComponentView *)arg2;
@end
