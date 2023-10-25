//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PSUICarrierServicesSpecifierCache : NSObject
{
    CoreTelephonyClient *_client;	// 8 = 0x8
    NSMutableDictionary *_specifiersDict;	// 16 = 0x10
    NSMutableDictionary *_mmsInfoSpecifiersDict;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x001000000000ce44
- (void).cxx_destruct;	// IMP=0x000000000000e566
@property(retain, nonatomic) NSMutableDictionary *mmsInfoSpecifiersDict; // @synthesize mmsInfoSpecifiersDict=_mmsInfoSpecifiersDict;
@property(retain, nonatomic) NSMutableDictionary *specifiersDict; // @synthesize specifiersDict=_specifiersDict;
@property(retain, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
- (id)getLogger;	// IMP=0x000000000000e4f5
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;	// IMP=0x000000000000e46c
- (void)carrierBundleChange:(id)arg1;	// IMP=0x000000000000e3f4
- (void)openURLWithSpecifier:(id)arg1;	// IMP=0x000000000000e346
- (void)dialCarrierServiceNumber:(id)arg1;	// IMP=0x000000000000e005
- (id)readPreference:(id)arg1;	// IMP=0x000000000000dfe6
- (id)specifiers:(id)arg1;	// IMP=0x000000000000debe
- (void)fetchSpecifiers;	// IMP=0x000000000000d53a
- (id)newMMSInfoSpecifierWithTarget:(id)arg1 context:(id)arg2;	// IMP=0x000000000000d3c6
- (id)mmsInfoSpecifierWithTarget:(id)arg1 context:(id)arg2;	// IMP=0x000000000000d208
- (void)clearCache;	// IMP=0x000000000000d17c
- (void)dealloc;	// IMP=0x000000000000d0f3
- (id)init;	// IMP=0x000000000000d044
- (id)initPrivate;	// IMP=0x000000000000cea9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
