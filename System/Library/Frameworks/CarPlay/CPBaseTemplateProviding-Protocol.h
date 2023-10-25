//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlay/NSObject-Protocol.h>

@class CPBarButton, NSArray, NSString, NSUUID, UIImage;

@protocol CPBaseTemplateProviding <NSObject>
- (void)setBarButton:(NSUUID *)arg1 title:(NSString *)arg2;
- (void)setBarButton:(NSUUID *)arg1 image:(UIImage *)arg2;
- (void)setControl:(NSUUID *)arg1 selected:(_Bool)arg2;
- (void)setControl:(NSUUID *)arg1 enabled:(_Bool)arg2;
- (void)setHostBackButton:(CPBarButton *)arg1;
- (void)setTrailingNavigationBarButtons:(NSArray *)arg1;
- (void)setLeadingNavigationBarButtons:(NSArray *)arg1;
@end
