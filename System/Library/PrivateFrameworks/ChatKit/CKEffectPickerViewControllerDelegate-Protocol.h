//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIViewController;
@protocol CKEffectPickerViewControllerProtocol;

@protocol CKEffectPickerViewControllerDelegate
- (UIViewController *)effectsPresenterViewController;
- (void)effectPickerViewControllerClose:(id <CKEffectPickerViewControllerProtocol>)arg1 keepingSideMountContainer:(_Bool)arg2;
- (void)effectPickerViewControllerClose:(id <CKEffectPickerViewControllerProtocol>)arg1;
- (void)effectPickerViewController:(id <CKEffectPickerViewControllerProtocol>)arg1 effectWithIdentifierSelected:(NSString *)arg2;
@end
