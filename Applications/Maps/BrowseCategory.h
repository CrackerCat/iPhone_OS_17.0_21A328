//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSearchCategory, NSArray, NSString;

@interface BrowseCategory : NSObject
{
    NSArray *_subCategories;	// 8 = 0x8
    GEOSearchCategory *_category;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000080b85f
@property(retain, nonatomic) GEOSearchCategory *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSArray *subCategories; // @synthesize subCategories=_subCategories;
- (unsigned long long)hash;	// IMP=0x001000000080b7f6
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000080b71a
- (id)description;	// IMP=0x001000000080b658
@property(readonly, nonatomic) NSString *alternativeName;
@property(readonly, nonatomic) NSString *name;
- (void)imageWithScale:(double)arg1 isCarplay:(_Bool)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000080b572
- (void)imageWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000080b558
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000080b54d
- (id)initWithCategory:(id)arg1;	// IMP=0x001000000080b2f8

@end
