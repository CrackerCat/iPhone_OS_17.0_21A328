//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKAnnotationView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC15_MapKit_SwiftUI21SwiftUIAnnotationView : MKAnnotationView
{
    MISSING_TYPE *wrappedView;	// 8 = 0x8
    MISSING_TYPE *contentAnchorPoint;	// 16 = 0x10
    MISSING_TYPE *hostView;	// 32 = 0x20
}

+ (_Bool)_wantsViewBasedPositioning;	// IMP=0x00400000000baff0
- (void).cxx_destruct;	// IMP=0x00000000000bb050
@property(nonatomic, readonly) struct UIEdgeInsets safeAreaInsets;
- (void)prepareForReuse;	// IMP=0x00000000000baf70
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000baf20
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000baed0

@end
