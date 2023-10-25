//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface WebBundleFile : NSObject
{
    NSString *_fileHash;	// 8 = 0x8
    NSString *_filePath;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000af4954
- (void).cxx_destruct;	// IMP=0x0020000000af4b5e
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *fileHash; // @synthesize fileHash=_fileHash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000af49e8
- (unsigned long long)hash;	// IMP=0x0010000000af495c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000af48e7
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000af47e9
- (id)initWithPath:(id)arg1 hash:(id)arg2;	// IMP=0x0010000000af474b

@end
