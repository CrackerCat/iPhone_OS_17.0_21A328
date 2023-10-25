//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord, NSArray, NSDate, NSDictionary, NSString;

@interface CloudExtensionDevice : NSObject
{
    NSArray *_cloudExtensionStates;	// 8 = 0x8
    CKRecord *_record;	// 16 = 0x10
}

+ (id)_valueTransformerForDeviceName;	// IMP=0x004000000009050e
+ (id)cloudExtensionDeviceWithDeviceUUIDString:(id)arg1 deviceName:(id)arg2 lastModifiedDate:(id)arg3 newTabPageComposedIdentifier:(id)arg4 newTabPageSetByUserGesture:(_Bool)arg5 newTabPageLastModifiedDate:(id)arg6 encodedSystemFieldsData:(id)arg7 cloudExtensionsRecordZoneID:(id)arg8;	// IMP=0x001000000008f974
+ (id)cloudExtensionDeviceWithCKRecord:(id)arg1;	// IMP=0x001000000008f911
+ (id)cloudExtensionDeviceWithDictionaryRepresentation:(id)arg1 extensionSettingsDictionaryForDevice:(id)arg2 cloudExtensionsRecordZoneID:(id)arg3;	// IMP=0x001000000008f6e9
- (void).cxx_destruct;	// IMP=0x00200000000910d0
@property(readonly, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(copy, nonatomic) NSArray *cloudExtensionStates; // @synthesize cloudExtensionStates=_cloudExtensionStates;
- (id)_updateCloudExtensionStatesFromStates:(id)arg1;	// IMP=0x0010000000090abc
- (void)_updateDevicePropertiesFromCloudExtensionDevice:(id)arg1;	// IMP=0x0010000000090753
- (void)_setCloudExtensionStatesFromDictionaryRepresentation:(id)arg1 cloudExtensionsRecordZoneID:(id)arg2;	// IMP=0x001000000009058c
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDateForNewTabPage;
@property(readonly, nonatomic, getter=wasNewTabPageSetByUserGesture) _Bool newTabPageSetByUserGesture;
@property(readonly, copy, nonatomic) NSString *composedIdentifierForNewTabPage;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
@property(readonly, copy, nonatomic) NSString *deviceName;
@property(readonly, copy, nonatomic) NSString *deviceUUIDString;
- (id)description;	// IMP=0x001000000008ff55
- (void)updateFromCloudExtensionDeviceWithoutUpdatingExtensionStates:(id)arg1;	// IMP=0x001000000008ff43
- (id)updateFromCloudExtensionDevice:(id)arg1;	// IMP=0x001000000008feb0
- (id)_initWithCKRecord:(id)arg1;	// IMP=0x001000000008fe26
- (id)_initWithDeviceUUIDString:(id)arg1 deviceName:(id)arg2 lastModifiedDate:(id)arg3 newTabPageComposedIdentifier:(id)arg4 newTabPageSetByUserGesture:(_Bool)arg5 newTabPageLastModifiedDate:(id)arg6 encodedSystemFieldsData:(id)arg7 cloudExtensionsRecordZoneID:(id)arg8;	// IMP=0x001000000008fa94

@end
