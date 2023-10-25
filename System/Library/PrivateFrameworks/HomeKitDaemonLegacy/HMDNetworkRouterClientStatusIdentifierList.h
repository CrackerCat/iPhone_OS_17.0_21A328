//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterClientStatusIdentifierList : NSObject
{
    NSMutableArray *_clientStatusIdentifiers;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004e7381
- (void).cxx_destruct;	// IMP=0x00000000004e6524
@property(retain, nonatomic) NSMutableArray *clientStatusIdentifiers; // @synthesize clientStatusIdentifiers=_clientStatusIdentifiers;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004e635e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004e62f4
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004e5fd6
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004e5cb8
- (id)initWithClientStatusIdentifiers:(id)arg1;	// IMP=0x00000000004e5c4d
- (id)init;	// IMP=0x00000000004e5c1e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
