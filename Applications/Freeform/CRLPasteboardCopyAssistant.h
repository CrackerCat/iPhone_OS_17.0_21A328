//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLPasteboard;

@interface CRLPasteboardCopyAssistant
{
    CRLPasteboard *_pasteboard;	// 8 = 0x8
    _Bool _didAttemptToCopy;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002e284a
- (void)copyToPasteboardIsSmartCopy:(_Bool)arg1;	// IMP=0x00100000002e256f
- (void)copyToPasteboard;	// IMP=0x00100000002e255b
- (void)loadData;	// IMP=0x00100000002e22e7
- (id)initWithPasteboard:(id)arg1 sourceContext:(id)arg2;	// IMP=0x00100000002e1fd4

@end
