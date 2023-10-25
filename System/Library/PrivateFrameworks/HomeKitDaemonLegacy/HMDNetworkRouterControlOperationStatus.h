//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterControlOperationStatus : NSObject
{
    long long _status;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004cb4cc
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004cb3a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004cb34f
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004cb335
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004cb1e3
- (id)initWithStatus:(long long)arg1;	// IMP=0x00000000004cb1a6
- (id)init;	// IMP=0x00000000004cb16a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
