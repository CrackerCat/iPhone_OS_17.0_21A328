//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PreferencesUI/NSObject-Protocol.h>

@class NSArray, NSNumber, NSString, PSSpecifier, UIViewController;
@protocol AAUISpecifierProvider;

@protocol AAUISpecifierProviderDelegate <NSObject>
- (void)reloadSpecifiersForProvider:(id <AAUISpecifierProvider>)arg1 oldSpecifiers:(NSArray *)arg2 animated:(_Bool)arg3;
- (void)specifierProvider:(id <AAUISpecifierProvider>)arg1 didFinishLoadingSpecifier:(PSSpecifier *)arg2;
- (void)specifierProvider:(id <AAUISpecifierProvider>)arg1 willBeginLoadingSpecifier:(PSSpecifier *)arg2;
- (void)specifierProvider:(id <AAUISpecifierProvider>)arg1 showViewController:(UIViewController *)arg2;

@optional
- (void)insertSpecifier:(PSSpecifier *)arg1 afterSpecifierNamed:(NSString *)arg2 animated:(_Bool)arg3;
- (NSNumber *)specifierProvider:(id <AAUISpecifierProvider>)arg1 dataclassSwitchStateForSpecifier:(PSSpecifier *)arg2;
- (void)specifierProvider:(id <AAUISpecifierProvider>)arg1 dataclassSwitchStateDidChange:(NSNumber *)arg2 withSpecifier:(PSSpecifier *)arg3;
- (_Bool)specifierProvider:(id <AAUISpecifierProvider>)arg1 isDataclassAvailableForSpecifier:(PSSpecifier *)arg2;
- (void)validateDataclassAccessForProvider:(id <AAUISpecifierProvider>)arg1 specifier:(PSSpecifier *)arg2 completion:(void (^)(_Bool))arg3;
- (void)reloadSpecifierForProvider:(id <AAUISpecifierProvider>)arg1 identifier:(NSString *)arg2;
@end
