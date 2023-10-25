//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNCardSharedProfileCellView, CNContact, CNSharedProfileStateOracle;
@protocol CNCardSharedProfileCellActionDelegate;

__attribute__((visibility("hidden")))
@interface CNCardSharedProfileCell
{
    CNSharedProfileStateOracle *_sharedProfileStateOracle;	// 8 = 0x8
    id <CNCardSharedProfileCellActionDelegate> _actionDelegate;	// 16 = 0x10
    CNCardSharedProfileCellView *_snapView;	// 24 = 0x18
    CNContact *_contact;	// 32 = 0x20
}

+ (_Bool)shouldIndentWhileEditing;	// IMP=0x001000000025719d
- (void).cxx_destruct;	// IMP=0x000000000025714c
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) CNCardSharedProfileCellView *snapView; // @synthesize snapView=_snapView;
@property(nonatomic) __weak id <CNCardSharedProfileCellActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) CNSharedProfileStateOracle *sharedProfileStateOracle; // @synthesize sharedProfileStateOracle=_sharedProfileStateOracle;
- (void)viewDidSelectFallbackAction;	// IMP=0x0000000000257098
- (void)viewDidSelectDisplayPreference:(long long)arg1;	// IMP=0x0000000000256ff2
- (void)setLabelTextAttributes:(id)arg1;	// IMP=0x0000000000256f0a
- (void)updateConstraints;	// IMP=0x0000000000256e9d
- (id)variableConstraintsForHorizontalLayout;	// IMP=0x0000000000256e90
- (id)constantConstraintsForHorizontalLayout;	// IMP=0x0000000000256e83
- (id)constantConstraintsForVerticalLayout;	// IMP=0x0000000000256e76
- (id)variableConstraints;	// IMP=0x0000000000256a3e
- (void)updateViewsWithCardGroupItem:(id)arg1;	// IMP=0x0000000000256860
- (void)setCardGroupItem:(id)arg1;	// IMP=0x0000000000256735
- (_Bool)allowsCellSelection;	// IMP=0x000000000025672d
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000002566df

@end
