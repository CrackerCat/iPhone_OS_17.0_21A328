//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AvatarUI/AVTTaskScheduler-Protocol.h>

@class AVTStickerTask, NSArray, NSString;

@protocol AVTStickerTaskScheduler <AVTTaskScheduler>
- (void)setVisibleIndexPaths:(NSArray *)arg1;
- (void)setSelectedAvatarRecordIdentifier:(NSString *)arg1;
- (void)cancelStickerSheetTasksForAvatarRecordIdentifier:(NSString *)arg1;
- (void)cancelPickerTask:(void (^)(void (^)(void)))arg1 avatarRecordIdentifier:(NSString *)arg2;
- (void)lowerStickerPickerTaskPriority:(void (^)(void (^)(void)))arg1 avatarRecordIdentifier:(NSString *)arg2;
- (void)scheduleStickerTask:(AVTStickerTask *)arg1;
@end
