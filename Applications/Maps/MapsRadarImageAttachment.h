//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, UIImage;

@interface MapsRadarImageAttachment
{
    NSURL *_temporaryFileURL;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
}

+ (id)attachmentWithFileName:(id)arg1 image:(id)arg2;	// IMP=0x00400000008fd5f0
- (void).cxx_destruct;	// IMP=0x00200000008fde69
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)_maps_buildDescriptionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000008fdde3
- (id)debugDescription;	// IMP=0x00100000008fdb97
- (id)description;	// IMP=0x00100000008fd94b
- (id)temporaryFileURL;	// IMP=0x00100000008fd65e
- (id)initWithFileName:(id)arg1 image:(id)arg2;	// IMP=0x00100000008fd40a

@end
