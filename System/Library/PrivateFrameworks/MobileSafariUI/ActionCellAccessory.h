//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICellAccessoryCustomView.h>

@class UIImageSymbolConfiguration;

__attribute__((visibility("hidden")))
@interface ActionCellAccessory : UICellAccessoryCustomView
{
    CDUnknownBlockType _visibilityProvider;	// 8 = 0x8
    UIImageSymbolConfiguration *_preferredSymbolConfiguration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001cbb7c
@property(retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration; // @synthesize preferredSymbolConfiguration=_preferredSymbolConfiguration;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001cbaf3
- (void)applyContentConfiguration:(id)arg1 forState:(id)arg2;	// IMP=0x00000000001cb96f
- (id)initWithAction:(id)arg1 visibilityProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000001cb81d
- (id)initWithAction:(id)arg1;	// IMP=0x00000000001cb7fc

@end
