//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PlatformController;

@interface TrafficIncidentItemSource
{
    PlatformController *_platformController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000007180b2
@property(retain, nonatomic) PlatformController *platformController; // @synthesize platformController=_platformController;
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x0010000000717fdd
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x0010000000717fd7
- (void)incidentsSourceManagerDidUpdate;	// IMP=0x0010000000717f76
- (id)allItems;	// IMP=0x0010000000717ecc
- (void)dealloc;	// IMP=0x0010000000717e3c
- (id)init;	// IMP=0x0010000000717d1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
