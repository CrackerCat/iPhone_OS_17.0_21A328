//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface VCPDataDecompressor : NSObject
{
    NSMutableData *_scratchData;	// 8 = 0x8
    NSMutableData *_resultData;	// 16 = 0x10
}

+ (id)decompressor;	// IMP=0x006000000007e4a4
- (void).cxx_destruct;	// IMP=0x000000000007e5c0
- (id)decompressData:(id)arg1;	// IMP=0x000000000007e4be
- (id)init;	// IMP=0x000000000007e3ed

@end
