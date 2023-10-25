//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDLinkReference : NSObject
{
    unsigned long long mLinkIndex;	// 8 = 0x8
    unsigned long long mFirstSheetIndex;	// 16 = 0x10
    unsigned long long mLastSheetIndex;	// 24 = 0x18
}

+ (id)linkReferenceWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;	// IMP=0x0060000000138fa8
- (id)description;	// IMP=0x00000000003a3791
- (_Bool)isWorkbookLevelReference;	// IMP=0x00000000001505bf
- (unsigned long long)hash;	// IMP=0x00000000003a3774
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020e08e
- (_Bool)isEqualToLinkReference:(id)arg1;	// IMP=0x000000000020e10a
- (void)setLinkIndex:(unsigned long long)arg1;	// IMP=0x00000000003a376a
- (unsigned long long)linkIndex;	// IMP=0x0000000000150537
- (void)setLastSheetIndex:(unsigned long long)arg1;	// IMP=0x00000000003a3760
- (unsigned long long)lastSheetIndex;	// IMP=0x00000000001505b5
- (void)setFirstSheetIndex:(unsigned long long)arg1;	// IMP=0x00000000003a3756
- (unsigned long long)firstSheetIndex;	// IMP=0x00000000001505ab
- (id)initWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;	// IMP=0x0000000000138ff3
- (id)init;	// IMP=0x00000000003a3711

@end
