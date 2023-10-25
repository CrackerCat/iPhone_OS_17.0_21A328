//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIButton.h"

@class UIColor;
@protocol UITableConstants;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListDetailAccessoryButton : UIButton
{
    long long _type;	// 128 = 0x80
    id <UITableConstants> _constants;	// 136 = 0x88
    CDUnknownBlockType _actionHandler;	// 144 = 0x90
    UIColor *_accessoryTintColor;	// 152 = 0x98
    UIColor *_accessoryBackgroundColor;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000000a87c86
@property(retain, nonatomic) UIColor *accessoryBackgroundColor; // @synthesize accessoryBackgroundColor=_accessoryBackgroundColor;
@property(retain, nonatomic) UIColor *accessoryTintColor; // @synthesize accessoryTintColor=_accessoryTintColor;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id <UITableConstants> constants; // @synthesize constants=_constants;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)_renderedImage;	// IMP=0x0000000000a87bbc
- (void)_executeActionHandler;	// IMP=0x0000000000a87aca
- (id)init;	// IMP=0x0000000000a8794d

@end
