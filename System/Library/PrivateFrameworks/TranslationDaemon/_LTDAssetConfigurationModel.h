//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _LTDAssetConfigurationModel : NSObject
{
    NSString *_config;	// 8 = 0x8
    NSArray *_speechTranslationAssetTypes;	// 16 = 0x10
    NSArray *_speechEndpointAssetTypes;	// 24 = 0x18
    NSArray *_assetDirectoryNames;	// 32 = 0x20
    NSDictionary *_root;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000008e88
@property(retain, nonatomic) NSDictionary *root; // @synthesize root=_root;
@property(readonly, nonatomic) NSArray *assetDirectoryNames; // @synthesize assetDirectoryNames=_assetDirectoryNames;
@property(readonly, nonatomic) NSArray *speechEndpointAssetTypes; // @synthesize speechEndpointAssetTypes=_speechEndpointAssetTypes;
@property(readonly, nonatomic) NSArray *speechTranslationAssetTypes; // @synthesize speechTranslationAssetTypes=_speechTranslationAssetTypes;
@property(readonly, nonatomic) NSString *config; // @synthesize config=_config;
- (id)debugDescription;	// IMP=0x0000000000008e2f
- (id)description;	// IMP=0x0000000000008e1d
- (id)currentAssetDirectoryName;	// IMP=0x0000000000008dcd
- (id)currentEndpointAssetType;	// IMP=0x0000000000008d7d
- (id)currentSpeechTranslationAssetType;	// IMP=0x0000000000008d2d
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000008ad5

@end
