//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionView.h>

@interface CarReloadWithCompletionCollectionView : UICollectionView
{
    CDUnknownBlockType _reloadDataCompletion;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000d17c94
@property(copy, nonatomic) CDUnknownBlockType reloadDataCompletion; // @synthesize reloadDataCompletion=_reloadDataCompletion;
- (_Bool)_shouldRunCompletion;	// IMP=0x0010000000d17c0d
- (void)didMoveToWindow;	// IMP=0x0010000000d17ba3
- (void)layoutSubviews;	// IMP=0x0010000000d17a66
- (void)reloadDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000d179b8

@end
