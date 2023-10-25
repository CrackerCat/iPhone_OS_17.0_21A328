//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class NSString, UIPickerView;

__attribute__((visibility("hidden")))
@interface VSPSPickerTableViewCell : PSTableCell
{
    UIPickerView *_pickerView;	// 120 = 0x78
}

+ (double)preferredHeight;	// IMP=0x001000000002dfa0
- (void).cxx_destruct;	// IMP=0x000000000002e4b7
@property(readonly, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x000000000002e455
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x000000000002e3f1
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x000000000002e39e
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x000000000002e393
- (id)targetAsDelegate;	// IMP=0x000000000002e2cc
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x000000000002dfae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
