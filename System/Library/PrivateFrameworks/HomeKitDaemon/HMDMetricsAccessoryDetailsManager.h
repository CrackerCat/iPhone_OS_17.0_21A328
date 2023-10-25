//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@protocol HMDHouseholdMetricsDataSource;

__attribute__((visibility("hidden")))
@interface HMDMetricsAccessoryDetailsManager : HMFObject
{
    id <HMDHouseholdMetricsDataSource> _dataSource;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000008e5238
@property(readonly, nonatomic) __weak id <HMDHouseholdMetricsDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)accessoryCategoryLogEventsForHomeWithUUID:(id)arg1;	// IMP=0x00000000008e481b
- (void)deleteCountersBeforeDate:(id)arg1;	// IMP=0x00000000008e4815
- (void)deleteCountersAfterDate:(id)arg1;	// IMP=0x00000000008e480f
- (id)logEventsPopulatedForHomeWithUUID:(id)arg1 associatedWithDate:(id)arg2;	// IMP=0x00000000008e4688
- (id)householdMetricsLogEventFactory;	// IMP=0x00000000008e467f
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000008e4618

@end
