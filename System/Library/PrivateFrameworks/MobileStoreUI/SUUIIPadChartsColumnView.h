//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UIViewController;

__attribute__((visibility("hidden")))
@interface SUUIIPadChartsColumnView : UIView
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
    NSArray *_contentViewControllers;	// 40 = 0x28
    long long _selectedViewControllerIndex;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000844a7
@property(copy, nonatomic) NSArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)_addSelectedViewController;	// IMP=0x00000000000842b8
- (void)layoutSubviews;	// IMP=0x00000000000841f6
- (void)setSelectedViewControllerIndex:(long long)arg1;	// IMP=0x0000000000084139
@property(readonly, nonatomic) UIViewController *selectedViewController;

@end
