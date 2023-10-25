//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, PUPhotoEditToolPickerSpec, PUViewControllerSpec, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotoEditToolPickerController : UIViewController
{
    long long _layoutDirection;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    NSArray *_toolButtons;	// 24 = 0x18
    long long _selectedToolTag;	// 32 = 0x20
    PUViewControllerSpec *_parentSpec;	// 40 = 0x28
    NSArray *_toolButtonConstraints;	// 48 = 0x30
    UIView *_selectionIndicatorView;	// 56 = 0x38
    NSArray *_selectionIndicatorConstraints;	// 64 = 0x40
    double _interToolSpacing;	// 72 = 0x48
    PUPhotoEditToolPickerSpec *_toolPickerSpec;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000307ce6
@property(retain, nonatomic) PUPhotoEditToolPickerSpec *toolPickerSpec; // @synthesize toolPickerSpec=_toolPickerSpec;
@property(nonatomic) double interToolSpacing; // @synthesize interToolSpacing=_interToolSpacing;
@property(retain, nonatomic) NSArray *selectionIndicatorConstraints; // @synthesize selectionIndicatorConstraints=_selectionIndicatorConstraints;
@property(retain, nonatomic) UIView *selectionIndicatorView; // @synthesize selectionIndicatorView=_selectionIndicatorView;
@property(retain, nonatomic) NSArray *toolButtonConstraints; // @synthesize toolButtonConstraints=_toolButtonConstraints;
@property(retain, nonatomic) PUViewControllerSpec *parentSpec; // @synthesize parentSpec=_parentSpec;
@property(nonatomic) long long selectedToolTag; // @synthesize selectedToolTag=_selectedToolTag;
@property(copy, nonatomic) NSArray *toolButtons; // @synthesize toolButtons=_toolButtons;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000307a16
- (void)updateViewConstraints;	// IMP=0x0000000000307265
- (void)viewDidLoad;	// IMP=0x0000000000306d5a
- (void)loadView;	// IMP=0x0000000000306cde
- (id)initWithLayoutDirection:(long long)arg1 style:(long long)arg2;	// IMP=0x0000000000306c47

@end
