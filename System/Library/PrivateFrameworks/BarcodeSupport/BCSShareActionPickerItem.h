//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BCSActionPickerItem.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BCSShareActionPickerItem : BCSActionPickerItem
{
    NSMutableArray *_itemsToShare;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000005a1b
- (_Bool)canGroupInSubmenu;	// IMP=0x0000000000005a13
- (void)performActionWithFBOptions:(id)arg1;	// IMP=0x00000000000058e1
- (id)icon;	// IMP=0x00000000000058c0
- (id)label;	// IMP=0x00000000000058a1
- (id)initWithAction:(id)arg1;	// IMP=0x00000000000057c0

@end
