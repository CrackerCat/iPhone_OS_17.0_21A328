//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class MISSING_TYPE, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI32RemoveDownloadShareSheetActivity : UIActivity
{
    MISSING_TYPE *assetClient;	// 8 = 0x8
    MISSING_TYPE *workoutIdentifier;	// 48 = 0x30
}

+ (long long)activityCategory;	// IMP=0x0040000000919b40
- (void).cxx_destruct;	// IMP=0x000000000091a0f0
- (id)init;	// IMP=0x000000000091a090
- (void)performActivity;	// IMP=0x000000000091a060
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x0000000000919eb0
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x0000000000919d30
@property(nonatomic, readonly) UIImage *activityImage;
@property(nonatomic, readonly) NSString *activityTitle;
@property(nonatomic, readonly) NSString *activityType;

@end
