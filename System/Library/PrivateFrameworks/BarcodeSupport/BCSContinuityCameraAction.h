//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BCSAction.h"

@class NSObject, RPRemoteDisplaySession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BCSContinuityCameraAction : BCSAction
{
    RPRemoteDisplaySession *_remoteDisplaySession;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_remoteDisplaySessionQueue;	// 16 = 0x10
    _Bool _connecting;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000027d90
@property(nonatomic, getter=isConnecting) _Bool connecting; // @synthesize connecting=_connecting;
- (void)performDefaultActionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002727c
- (void)performDefaultAction;	// IMP=0x000000000002725d
- (id)actionPickerItems;	// IMP=0x0000000000027195
- (id)actionIcon;	// IMP=0x0000000000027174
- (id)shortDescription;	// IMP=0x0000000000027162
- (id)localizedDefaultActionDescription;	// IMP=0x000000000002711d
- (_Bool)isContinuityCameraAction;	// IMP=0x0000000000027115
- (id)initWithData:(id)arg1 codePayload:(id)arg2;	// IMP=0x0000000000026fe8

@end
