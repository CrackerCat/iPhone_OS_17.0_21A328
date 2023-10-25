//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class CLLocation, NSDate, NSString;

@protocol PLMomentProcessingProtocol <NSObject>
@property(readonly, nonatomic) unsigned short pl_locationType;
@property(readonly, nonatomic) short pl_originatorState;
@property(readonly, nonatomic) struct CLLocationCoordinate2D pl_coordinate;
@property(readonly, nonatomic) CLLocation *pl_location;
@property(readonly, nonatomic) unsigned long long pl_numberOfAssets;
@property(readonly, nonatomic) NSDate *pl_endDate;
@property(readonly, nonatomic) NSDate *pl_startDate;
@property(readonly, nonatomic) NSString *pl_uuid;
@end
