//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsDebugCheckmarkRowsGroup, UITapGestureRecognizer;

@interface MapsDebugCheckmarkRow
{
    _Bool _checked;	// 8 = 0x8
    UITapGestureRecognizer *_tapGestureRecognizer;	// 16 = 0x10
    CDUnknownBlockType _controlSelectionAction;	// 24 = 0x18
    CDUnknownBlockType _get;	// 32 = 0x20
    id _value;	// 40 = 0x28
    MapsDebugCheckmarkRowsGroup *_rowsGroup;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00100000001cd0c9
@property(readonly, nonatomic) _Bool isChecked; // @synthesize isChecked=_checked;
@property(retain, nonatomic) MapsDebugCheckmarkRowsGroup *rowsGroup; // @synthesize rowsGroup=_rowsGroup;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) CDUnknownBlockType get; // @synthesize get=_get;
- (CDUnknownBlockType)selectionAction;	// IMP=0x00100000001cd00c
- (void)updateConfiguration;	// IMP=0x00100000001ccf2d
- (void)updateChecked;	// IMP=0x00100000001ccd4c
- (void)update;	// IMP=0x00100000001ccd1e
- (void)setCurrentCollectionViewCell:(id)arg1;	// IMP=0x00100000001cccdd
- (void)invalidate;	// IMP=0x00100000001ccc09
- (id)reuseIdentifier;	// IMP=0x00100000001ccbf7
- (id)init;	// IMP=0x00100000001ccab9
- (void)configureCollectionViewCell:(id)arg1;	// IMP=0x0010000000345a8a
- (void)configureCell:(id)arg1;	// IMP=0x0010000000345a1c
- (void)_fireControlSelectionAction;	// IMP=0x0010000000345942
- (void)_didTapLabel:(id)arg1;	// IMP=0x0010000000345901
- (void)_didSelectAccessory:(id)arg1;	// IMP=0x00100000003458ef
- (id)_createAccessoryView;	// IMP=0x0010000000345796
- (void)_configureTapGestureOnLabel:(id)arg1;	// IMP=0x00100000003456b8
- (void)_configureCollectionViewCellForCheckedValue:(id)arg1;	// IMP=0x0010000000345278
- (void)_configureCellForCheckedValue:(id)arg1;	// IMP=0x0010000000345031
- (void)setSelectionAction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000344f4e
@property(readonly, nonatomic) _Bool isDisabled;

@end
