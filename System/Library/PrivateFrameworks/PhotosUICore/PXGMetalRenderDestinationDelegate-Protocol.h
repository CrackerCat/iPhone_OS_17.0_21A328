//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXGMetalRenderDestination;

@protocol PXGMetalRenderDestinationDelegate <NSObject>
- (void)renderDestinationRequestRender:(id <PXGMetalRenderDestination>)arg1;
- (void)renderDestinationDeviceDidChange:(id <PXGMetalRenderDestination>)arg1;
- (void)renderDestination:(id <PXGMetalRenderDestination>)arg1 renderSizeWillChange:(struct CGSize)arg2;
@end
