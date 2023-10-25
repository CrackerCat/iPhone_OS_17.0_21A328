//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIColor;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingAffiliationItem : NSObject
{
    UIColor *_fillColor;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_imageName;	// 24 = 0x18
    NSString *_imageTreatment;	// 32 = 0x20
    NSURL *_imageURL;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    long long _userAffinityCount;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001651dd
@property(nonatomic) long long userAffinityCount; // @synthesize userAffinityCount=_userAffinityCount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *imageTreatment; // @synthesize imageTreatment=_imageTreatment;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000165038
- (unsigned long long)hash;	// IMP=0x0000000000164fd4
- (id)description;	// IMP=0x0000000000164f04
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000164df6

@end
