//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDWatchConfiguration : HMFObject
{
    NSString *_uniqueId;	// 8 = 0x8
    NSDictionary *_metadataConfig;	// 16 = 0x10
    NSDictionary *_homeConfig;	// 24 = 0x18
    NSUUID *_primaryHome;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000b7bcea
@property(retain, nonatomic) NSUUID *primaryHome; // @synthesize primaryHome=_primaryHome;
@property(retain, nonatomic) NSDictionary *homeConfig; // @synthesize homeConfig=_homeConfig;
@property(retain, nonatomic) NSDictionary *metadataConfig; // @synthesize metadataConfig=_metadataConfig;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void)setConfigVersion:(id)arg1 forHome:(id)arg2;	// IMP=0x0000000000b7bb8e
- (void)setHomeConfiguration:(id)arg1;	// IMP=0x0000000000b7b8ff
- (id)description;	// IMP=0x0000000000b7b83f
- (id)initWithUniqueID:(id)arg1;	// IMP=0x0000000000b7b78a

@end
