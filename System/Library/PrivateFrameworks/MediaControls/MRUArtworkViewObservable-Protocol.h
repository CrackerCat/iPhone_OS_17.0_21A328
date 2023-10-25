//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/NSObject-Protocol.h>

@class UIImage;
@protocol MRUArtworkViewObserver;

@protocol MRUArtworkViewObservable <NSObject>
@property(readonly, nonatomic) UIImage *artworkImage;
- (void)removeObserver:(id <MRUArtworkViewObserver>)arg1;
- (void)addObserver:(id <MRUArtworkViewObserver>)arg1;
@end
