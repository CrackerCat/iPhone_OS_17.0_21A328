//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>

@class CHEncodedStrokeIdentifier;
@protocol CHStrokeIdentifier;

@protocol CHStroke <NSObject>
@property(readonly, nonatomic) _Bool isFinished;
@property(readonly, nonatomic) double endTimestamp;
@property(readonly, nonatomic) double startTimestamp;
@property(readonly, nonatomic) unsigned long long strokeAttributes;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) id <CHStrokeIdentifier> strokeIdentifier;
- (CHEncodedStrokeIdentifier *)encodedStrokeIdentifier;
- (void)enumeratePointsWithDistanceStep:(double)arg1 usingBlock:(void (^)(struct CGPoint, double, _Bool *))arg2;
- (void)enumeratePointsWithTimestep:(double)arg1 usingBlock:(void (^)(struct CGPoint, double, _Bool *))arg2;
@end
