//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SCATMenuPanItemsViewDelegate;

@interface SCATModernMenuGesturePanSheet
{
    id <SCATMenuPanItemsViewDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000b9fc3
@property(nonatomic) __weak id <SCATMenuPanItemsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)menuItemWasActivated:(id)arg1;	// IMP=0x00100000000b9e1b
- (id)makeMenuItemsIfNeeded;	// IMP=0x00100000000b9bee

@end
