//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class PSUICoreTelephonyCapabilitiesCache;

__attribute__((visibility("hidden")))
@interface PSUINetworkSlicingController : PSListController
{
    _Bool _networkSlicingOn;	// 192 = 0xc0
    PSUICoreTelephonyCapabilitiesCache *_capabilityCache;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000062290
@property(retain, nonatomic) PSUICoreTelephonyCapabilitiesCache *capabilityCache; // @synthesize capabilityCache=_capabilityCache;
@property(nonatomic) _Bool networkSlicingOn; // @synthesize networkSlicingOn=_networkSlicingOn;
- (id)getLogger;	// IMP=0x000000000006222b
- (void)_enableNetworkSlicing:(_Bool)arg1;	// IMP=0x00000000000620e3
- (void)setNetworkSlicingAppCategory:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000061f9a
- (id)getNetworkSlicingAppCategory:(id)arg1;	// IMP=0x0000000000061e0c
- (id)specifiers;	// IMP=0x00000000000619c1
- (id)initWithCapabilityCache:(id)arg1;	// IMP=0x0000000000061953
- (id)init;	// IMP=0x00000000000618f9

@end
