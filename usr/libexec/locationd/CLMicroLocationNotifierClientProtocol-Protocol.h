//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLNotifierServiceClientProtocol-Protocol.h"

@class CLCppContainer;

@protocol CLMicroLocationNotifierClientProtocol <CLNotifierServiceClientProtocol>
- (void)onMiLoGenericEvent:(CLCppContainer *)arg1;
- (void)onMiLoObservationMetaInfo:(CLCppContainer *)arg1;
- (void)onMiLoConnectionStatusEventUpdate:(CLCppContainer *)arg1;
- (void)onMiLoDebugResponse:(CLCppContainer *)arg1;
- (void)onMiLoPredictionEventUpdate:(CLCppContainer *)arg1;
- (void)onMiLoServiceEventUpdate:(CLCppContainer *)arg1;
@end
