//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriSetup/NSObject-Protocol.h>

@class AFVoiceInfo, SUICVoiceSelectionPresenter;

@protocol SUICVoiceSelectionPresenterDelegate <NSObject>
- (void)presenter:(SUICVoiceSelectionPresenter *)arg1 didChangeVoiceSelection:(AFVoiceInfo *)arg2;

@optional
- (void)presenter:(SUICVoiceSelectionPresenter *)arg1 didChangeAudioOutputPowerLevel:(float)arg2;
@end
