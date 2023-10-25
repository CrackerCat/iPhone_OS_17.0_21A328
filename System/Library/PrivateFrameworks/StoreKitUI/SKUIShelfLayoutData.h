//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUIShelfLayoutData : NSObject
{
    double _columnSpacing;	// 8 = 0x8
    NSMutableArray *_columnWidths;	// 16 = 0x10
    struct UIEdgeInsets _contentInset;	// 24 = 0x18
    long long _numberOfRows;	// 56 = 0x38
    double *_rowHeights;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000002111d8
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, nonatomic) long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(readonly, nonatomic) double columnSpacing; // @synthesize columnSpacing=_columnSpacing;
@property(readonly, nonatomic) struct CGSize totalContentSize;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;	// IMP=0x0000000000210f23
- (double)rowHeightForIndex:(long long)arg1;	// IMP=0x0000000000210f14
- (void)reloadWithItemCount:(long long)arg1 sizeBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000210dde
@property(readonly, nonatomic) long long numberOfColumns;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000210d6f
- (void)enumerateColumnsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000210c97
- (double)columnWidthForIndex:(long long)arg1;	// IMP=0x0000000000210c3f
- (void)dealloc;	// IMP=0x0000000000210c00
- (id)initWithNumberOfRows:(long long)arg1 columnSpacing:(double)arg2;	// IMP=0x0000000000210b32

@end
