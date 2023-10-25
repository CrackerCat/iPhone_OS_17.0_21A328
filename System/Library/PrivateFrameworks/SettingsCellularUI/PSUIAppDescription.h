//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIImage;

__attribute__((visibility("hidden")))
@interface PSUIAppDescription : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_publisher;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    NSURL *_iconURL;	// 32 = 0x20
    NSURL *_installURL;	// 40 = 0x28
    UIImage *_icon;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000004b1c1
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSURL *installURL; // @synthesize installURL=_installURL;
@property(copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x000000000004b09f
- (id)initWithAMSMediaResponseDictionary:(id)arg1;	// IMP=0x000000000004aca2

@end
