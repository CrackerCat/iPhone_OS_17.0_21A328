//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFItem, HUFaceRecognitionPersonEditorViewController;
@protocol HFPersonLikeItem;

@protocol HUFaceRecognitionPersonEditorViewControllerDelegate <NSObject>
- (void)personEditorViewController:(HUFaceRecognitionPersonEditorViewController *)arg1 didUpdateItem:(HFItem<HFPersonLikeItem> *)arg2;
@end
