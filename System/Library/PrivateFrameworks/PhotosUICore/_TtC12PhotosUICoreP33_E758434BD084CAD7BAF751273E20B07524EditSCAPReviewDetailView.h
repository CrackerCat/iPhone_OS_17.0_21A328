//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

@interface _TtC12PhotosUICoreP33_E758434BD084CAD7BAF751273E20B07524EditSCAPReviewDetailView : UIView
{
    MISSING_TYPE *viewModel;	// 8 = 0x8
    MISSING_TYPE *asset;	// 16 = 0x10
    MISSING_TYPE *viewingMode;	// 24 = 0x18
    MISSING_TYPE *preset;	// 32 = 0x20
    MISSING_TYPE *resourceLoader;	// 40 = 0x28
    MISSING_TYPE *tungstenView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001dd80
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001dd30
- (void)resourceLoader:(id)arg1 request:(id)arg2 mediaLoadDidFailWithError:(id)arg3;	// IMP=0x000000000001dd20
- (void)resourceLoader:(id)arg1 request:(id)arg2 downloadProgress:(double)arg3;	// IMP=0x000000000001dd10
- (void)resourceLoader:(id)arg1 request:(id)arg2 didCompleteWithResult:(id)arg3;	// IMP=0x000000000001dc90
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001da10

@end
