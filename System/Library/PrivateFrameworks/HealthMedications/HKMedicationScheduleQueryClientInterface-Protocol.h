//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthMedications/HKQueryClientInterface-Protocol.h>

@class NSArray, NSUUID;

@protocol HKMedicationScheduleQueryClientInterface <HKQueryClientInterface>
- (void)client_deliverSchedules:(NSArray *)arg1 queryUUID:(NSUUID *)arg2;
@end
