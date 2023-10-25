//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@class NSIndexPath, NSTermOfAddress;

__attribute__((visibility("hidden")))
@interface CNContactAddAddressingGrammarAction : CNContactAction
{
    NSTermOfAddress *_selectedAddressingGrammar;	// 8 = 0x8
    NSIndexPath *_indexPath;	// 16 = 0x10
}

+ (id)os_log;	// IMP=0x00100000000b0a92
- (void).cxx_destruct;	// IMP=0x00000000000b0e25
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) NSTermOfAddress *selectedAddressingGrammar; // @synthesize selectedAddressingGrammar=_selectedAddressingGrammar;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 labeledValue:(id)arg4;	// IMP=0x00000000000b0dd3
- (void)pronounPickerViewControllerDidCancel:(id)arg1;	// IMP=0x00000000000b0d1c
- (void)pronounPickerViewController:(id)arg1 didFinishWithTermOfAddress:(id)arg2;	// IMP=0x00000000000b0c35
- (void)performActionWithSender:(id)arg1;	// IMP=0x00000000000b0aee

@end
