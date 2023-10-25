//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class PUAssetReference, PUOneUpSelectionIndicatorTileViewController;

@protocol _PUOneUpSelectionIndicatorCompatibleManager <NSObject>
- (_Bool)pu_isAssetReferenceSelected:(PUAssetReference *)arg1;
- (void)pu_unregisterSelectionIndicatorObserver:(PUOneUpSelectionIndicatorTileViewController *)arg1;
- (void)pu_registerSelectionIndicatorObserver:(PUOneUpSelectionIndicatorTileViewController *)arg1;
@end
