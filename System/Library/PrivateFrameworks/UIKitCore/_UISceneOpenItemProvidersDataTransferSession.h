//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PBItemCollection, _UIDataTransferMonitor;
@protocol _DUIDragContinuation, _UISceneOpenItemProvidersDataTransferSessionDelegate;

__attribute__((visibility("hidden")))
@interface _UISceneOpenItemProvidersDataTransferSession : NSObject
{
    id <_UISceneOpenItemProvidersDataTransferSessionDelegate> _delegate;	// 8 = 0x8
    _UIDataTransferMonitor *_monitor;	// 16 = 0x10
    NSArray *_itemProviders;	// 24 = 0x18
    PBItemCollection *_itemCollection;	// 32 = 0x20
    id <_DUIDragContinuation> _continuation;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000e0cdd6
@property(retain, nonatomic) id <_DUIDragContinuation> continuation; // @synthesize continuation=_continuation;
@property(retain, nonatomic) PBItemCollection *itemCollection; // @synthesize itemCollection=_itemCollection;
@property(retain, nonatomic) NSArray *itemProviders; // @synthesize itemProviders=_itemProviders;
@property(retain, nonatomic) _UIDataTransferMonitor *monitor; // @synthesize monitor=_monitor;
@property(nonatomic) __weak id <_UISceneOpenItemProvidersDataTransferSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dataTransferMonitorFinishedTransfers:(id)arg1;	// IMP=0x0000000000e0ccf7
- (void)dataTransferMonitorBeganTransfers:(id)arg1;	// IMP=0x0000000000e0ccab
- (void)didFinishSendingRequests;	// IMP=0x0000000000e0cbd7
- (id)initWithItemProviders:(id)arg1 itemCollection:(id)arg2 continuation:(id)arg3;	// IMP=0x0000000000e0c9ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
