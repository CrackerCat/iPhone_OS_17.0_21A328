//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesUI/ICTableTextAttachment.h>

@interface ICTableTextAttachment (UI)
- (void)placeView:(id)arg1 withFrame:(struct CGRect)arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;	// IMP=0x0070000000027e60
- (double)availableWidthForTextContainer:(id)arg1;	// IMP=0x0070000000027cb8
- (_Bool)supportsDraggingWithoutSelecting;	// IMP=0x0070000000027cb0
- (Class)attachmentViewControllerClass;	// IMP=0x0070000000027c9f
- (Class)attachmentViewClassForTextContainer:(id)arg1;	// IMP=0x0070000000027c8e
- (struct CGSize)attachmentSizeForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2;	// IMP=0x0070000000027942
- (struct CGSize)attachmentSizeForTextContainer:(id)arg1;	// IMP=0x0070000000027910
@end
