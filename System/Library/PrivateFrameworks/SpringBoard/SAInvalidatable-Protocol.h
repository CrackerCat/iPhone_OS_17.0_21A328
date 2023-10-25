//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol SAInvalidatable <NSObject>
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)invalidateWithReason:(NSString *)arg1;
- (void)addInvalidationBlock:(void (^)(id <SAInvalidatable>, NSString *))arg1;

@optional
@property(readonly, copy, nonatomic) NSDate *creationDate;
@end
