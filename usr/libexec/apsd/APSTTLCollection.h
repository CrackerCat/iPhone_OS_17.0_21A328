//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol APSTTLCollectionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface APSTTLCollection : NSObject
{
    NSMutableDictionary *_backingStore;	// 8 = 0x8
    double _ttlInSeconds;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_evictionTimer;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    id <APSTTLCollectionDelegate> _delegate;	// 40 = 0x28
}

+ (id)suppressedTTRTopics;	// IMP=0x00400000000205fa
- (void).cxx_destruct;	// IMP=0x00200000000210ed
@property(readonly, nonatomic) double ttlInSeconds; // @synthesize ttlInSeconds=_ttlInSeconds;
@property(nonatomic) __weak id <APSTTLCollectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_performEvictionSweep;	// IMP=0x0010000000020b54
- (void)_stopEvictionTimerIfEmpty;	// IMP=0x0010000000020b18
- (void)_stopEvictionTimer;	// IMP=0x0010000000020ae2
- (void)_startEvictionTimerIfNeeded;	// IMP=0x001000000002092c
- (void)dealloc;	// IMP=0x00100000000208ee
- (void)removeItem:(id)arg1 withFlag:(unsigned int)arg2;	// IMP=0x00100000000207ff
- (void)removeItem:(id)arg1;	// IMP=0x00100000000207eb
- (void)addItem:(id)arg1 withInitialState:(unsigned int)arg2 withTopic:(id)arg3;	// IMP=0x0010000000020732
- (void)addItem:(id)arg1 withInitialState:(unsigned int)arg2;	// IMP=0x0010000000020716
- (void)addItem:(id)arg1;	// IMP=0x00100000000206fb
- (id)initWithQueue:(id)arg1 ttlInSeconds:(double)arg2;	// IMP=0x0010000000020666

@end
