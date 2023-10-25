//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, PUAssetReference;

__attribute__((visibility("hidden")))
@interface PUAssetDisplayDescriptor : NSObject
{
    PUAssetReference *_assetReference;	// 8 = 0x8
    NSDate *_modifiedAfterDate;	// 16 = 0x10
    CDStruct_1b6d18a9 _videoSeekTime;	// 24 = 0x18
}

+ (id)assetDisplayDescriptorForSimpleNavigationToAssetReference:(id)arg1;	// IMP=0x0060000000167d62
- (void).cxx_destruct;	// IMP=0x0000000000167d3a
@property(readonly, nonatomic) NSDate *modifiedAfterDate; // @synthesize modifiedAfterDate=_modifiedAfterDate;
@property(readonly, nonatomic) CDStruct_1b6d18a9 videoSeekTime; // @synthesize videoSeekTime=_videoSeekTime;
@property(readonly, nonatomic) PUAssetReference *assetReference; // @synthesize assetReference=_assetReference;
- (id)initWithAssetReference:(id)arg1 modifiedAfterDate:(id)arg2 videoSeekTime:(CDStruct_1b6d18a9)arg3;	// IMP=0x0000000000167c61
- (id)init;	// IMP=0x0000000000167c1b

@end
