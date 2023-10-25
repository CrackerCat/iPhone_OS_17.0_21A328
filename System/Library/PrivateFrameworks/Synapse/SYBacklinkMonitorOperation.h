//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SYShowBacklinkIndicatorCommand;
@protocol OS_dispatch_queue, SYBacklinkMonitorOperationDelegate, SYBacklinkMonitorOperationDelegate_Testing, SYUserActivityInfo;

__attribute__((visibility("hidden")))
@interface SYBacklinkMonitorOperation : NSObject
{
    int _processIdentifier;	// 8 = 0x8
    id <SYBacklinkMonitorOperationDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_processingQueue;	// 24 = 0x18
    id <SYUserActivityInfo> _inputUserActivityInfo;	// 32 = 0x20
    long long __operationState;	// 40 = 0x28
    NSArray *__testingForcedFoundDomainIdentifiers;	// 48 = 0x30
    NSArray *__testingForcedFoundLinkedIdentifiers;	// 56 = 0x38
    id <SYBacklinkMonitorOperationDelegate_Testing> __testingDelegate;	// 64 = 0x40
    SYShowBacklinkIndicatorCommand *__indicatorCommand;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000016b10
@property(retain, nonatomic) SYShowBacklinkIndicatorCommand *_indicatorCommand; // @synthesize _indicatorCommand=__indicatorCommand;
@property(readonly, nonatomic) __weak id <SYBacklinkMonitorOperationDelegate_Testing> _testingDelegate; // @synthesize _testingDelegate=__testingDelegate;
@property(retain, nonatomic) NSArray *_testingForcedFoundLinkedIdentifiers; // @synthesize _testingForcedFoundLinkedIdentifiers=__testingForcedFoundLinkedIdentifiers;
@property(retain, nonatomic) NSArray *_testingForcedFoundDomainIdentifiers; // @synthesize _testingForcedFoundDomainIdentifiers=__testingForcedFoundDomainIdentifiers;
@property(nonatomic, setter=_setOperationState:) long long _operationState; // @synthesize _operationState=__operationState;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly, nonatomic) id <SYUserActivityInfo> inputUserActivityInfo; // @synthesize inputUserActivityInfo=_inputUserActivityInfo;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(readonly, nonatomic) __weak id <SYBacklinkMonitorOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_finishProcessingAndNotify;	// IMP=0x0000000000016809
- (void)_showOrHideBacklinkIndicatorForDomainIdentifiers:(id)arg1 linkedIdentifiers:(id)arg2;	// IMP=0x0000000000016553
- (void)_searchBacklinksForInputUserActivity;	// IMP=0x00000000000160fa
- (void)beginProcessing;	// IMP=0x000000000001602d
@property(readonly, nonatomic) long long type;
- (id)description;	// IMP=0x0000000000015f0b
- (id)initWithDelegate:(id)arg1 processingQueue:(id)arg2 inputUserActivityInfo:(id)arg3 processIdentifier:(int)arg4;	// IMP=0x0000000000015e2b

@end
