//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/WFParameterState-Protocol.h>

@class WFVariable;

@protocol WFVariableSupportingParameterState <WFParameterState>
- (id)initWithVariable:(WFVariable *)arg1;

@optional
@property(readonly, nonatomic) WFVariable *variable;
- (id)stateByReplacingVariable:(WFVariable *)arg1 withVariable:(WFVariable *)arg2;
@end
