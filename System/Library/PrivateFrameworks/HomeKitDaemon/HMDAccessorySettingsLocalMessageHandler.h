//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;
@protocol HMDAccessorySettingsLocalMessageHandlerDataSource, HMDAccessorySettingsLocalMessageHandlerDelegate, HMDLanguageValueListSettingDataProvider;

__attribute__((visibility("hidden")))
@interface HMDAccessorySettingsLocalMessageHandler : HMFObject
{
    id <HMDAccessorySettingsLocalMessageHandlerDataSource> _dataSource;	// 8 = 0x8
    id <HMDAccessorySettingsLocalMessageHandlerDelegate> _delegate;	// 16 = 0x10
    NSUUID *_homeUUID;	// 24 = 0x18
    id <HMDLanguageValueListSettingDataProvider> _languageValuesDataProvider;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00100000006c5385
- (void).cxx_destruct;	// IMP=0x00000000006c5336
@property(readonly) id <HMDLanguageValueListSettingDataProvider> languageValuesDataProvider; // @synthesize languageValuesDataProvider=_languageValuesDataProvider;
@property(readonly, copy) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property __weak id <HMDAccessorySettingsLocalMessageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDAccessorySettingsLocalMessageHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)callerVersionForMessage:(id)arg1;	// IMP=0x00000000006c511d
- (unsigned long long)dataSourceCallerPrivilegeWithMessage:(id)arg1 error:(id *)arg2;	// IMP=0x00000000006c4f33
- (void)handleAccessorySettingsUpdateRequestMessage:(id)arg1;	// IMP=0x00000000006c486c
- (id)siriAvailableLanguagesSetting;	// IMP=0x00000000006c47df
- (void)handleAccessorySettingsFetchRequestMessage:(id)arg1;	// IMP=0x00000000006c4031
- (id)initWithHomeUUID:(id)arg1 languageValuesDataProvider:(id)arg2;	// IMP=0x00000000006c3f8f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
