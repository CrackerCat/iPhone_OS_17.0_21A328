//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLCGImage
{
    struct CGImage *mCGImage;	// 8 = 0x8
    long long mOrientation;	// 16 = 0x10
    double mScale;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x0020000000518947
- (long long)imageOrientation;	// IMP=0x0010000000518936
- (double)scale;	// IMP=0x0010000000518907
- (struct CGSize)size;	// IMP=0x0010000000518836
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;	// IMP=0x0010000000518819
- (struct CGImage *)CGImage;	// IMP=0x00100000005187fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000005187ae
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x001000000051871e

@end
