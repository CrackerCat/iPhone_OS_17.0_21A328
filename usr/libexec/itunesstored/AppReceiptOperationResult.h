//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LSApplicationProxy, NSDate, NSError, NSMutableSet, NSSet;

@interface AppReceiptOperationResult : NSObject
{
    NSError *_error;	// 8 = 0x8
    NSMutableSet *_expiring;	// 16 = 0x10
    NSMutableSet *_refreshed;	// 24 = 0x18
    NSMutableSet *_revoked;	// 32 = 0x20
    LSApplicationProxy *_soonestExpiring;	// 40 = 0x28
    NSDate *_soonestExpirationDate;	// 48 = 0x30
}

@property(retain, nonatomic) NSDate *soonestExpirationDate; // @synthesize soonestExpirationDate=_soonestExpirationDate;
@property(retain, nonatomic) LSApplicationProxy *soonestExpiring; // @synthesize soonestExpiring=_soonestExpiring;
@property(readonly, nonatomic) NSSet *revoked; // @synthesize revoked=_revoked;
@property(retain, nonatomic) NSError *resultingError; // @synthesize resultingError=_error;
@property(readonly, nonatomic) NSSet *refreshed; // @synthesize refreshed=_refreshed;
@property(readonly, nonatomic) NSSet *expiring; // @synthesize expiring=_expiring;
- (void)addRefreshed:(id)arg1;	// IMP=0x001000000011f3b4
- (void)addRevoked:(id)arg1;	// IMP=0x001000000011f358
- (void)addExpiring:(id)arg1 expirationDate:(id)arg2;	// IMP=0x001000000011f27a
- (void)dealloc;	// IMP=0x001000000011f214

@end
