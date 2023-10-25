//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@protocol DDParsecHostVCInterface;

__attribute__((visibility("hidden")))
@interface DDParsecRemoteCollectionViewController : _UIRemoteViewController
{
    _Bool _receivedInteractionDidFinish;	// 8 = 0x8
    id <DDParsecHostVCInterface> _hostSideDelegate;	// 16 = 0x10
}

+ (id)exportedInterface;	// IMP=0x001000000001d45e
+ (id)serviceViewControllerInterface;	// IMP=0x001000000001d44f
- (void).cxx_destruct;	// IMP=0x000000000001da63
@property __weak id <DDParsecHostVCInterface> hostSideDelegate; // @synthesize hostSideDelegate=_hostSideDelegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000001da2e
- (void)remoteVCIsReady;	// IMP=0x000000000001d9f1
- (void)performClientTextQueryWithTerm:(id)arg1 queryId:(unsigned long long)arg2 sessionId:(id)arg3 userAgent:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000001d91f
- (void)performClientQueryWithServerAccessPermitted:(_Bool)arg1 localSearchPermitted:(_Bool)arg2;	// IMP=0x000000000001d8d0
- (void)openTrailerPunchout:(id)arg1;	// IMP=0x000000000001d867
- (void)getStatusBarHidden:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d7fe
- (void)openParsecURL:(id)arg1;	// IMP=0x000000000001d795
- (void)showingFTE:(_Bool)arg1;	// IMP=0x000000000001d6f6
- (void)showingErrorView:(_Bool)arg1;	// IMP=0x000000000001d657
- (void)loadReportAnIssueImage:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d5ee
- (void)reportAnIssueWithReportIdentifier:(id)arg1 sfReportData:(id)arg2;	// IMP=0x000000000001d563
- (void)interactionEndedWithPunchout:(_Bool)arg1;	// IMP=0x000000000001d4fc
- (void)interactionEnded;	// IMP=0x000000000001d4e8
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x000000000001d46a
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000001d447

@end
