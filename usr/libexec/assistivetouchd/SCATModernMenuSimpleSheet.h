//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SCATModernMenuSimpleSheet
{
    NSArray *_storedMenuItems;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000060f40
@property(retain, nonatomic) NSArray *storedMenuItems; // @synthesize storedMenuItems=_storedMenuItems;
- (id)makeMenuItemsIfNeeded;	// IMP=0x0010000000060f09
- (id)initWithMenu:(id)arg1 menuItems:(id)arg2;	// IMP=0x0010000000060e97
- (id)initWithMenu:(id)arg1 menuItemDictionaryArray:(id)arg2;	// IMP=0x0010000000060b5e

@end
