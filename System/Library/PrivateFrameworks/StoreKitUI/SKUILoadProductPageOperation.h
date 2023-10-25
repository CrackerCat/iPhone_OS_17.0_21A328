//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSURLRequest, SKUIClientContext, SSMetricsPageEvent;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUILoadProductPageOperation : NSOperation
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    long long _itemID;	// 24 = 0x18
    SSMetricsPageEvent *_metricsPageEvent;	// 32 = 0x20
    CDUnknownBlockType _outputBlock;	// 40 = 0x28
    NSURLRequest *_urlRequest;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000289f19
- (void)main;	// IMP=0x000000000028984c
@property(copy) CDUnknownBlockType outputBlock;
@property(readonly) SSMetricsPageEvent *metricsPageEvent;
- (id)initWithProductPageURLRequest:(id)arg1 clientContext:(id)arg2;	// IMP=0x00000000002894a3
- (id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2;	// IMP=0x0000000000289439
- (id)_initSKUILoadProductPageOperation;	// IMP=0x0000000000289397

@end
