//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEOObserverHashTable, GEOPublisher, NSArray, NSAttributedString, NSString, PlaceContextViewModel, UIColor, UIFont, UIView;

@protocol TwoLinesContentViewModel <NSObject>
@property(readonly, nonatomic) NSString *axIdentifier;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(readonly, nonatomic) UIFont *titleTextFont;
@property(retain, nonatomic) GEOPublisher *publisher;
@property(nonatomic) _Bool shouldEnableGrayscaleHighlighting;
@property(readonly, nonatomic) NSArray *cellAccessories;
@property(readonly, nonatomic, getter=hasVibrantBackground) _Bool vibrantBackground;
@property(readonly, nonatomic) _Bool allowsSubtitleWrapping;
@property(retain, nonatomic) UIColor *leadingImageBackgroundColor;
@property(readonly, nonatomic) UIColor *leftImageTintColor;
@property(retain, nonatomic) PlaceContextViewModel *placeContextViewModel;
@property(retain, nonatomic) UIView *customAccessoryView;
@property(readonly, nonatomic) GEOObserverHashTable *observers;
@property(retain, nonatomic) NSString *debugString;
@property(readonly, nonatomic) CDUnknownBlockType personalizedItemForQuickActionMenuCreator;
@property(readonly, nonatomic) _Bool showBadgeView;
@property(readonly, nonatomic) struct CGSize imageSize;
@property(readonly, nonatomic) unsigned long long imageShadowStyle;
@property(readonly, nonatomic) unsigned long long imageStyle;
@property(readonly, nonatomic) NSArray *subtitleHighlightRanges;
@property(readonly, nonatomic) NSAttributedString *attributedSubtitleText;
@property(readonly, nonatomic) NSString *subtitleText;
@property(retain, nonatomic) NSArray *titleHighlightRanges;
@property(readonly, nonatomic) NSString *titleText;
- (void)fetchImageForScreenScale:(double)arg1 withCompletionHandler:(void (^)(UIImage *, _Bool))arg2;
@end
