//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaServices/MSVSegmentedCodingPackage.h>

@class MPNowPlayingContentItem, NSDate, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _MPCPlaybackSessionArchive : MSVSegmentedCodingPackage
{
    MPNowPlayingContentItem *_contentItem;	// 8 = 0x8
    UIImage *_artworkImage;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSDate *_lastModifiedDate;	// 32 = 0x20
}

+ (id)packageTypeIdentifier;	// IMP=0x00600000002bb48a
- (void).cxx_destruct;	// IMP=0x00000000002bb437
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property(copy, nonatomic) MPNowPlayingContentItem *contentItem; // @synthesize contentItem=_contentItem;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002bb138
- (unsigned long long)hash;	// IMP=0x00000000002bb0f4
- (_Bool)writeWithError:(id *)arg1;	// IMP=0x00000000002b9654
- (_Bool)saveWithError:(id *)arg1;	// IMP=0x00000000002b950b
- (id)description;	// IMP=0x00000000002b94c3
- (id)initWithURL:(id)arg1 identifier:(id)arg2;	// IMP=0x00000000002b9369
- (id)initWithURL:(id)arg1;	// IMP=0x00000000002b92a6

@end
