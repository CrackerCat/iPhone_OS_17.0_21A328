//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AXMLayoutColumn
{
    NSMutableArray *_cells;	// 8 = 0x8
}

+ (id)column:(id)arg1;	// IMP=0x006000000003fe62
- (void).cxx_destruct;	// IMP=0x000000000003ffa4
- (id)cells;	// IMP=0x000000000003ff8f
- (void)addCell:(id)arg1;	// IMP=0x000000000003ff72
- (struct CGRect)normalizedFrame;	// IMP=0x000000000003ff27
- (struct CGRect)frame;	// IMP=0x000000000003fedc

@end
