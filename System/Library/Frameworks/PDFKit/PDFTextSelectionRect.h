//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextSelectionRect.h>

@class PDFPage;

__attribute__((visibility("hidden")))
@interface PDFTextSelectionRect : UITextSelectionRect
{
    PDFPage *_page;	// 8 = 0x8
    struct CGRect _rect;	// 16 = 0x10
    _Bool _isStartingRect;	// 48 = 0x30
    _Bool _isEndingRect;	// 49 = 0x31
}

- (void).cxx_destruct;	// IMP=0x0000000000021b76
- (id)description;	// IMP=0x0000000000021a71
- (void)setIsEndingRect:(_Bool)arg1;	// IMP=0x0000000000021a61
- (void)setIsStartingRect:(_Bool)arg1;	// IMP=0x0000000000021a51
- (_Bool)isVertical;	// IMP=0x0000000000021a49
- (_Bool)containsEnd;	// IMP=0x0000000000021a39
- (_Bool)containsStart;	// IMP=0x0000000000021a29
- (long long)writingDirection;	// IMP=0x0000000000021a1c
- (struct CGRect)rect;	// IMP=0x00000000000219fc
- (id)initWithRect:(struct CGRect)arg1 onPage:(id)arg2;	// IMP=0x0000000000021971

@end
