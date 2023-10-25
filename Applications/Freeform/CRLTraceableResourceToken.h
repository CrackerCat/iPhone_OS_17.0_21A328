//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol CRLLogContext, CRLTraceableResourceToken;

@interface CRLTraceableResourceToken : NSObject
{
    _Atomic long long _state;	// 8 = 0x8
    _Atomic unsigned long long _timeout;	// 16 = 0x10
    _Atomic int _timeoutPauseCount;	// 24 = 0x18
    NSArray *_acquireCallStack;	// 32 = 0x20
    NSArray *_copiedAcquireCallStack;	// 40 = 0x28
    double _acquireTime;	// 48 = 0x30
    NSArray *_relinquishCallStack;	// 56 = 0x38
    NSArray *_copiedRelinquishCallStack;	// 64 = 0x40
    double _relinquishTime;	// 72 = 0x48
    NSMutableArray *_breadcrumbs;	// 80 = 0x50
    id <CRLLogContext> _logContext;	// 88 = 0x58
    NSString *_intent;	// 96 = 0x60
    id <CRLTraceableResourceToken> _parent;	// 104 = 0x68
    NSObject *_context;	// 112 = 0x70
}

+ (id)callStackDescriptionWithAction:(id)arg1 callStackSymbols:(id)arg2 index:(id)arg3;	// IMP=0x00200000004e8d6f
+ (id)p_formattedDateStringFromTimeInterval:(double)arg1;	// IMP=0x00100000004e89f0
- (void).cxx_destruct;	// IMP=0x00200000004e94a5
@property(readonly, nonatomic) double relinquishTime; // @synthesize relinquishTime=_relinquishTime;
@property(readonly, nonatomic) double acquireTime; // @synthesize acquireTime=_acquireTime;
@property(readonly, nonatomic) NSObject *context; // @synthesize context=_context;
@property(readonly, nonatomic) id <CRLTraceableResourceToken> parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) NSString *intent; // @synthesize intent=_intent;
@property(readonly, copy) NSString *description;
- (id)parentDescriptionWithIndex:(id)arg1;	// IMP=0x00100000004e901f
- (id)breadcrumbsDescriptionWithIndex:(id)arg1;	// IMP=0x00100000004e8e9b
- (id)acquireCallStackDescriptionWithIndex:(id)arg1;	// IMP=0x00100000004e8ce3
@property(readonly, nonatomic) NSString *relinquishCallStackDescription;
@property(readonly, nonatomic) NSString *acquireCallStackDescription;
- (id)metadataDescriptionWithIndex:(id)arg1;	// IMP=0x00100000004e8aba
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000004e89b5
- (void)setRelinquishCallStackIfNeeded:(id)arg1 relinquishTime:(double)arg2;	// IMP=0x00100000004e878b
- (void)didAcquire;	// IMP=0x00100000004e85ba
@property(readonly, nonatomic) NSArray *relinquishCallStack;
@property(readonly, nonatomic) NSArray *acquireCallStack;
- (void)addBreadcrumb:(id)arg1;	// IMP=0x00100000004e8349
- (void)extendTimeout:(unsigned long long)arg1 updateParent:(_Bool)arg2;	// IMP=0x00100000004e8328
- (void)extendTimeout:(unsigned long long)arg1;	// IMP=0x00100000004e8311
- (void)resumeTimeout;	// IMP=0x00100000004e8109
- (void)pauseTimeout;	// IMP=0x00100000004e80ef
@property(readonly, nonatomic) _Bool isTimeoutPaused;
@property(readonly, nonatomic) unsigned long long timeout;
@property(readonly, nonatomic) long long state;
- (void)dealloc;	// IMP=0x00100000004e7d15
- (id)initWithIntent:(id)arg1 timeout:(unsigned long long)arg2 parent:(id)arg3 context:(id)arg4 acquireCallStack:(id)arg5 acquireTime:(double)arg6 logContext:(id)arg7;	// IMP=0x00100000004e7bc5
- (id)init;	// IMP=0x00100000004e78e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
