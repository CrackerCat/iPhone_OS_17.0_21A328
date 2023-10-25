//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, CSOSTransaction, NSArray, NSData, NSNumber, NSString, SLBertClassifier, SLODLDInputContext, SLODLDProcessor, SLODLDProcessorResult;
@protocol OS_dispatch_queue;

@interface CSAttSiriNLDAClassifierNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _useLegacyPath;	// 9 = 0x9
    unsigned long long _type;	// 16 = 0x10
    NSArray *_requiredNodes;	// 24 = 0x18
    NSString *_mhId;	// 32 = 0x20
    CSAsset *_prefetchedAsset;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    SLBertClassifier *_bertModel;	// 56 = 0x38
    SLODLDProcessor *_odldProcessor;	// 64 = 0x40
    SLODLDInputContext *_inputCtx;	// 72 = 0x48
    NSNumber *_cachedInitialAnchor;	// 80 = 0x50
    NSData *_cachedEmbedding;	// 88 = 0x58
    NSArray *_cachedTokens;	// 96 = 0x60
    SLODLDProcessorResult *_prevResult;	// 104 = 0x68
    CSOSTransaction *_osTransaction;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000010d2da
@property(retain, nonatomic) CSOSTransaction *osTransaction; // @synthesize osTransaction=_osTransaction;
@property(retain, nonatomic) SLODLDProcessorResult *prevResult; // @synthesize prevResult=_prevResult;
@property(retain, nonatomic) NSArray *cachedTokens; // @synthesize cachedTokens=_cachedTokens;
@property(retain, nonatomic) NSData *cachedEmbedding; // @synthesize cachedEmbedding=_cachedEmbedding;
@property(retain, nonatomic) NSNumber *cachedInitialAnchor; // @synthesize cachedInitialAnchor=_cachedInitialAnchor;
@property(retain, nonatomic) SLODLDInputContext *inputCtx; // @synthesize inputCtx=_inputCtx;
@property(nonatomic) _Bool useLegacyPath; // @synthesize useLegacyPath=_useLegacyPath;
@property(retain, nonatomic) SLODLDProcessor *odldProcessor; // @synthesize odldProcessor=_odldProcessor;
@property(retain, nonatomic) SLBertClassifier *bertModel; // @synthesize bertModel=_bertModel;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSAsset *prefetchedAsset; // @synthesize prefetchedAsset=_prefetchedAsset;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)_handleAnnounceNotificationIfNeeded:(id)arg1;	// IMP=0x001000000010d0c7
- (id)_getInitialAnchorForInputOrigin:(id)arg1;	// IMP=0x001000000010d07f
- (void)_updateContextForMitigationDecision:(_Bool)arg1;	// IMP=0x001000000010ce60
- (id)_createInputContextForRecordCtx:(id)arg1;	// IMP=0x001000000010cd86
- (void)_logMHOdldFalseTriggerMitigationScores:(id)arg1 withOdldScores:(float)arg2 withOdldScoreThreshold:(float)arg3 withSuccess:(_Bool)arg4;	// IMP=0x001000000010cd80
- (void)informFinalMitigationDecision:(_Bool)arg1;	// IMP=0x001000000010cd32
- (void)_releaseNldaProcessingTransaction;	// IMP=0x001000000010cc47
- (void)_holdTransactionForNldaProcessing;	// IMP=0x001000000010cb87
- (_Bool)_shouldUseLegacyPath:(id)arg1;	// IMP=0x001000000010ca23
- (_Bool)_isRequestBPWithCtx:(id)arg1;	// IMP=0x001000000010c928
- (id)processSpeechPackageSync:(id)arg1;	// IMP=0x001000000010c82a
- (void)pause;	// IMP=0x001000000010c70a
- (void)stop;	// IMP=0x001000000010c6bf
- (void)startWithRecordContext:(id)arg1;	// IMP=0x001000000010c5ba
- (void)start;	// IMP=0x001000000010c5b4
- (void)removeReceiver:(id)arg1;	// IMP=0x001000000010c5ae
- (void)addReceiver:(id)arg1;	// IMP=0x001000000010c5a8
- (id)init;	// IMP=0x001000000010c491

// Remaining properties
@property(nonatomic) __weak CSAttSiriController *attSiriController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
