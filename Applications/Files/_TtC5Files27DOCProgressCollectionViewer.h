//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC5Files27DOCProgressCollectionViewer
{
    MISSING_TYPE *listViewController;	// 8 = 0x8
    MISSING_TYPE *adaptablePresenter;	// 16 = 0x10
    MISSING_TYPE *configuration;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_dismissButtonItem;	// 32 = 0x20
    MISSING_TYPE *listFittingHeightKVO;	// 40 = 0x28
    MISSING_TYPE *isUpdatingPreferredContentSize;	// 48 = 0x30
    MISSING_TYPE *listFittingHeight;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0040000000219d00
- (id)initWithRootViewController:(id)arg1;	// IMP=0x0010000000219c50
- (id)init;	// IMP=0x0010000000219c20
@property(nonatomic) struct CGSize preferredContentSize;
@property(nonatomic) long long modalPresentationStyle;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000219a20
- (void)toggleEditTapped;	// IMP=0x0010000000219720
@property(nonatomic) _Bool editing;
- (_Bool)isEditing;	// IMP=0x0010000000219360
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000219310
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000219210

@end
