//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionView.h>

@protocol VideosExtrasCarouselCollectionViewDelegate;

__attribute__((visibility("hidden")))
@interface VideosExtrasCarouselCollectionView : UICollectionView
{
    id <VideosExtrasCarouselCollectionViewDelegate> _carouselCollectionViewDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002b0ef2
@property(nonatomic) __weak id <VideosExtrasCarouselCollectionViewDelegate> carouselCollectionViewDelegate; // @synthesize carouselCollectionViewDelegate=_carouselCollectionViewDelegate;
- (void)didAddSubview:(id)arg1;	// IMP=0x00000000002b0e43

@end
