//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface MIWatchKitAppSnapshot : NSObject
{
    _Bool _onlyV1;	// 8 = 0x8
    _Bool _placeholderOnly;	// 9 = 0x9
    _Bool _identifierLocked;	// 10 = 0xa
    NSDictionary *_resultDict;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    NSString *_watchKitAppBundleID;	// 32 = 0x20
    NSURL *_destURL;	// 40 = 0x28
    unsigned long long _diskUsage;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000000b8ff
@property(nonatomic) _Bool identifierLocked; // @synthesize identifierLocked=_identifierLocked;
@property(nonatomic) unsigned long long diskUsage; // @synthesize diskUsage=_diskUsage;
@property(readonly, nonatomic) NSURL *destURL; // @synthesize destURL=_destURL;
@property(readonly, nonatomic) _Bool placeholderOnly; // @synthesize placeholderOnly=_placeholderOnly;
@property(readonly, nonatomic) _Bool onlyV1; // @synthesize onlyV1=_onlyV1;
@property(copy, nonatomic) NSString *watchKitAppBundleID; // @synthesize watchKitAppBundleID=_watchKitAppBundleID;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSDictionary *resultDict; // @synthesize resultDict=_resultDict;
- (_Bool)createSnapshotWithError:(id *)arg1;	// IMP=0x001000000000b686
- (void)dealloc;	// IMP=0x001000000000b614
- (id)initWithBundleID:(id)arg1 snapshotTo:(id)arg2 onlyV1AppIfPresent:(_Bool)arg3 placeholderOnly:(_Bool)arg4;	// IMP=0x001000000000b55c

@end
