//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDPairedSync, HMDWatchSync, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDWatchSyncState : HMFObject
{
    NSMutableArray *_syncs;	// 8 = 0x8
    NSString *_deviceId;	// 16 = 0x10
    HMDPairedSync *_pairedSync;	// 24 = 0x18
}

+ (_Bool)isNewBetter:(unsigned long long)arg1 present:(unsigned long long)arg2;	// IMP=0x0060000000a1f802
- (void).cxx_destruct;	// IMP=0x0000000000a1f7c0
@property(readonly, nonatomic) HMDPairedSync *pairedSync; // @synthesize pairedSync=_pairedSync;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (id)description;	// IMP=0x0000000000a1f725
- (void)dealloc;	// IMP=0x0000000000a1f686
- (_Bool)removeSync;	// IMP=0x0000000000a1f4c7
- (void)addNewSync:(id)arg1;	// IMP=0x0000000000a1ef1b
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) HMDWatchSync *currentSync;
- (id)initWithDeviceId:(id)arg1 pairedSync:(id)arg2;	// IMP=0x0000000000a1ed76

@end
