//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class OKProducerPreset, PUSlideshowThemeViewController;

@protocol PUSlideshowThemeDelegate <NSObject>

@optional
- (void)themePickerDidFinish:(PUSlideshowThemeViewController *)arg1;
- (void)themePicker:(PUSlideshowThemeViewController *)arg1 didPickPreset:(OKProducerPreset *)arg2;
@end
