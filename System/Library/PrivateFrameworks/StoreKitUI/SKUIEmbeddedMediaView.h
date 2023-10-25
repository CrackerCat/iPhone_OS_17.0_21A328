//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class MPMoviePlayerController, NSString, UIImage, UIImageView;
@protocol SKUIEmbeddedMediaViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIEmbeddedMediaView : UIControl
{
    id <SKUIEmbeddedMediaViewDelegate> _delegate;	// 8 = 0x8
    long long _mediaType;	// 16 = 0x10
    NSString *_mediaURLString;	// 24 = 0x18
    MPMoviePlayerController *_moviePlayer;	// 32 = 0x20
    UIImageView *_playerDecorationView;	// 40 = 0x28
    UIImageView *_thumbnailReflectionView;	// 48 = 0x30
    UIImageView *_thumbnailView;	// 56 = 0x38
    _Bool _usingInlinePlayback;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000327629
@property(copy, nonatomic) NSString *mediaURLString; // @synthesize mediaURLString=_mediaURLString;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) __weak id <SKUIEmbeddedMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_thumbnailView;	// IMP=0x0000000000327517
- (void)_tearDownMoviePlayer;	// IMP=0x0000000000327406
- (struct CGSize)_sizeToFitImageSize:(struct CGSize)arg1 bounds:(struct CGRect)arg2;	// IMP=0x0000000000327382
- (void)_sendPlaybackStateChanged;	// IMP=0x0000000000327312
- (id)_newMoviePlayerControllerWithURL:(id)arg1;	// IMP=0x00000000003271f1
- (void)_playbackStateChanged:(id)arg1;	// IMP=0x00000000003271df
- (void)_didFinishPlayback:(id)arg1;	// IMP=0x0000000000327176
- (void)_didExitFullscreen:(id)arg1;	// IMP=0x0000000000327136
- (void)didMoveToWindow;	// IMP=0x00000000003270a9
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000326fe4
- (void)layoutSubviews;	// IMP=0x0000000000326a66
@property(retain, nonatomic) UIImage *thumbnailImage;
@property(nonatomic) long long thumbnailContentMode;
@property(nonatomic) _Bool showsThumbnailReflection;
@property(readonly, nonatomic) long long playbackState;
- (void)endPlaybackAnimated:(_Bool)arg1;	// IMP=0x000000000032619e
- (void)beginPlaybackAnimated:(_Bool)arg1;	// IMP=0x0000000000326021
- (void)beginInlinePlaybackWithURL:(id)arg1;	// IMP=0x0000000000325ef3
- (void)dealloc;	// IMP=0x0000000000325e11

@end
