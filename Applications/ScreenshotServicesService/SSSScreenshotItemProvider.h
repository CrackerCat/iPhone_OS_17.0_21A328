//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivityItemProvider.h>

@class NSString, SSSScreenshot;

@interface SSSScreenshotItemProvider : UIActivityItemProvider
{
    SSSScreenshot *_screenshot;	// 8 = 0x8
    NSString *_overrideName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000003ef24
@property(retain, nonatomic) NSString *overrideName; // @synthesize overrideName=_overrideName;
@property(nonatomic) __weak SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;	// IMP=0x001000000003ee4f
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;	// IMP=0x001000000003edcc
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;	// IMP=0x001000000003edba
- (id)activityViewControllerPlaceholderItem:(id)arg1;	// IMP=0x001000000003ed5b
- (id)nameForScreenshot;	// IMP=0x001000000003ecef
- (id)item;	// IMP=0x001000000003ecb2
- (id)placeholderItemForScreenshot:(id)arg1;	// IMP=0x001000000003ec7a
- (id)initWithScreenshot:(id)arg1;	// IMP=0x001000000003ebe0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
