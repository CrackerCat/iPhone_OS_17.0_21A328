//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString;

@interface RAPWebBundleDataDrivenViewController
{
    NSString *_title;	// 8 = 0x8
    id _data;	// 16 = 0x10
    CDUnknownBlockType _replyHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000007c930d
- (void)macFooterViewBackButtonTapped:(id)arg1;	// IMP=0x00100000007c92fb
- (void)macFooterViewRightButtonTapped:(id)arg1;	// IMP=0x00100000007c92e9
- (MISSING_TYPE *)macFooterViewLeftButtonTapped: /* Error: Ran out of types for this method. */;	// IMP=0x00100000007c92d7
- (void)didReceiveMessageFromUserContentController:(id)arg1 message:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000007c90f4
- (void)setupViews;	// IMP=0x00100000007c8f45
- (void)_submit;	// IMP=0x00100000007c8dcb
- (void)_dismiss;	// IMP=0x00100000007c8d63
- (void)dismissModal;	// IMP=0x00100000007c8ced
- (void)viewDidLoad;	// IMP=0x00100000007c8cac
- (id)initWithEntryPoint:(id)arg1 report:(id)arg2 title:(id)arg3 data:(id)arg4 replyHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000007c8bb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
