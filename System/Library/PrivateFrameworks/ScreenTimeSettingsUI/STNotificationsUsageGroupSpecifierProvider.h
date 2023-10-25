//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BBSettingsGateway, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface STNotificationsUsageGroupSpecifierProvider
{
    NSMutableDictionary *_notificationSectionByBundleID;	// 8 = 0x8
    BBSettingsGateway *_notificationSettingsGateway;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_notificationSettingsGatewayQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007f470
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationSettingsGatewayQueue; // @synthesize notificationSettingsGatewayQueue=_notificationSettingsGatewayQueue;
@property(readonly, nonatomic) BBSettingsGateway *notificationSettingsGateway; // @synthesize notificationSettingsGateway=_notificationSettingsGateway;
@property(readonly, nonatomic) NSMutableDictionary *notificationSectionByBundleID; // @synthesize notificationSectionByBundleID=_notificationSectionByBundleID;
- (void)_specifierIdentifierDidChange:(id)arg1;	// IMP=0x000000000007f3a6
- (id)getNotificationsInfo:(id)arg1;	// IMP=0x000000000007f391
- (id)_usageDetailsCoordinator:(id)arg1;	// IMP=0x000000000007f341
- (void)updateSpecifier:(id)arg1 usageItem:(id)arg2;	// IMP=0x000000000007f158
- (id)newSpecifierWithUsageItem:(id)arg1;	// IMP=0x000000000007ee9d
- (void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000007e82b
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000007e59b
- (void)setCoordinator:(id)arg1;	// IMP=0x000000000007e493
- (id)init;	// IMP=0x000000000007e264

@end
