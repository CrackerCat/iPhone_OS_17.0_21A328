//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, NSURL, UIActivityViewController;

@protocol UIActivityItemSuggestionsSource <NSObject>

@optional
- (NSData *)activityViewControllerSuggestionFaceRecognitionData:(UIActivityViewController *)arg1;
- (NSString *)activityViewControllerSuggestionAssetLocalIdentifier:(UIActivityViewController *)arg1;
- (NSURL *)activityViewControllerSuggestionFileURL:(UIActivityViewController *)arg1;
@end
