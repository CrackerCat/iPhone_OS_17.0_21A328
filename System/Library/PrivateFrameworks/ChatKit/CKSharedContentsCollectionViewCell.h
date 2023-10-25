//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage, UIImageView, UITapGestureRecognizer;
@protocol CKSharedContentsCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface CKSharedContentsCollectionViewCell
{
    _Bool _editing;	// 8 = 0x8
    UIImage *_previewImage;	// 16 = 0x10
    UIImageView *_checkmarkView;	// 24 = 0x18
    id <CKSharedContentsCollectionViewCellDelegate> _delegate;	// 32 = 0x20
    UITapGestureRecognizer *_tapGestureRecognizer;	// 40 = 0x28
}

+ (id)reuseIdentifier;	// IMP=0x0010000000364d2e
- (void).cxx_destruct;	// IMP=0x000000000036545c
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) __weak id <CKSharedContentsCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000365343
- (void)toggleCheckmarkViewWithEnabled:(_Bool)arg1;	// IMP=0x00000000003651f1
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000036513a
- (void)handleTap:(id)arg1;	// IMP=0x00000000003650ee
- (void)saveAttachment:(id)arg1;	// IMP=0x000000000036509d
- (void)more:(id)arg1;	// IMP=0x000000000036504c
- (void)delete:(id)arg1;	// IMP=0x0000000000364ffb
- (void)copy:(id)arg1;	// IMP=0x0000000000364faa
- (void)layoutSubviews;	// IMP=0x0000000000364e41
- (void)setupTapGestureRecognizer;	// IMP=0x0000000000364d98
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000364d3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
