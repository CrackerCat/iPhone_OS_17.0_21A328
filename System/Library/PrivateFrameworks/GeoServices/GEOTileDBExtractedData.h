//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOTileData, NSUUID;

__attribute__((visibility("hidden")))
@interface GEOTileDBExtractedData : NSObject
{
    NSUUID *_externalResourceUUID;	// 8 = 0x8
    GEOTileData *_data;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000011cf43a
@property(readonly, nonatomic) GEOTileData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSUUID *externalResourceUUID; // @synthesize externalResourceUUID=_externalResourceUUID;
- (id)initWithData:(id)arg1;	// IMP=0x00000000011cf3a8
- (id)initWithData:(id)arg1 externalResourceUUID:(id)arg2;	// IMP=0x00000000011cf2ff

@end
