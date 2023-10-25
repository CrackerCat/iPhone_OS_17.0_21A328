//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BannerKit/NSObject-Protocol.h>
#import <BannerKit/NSSecureCoding-Protocol.h>

@class UIImage;

@protocol BNImageProviding <NSObject, NSSecureCoding>
@property(readonly, copy, nonatomic) UIImage *image;
@property(readonly, nonatomic, getter=isImageProvider) _Bool imageProvider;
@end
