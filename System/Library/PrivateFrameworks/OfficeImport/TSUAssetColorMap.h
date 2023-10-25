//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSUAssetColorMap : NSObject
{
    NSMutableDictionary *mAssetPathToColorMap;	// 8 = 0x8
}

+ (id)assetColorMap;	// IMP=0x00600000002d17dd
- (void).cxx_destruct;	// IMP=0x00000000002d2323
- (void)addChartEntries;	// IMP=0x00000000002d2308
- (void)addSharedEntries;	// IMP=0x00000000002d22d3
- (void)addEntriesFromPlistBasename:(id)arg1 transformKeyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d1a51
- (id)TSUColorFromColorArray:(id)arg1;	// IMP=0x00000000002d187e
@property(readonly, copy, nonatomic) NSDictionary *assetPathToColorMap;
- (id)init;	// IMP=0x00000000002d17ef

@end
