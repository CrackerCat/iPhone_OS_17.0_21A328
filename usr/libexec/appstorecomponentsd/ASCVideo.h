//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCArtwork, NSString;

@interface ASCVideo : NSObject
{
    NSString *_videoURL;	// 8 = 0x8
    ASCArtwork *_preview;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001d7c3
- (void).cxx_destruct;	// IMP=0x002000000001dd64
@property(readonly, copy, nonatomic) ASCArtwork *preview; // @synthesize preview=_preview;
@property(readonly, copy, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
- (id)description;	// IMP=0x001000000001dc74
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001dabd
- (unsigned long long)hash;	// IMP=0x001000000001da0b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001da00
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001d952
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001d7cb
- (id)initWithVideoURL:(id)arg1 preview:(id)arg2;	// IMP=0x001000000001d6fe

@end
