//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISearchController.h>

@class NSMutableString, SKUISearchBar, UILabel;
@protocol SKUISearchControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUISearchController : UISearchController
{
    UILabel *_suffixLabel;	// 8 = 0x8
    NSMutableString *_paddingString;	// 16 = 0x10
    SKUISearchBar *_searchBar;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002a28e0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000002a282e
@property(readonly, nonatomic) SKUISearchBar *searchBar;
- (void)setActive:(_Bool)arg1;	// IMP=0x00000000002a255e
- (void)_setSuffix:(id)arg1;	// IMP=0x00000000002a1c09

// Remaining properties
@property(nonatomic) __weak id <SKUISearchControllerDelegate> delegate; // @dynamic delegate;

@end
