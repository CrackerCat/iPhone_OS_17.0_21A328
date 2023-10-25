//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARSettingsCellSpecifier, CARSettingsGroupCellSpecifier, CARSettingsSwitchCellSpecifier, NSArray;

@interface CARDisplayModePanel
{
    CARSettingsCellSpecifier *_cellSpecifier;	// 8 = 0x8
    CARSettingsGroupCellSpecifier *_appearanceGroupSpecifier;	// 16 = 0x10
    CARSettingsSwitchCellSpecifier *_darkMapsSwitchSpecifier;	// 24 = 0x18
    NSArray *_currentStyles;	// 32 = 0x20
}

+ (id)styles;	// IMP=0x00200000000147e7
- (void).cxx_destruct;	// IMP=0x0020000000014a77
@property(retain) NSArray *currentStyles; // @synthesize currentStyles=_currentStyles;
@property(retain) CARSettingsSwitchCellSpecifier *darkMapsSwitchSpecifier; // @synthesize darkMapsSwitchSpecifier=_darkMapsSwitchSpecifier;
@property(retain) CARSettingsGroupCellSpecifier *appearanceGroupSpecifier; // @synthesize appearanceGroupSpecifier=_appearanceGroupSpecifier;
- (void)_vehicleDidChange:(id)arg1;	// IMP=0x00100000000149d4
- (void)_updateSpecifiers;	// IMP=0x0010000000014506
- (long long)_currentUserInterfaceStylePreference;	// IMP=0x0010000000014415
- (void)viewDidLoad;	// IMP=0x00100000000143e6
- (id)specifierSections;	// IMP=0x0010000000014205
- (id)cellSpecifier;	// IMP=0x0010000000014002
- (id)initWithPanelController:(id)arg1;	// IMP=0x001000000001364d

@end
