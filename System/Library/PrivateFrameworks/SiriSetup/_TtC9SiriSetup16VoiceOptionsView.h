//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol SUICVoiceSelectionEventHandling, SUICVoiceSelectionViewModelProviding;

__attribute__((visibility("hidden")))
@interface _TtC9SiriSetup16VoiceOptionsView : NSObject
{
    MISSING_TYPE *tableView;	// 8 = 0x8
    MISSING_TYPE *viewModel;	// 16 = 0x10
    MISSING_TYPE *sectionReuseIdentifier;	// 24 = 0x18
    MISSING_TYPE *cellReuseIdentifier;	// 40 = 0x28
    MISSING_TYPE *voiceSelectionViewModelProvider;	// 56 = 0x38
    MISSING_TYPE *voiceSelectionEventHandler;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_tableViewDataSource;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000c320
- (void)voiceSelectionViewModelDidChange;	// IMP=0x000000000000bf20
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000000be30
- (id)init;	// IMP=0x000000000000be10
@property(nonatomic, retain) id <SUICVoiceSelectionEventHandling> voiceSelectionEventHandler; // @synthesize voiceSelectionEventHandler;
@property(nonatomic, retain) id <SUICVoiceSelectionViewModelProviding> voiceSelectionViewModelProvider; // @synthesize voiceSelectionViewModelProvider;

@end
