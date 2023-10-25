//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString;

@protocol UIDictationTipRecordingProtocol <NSObject>
- (void)finalizeRecordedText;
- (void)recordDictationTipText:(NSString *)arg1;
- (void)startRecodingText:(NSString *)arg1;
- (void)resetHandler;
@end
