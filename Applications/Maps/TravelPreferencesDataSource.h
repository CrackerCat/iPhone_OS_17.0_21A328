//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOCyclingUserPreferences, NSArray, NSString, TransitPreferences, TransitPreferencesViewControllerDataSource, UNNotificationSettings;
@protocol NSObject, SupplementaryElementsDataSourceDelegate;

@interface TravelPreferencesDataSource
{
    id _originalPreferences;	// 8 = 0x8
    id <NSObject> _countryObserver;	// 16 = 0x10
    _Bool _photoCredit;	// 24 = 0x18
    NSString *_photoCreditName;	// 32 = 0x20
    _Bool _didChangeAttributionPreferences;	// 40 = 0x28
    _Bool _lagunaBeachSupported;	// 41 = 0x29
    NSArray *_sectionTitles;	// 48 = 0x30
    id <SupplementaryElementsDataSourceDelegate> _privacyDelegate;	// 56 = 0x38
    GEOCyclingUserPreferences *_cyclingPreferences;	// 64 = 0x40
    TransitPreferencesViewControllerDataSource *_transitDataSource;	// 72 = 0x48
    UNNotificationSettings *_notificationSettings;	// 80 = 0x50
}

+ (void)registerCellsInCollectionView:(id)arg1;	// IMP=0x00400000003b6ef2
- (void).cxx_destruct;	// IMP=0x00200000003bb2f0
@property(retain, nonatomic) UNNotificationSettings *notificationSettings; // @synthesize notificationSettings=_notificationSettings;
@property(retain, nonatomic) TransitPreferencesViewControllerDataSource *transitDataSource; // @synthesize transitDataSource=_transitDataSource;
@property(readonly, nonatomic) GEOCyclingUserPreferences *cyclingPreferences; // @synthesize cyclingPreferences=_cyclingPreferences;
@property(nonatomic) __weak id <SupplementaryElementsDataSourceDelegate> privacyDelegate; // @synthesize privacyDelegate=_privacyDelegate;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
- (id)_notificationsRowTitle;	// IMP=0x00100000003bb120
- (id)_settingsRowTitle;	// IMP=0x00100000003bb0b8
- (id)_photoCreditSectionTitle;	// IMP=0x00100000003bb050
- (id)_distancesSectionTitle;	// IMP=0x00100000003bafe8
- (id)_transitSectionTitle;	// IMP=0x00100000003baf80
- (id)_cyclingSectionTitle;	// IMP=0x00100000003baf18
- (id)_ebikeSectionTitle;	// IMP=0x00100000003baeb0
- (id)_walkingSectionTitle;	// IMP=0x00100000003bae48
- (id)_drivingSectionTitle;	// IMP=0x00100000003bade0
- (id)_directionsSectionTitle;	// IMP=0x00100000003bad78
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00100000003baccb
- (double)heightOfViewAtSection:(long long)arg1 collectionView:(id)arg2;	// IMP=0x00100000003ba9b1
- (void)privacyTextTapped;	// IMP=0x00100000003ba974
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00100000003ba179
- (void)prepareContent;	// IMP=0x00100000003b7aee
@property(readonly, nonatomic) TransitPreferences *transitPreferences;
- (void)loadPreferences;	// IMP=0x00100000003b78e7
- (id)_photoCreditNameValidationErrorMessage;	// IMP=0x00100000003b76c5
- (void)updatePhotoCreditPreferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003b73c0
- (void)fetchPhotoCreditPreferences;	// IMP=0x00100000003b7150
- (void)dealloc;	// IMP=0x00100000003b70c8
- (id)init;	// IMP=0x00100000003b7057

@end
