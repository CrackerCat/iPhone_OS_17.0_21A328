//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPSDomainAccessor, NSString;
@protocol CSDThumperCapabilitiesMonitorDataSource, OS_dispatch_queue;

@interface CSDThumperCapabilitiesMonitor : NSObject
{
    id <CSDThumperCapabilitiesMonitorDataSource> _dataSource;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NPSDomainAccessor *_domainAccessor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000077661
@property(retain, nonatomic) NPSDomainAccessor *domainAccessor; // @synthesize domainAccessor=_domainAccessor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSDThumperCapabilitiesMonitorDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)shouldUnenrollDefaultPairedDeviceForAccountID:(id)arg1;	// IMP=0x0010000000077477
- (_Bool)shouldEnrollDefaultPairedDeviceForAccountID:(id)arg1;	// IMP=0x001000000007729f
- (void)unenrollDefaultPairedDeviceForAccountID:(id)arg1;	// IMP=0x0010000000077180
- (void)enrollDefaultPairedDeviceForAccountID:(id)arg1;	// IMP=0x001000000007704d
- (void)enrollDefaultPairedDevice;	// IMP=0x0010000000076e34
- (id)thumperCapabilitiesStatesForPreferenceKey:(struct __CFString *)arg1;	// IMP=0x0010000000076a51
- (void)saveThumperCapabilitiesStates:(id)arg1 forPreferenceKey:(struct __CFString *)arg2;	// IMP=0x0010000000076763
- (void)removeEmergencyAddressDisclaimerOnSecondaryDevice;	// IMP=0x001000000007665b
- (void)showEmergencyAddressDisclaimerOnSecondaryDevice;	// IMP=0x00100000000761e9
- (void)removeReminderNotificationOnSecondaryDevice;	// IMP=0x00100000000760e1
- (void)showReminderNotificationOnSecondaryDevice;	// IMP=0x0010000000075bba
- (void)handleIDSDeviceListChangedNotification:(id)arg1;	// IMP=0x0010000000075b16
- (void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;	// IMP=0x0010000000075a23
- (void)didRemoveCapabilitiesForSenderIdentityWithUUID:(id)arg1;	// IMP=0x0010000000075616
- (void)didAddCapabilitiesForSenderIdentityWithUUID:(id)arg1;	// IMP=0x0010000000075405
- (void)_checkIfDevicesShouldBeUnenrolled;	// IMP=0x0010000000074fa2
- (void)_updateDefaultPairedDeviceUniqueIDDefault;	// IMP=0x0010000000074d53
- (void)_updateThumperCallingPreferences;	// IMP=0x0010000000074418
- (void)_thumperIsNoLongerEnabledForAccountID:(id)arg1;	// IMP=0x001000000007435c
- (void)_thumperIsNowEnabledForAccountID:(id)arg1;	// IMP=0x00100000000742a0
- (void)_thumperIsNoLongerSupportedForAccountID:(id)arg1;	// IMP=0x00100000000741e4
- (void)setThumperCallingAllowedOnDefaultPairedDeviceDefault:(_Bool)arg1;	// IMP=0x0010000000074074
- (_Bool)thumperCallingAllowedOnDefaultPairedDeviceDefault;	// IMP=0x0010000000073f85
- (void)updateState;	// IMP=0x0010000000073e6f
- (id)init;	// IMP=0x0010000000073d72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
