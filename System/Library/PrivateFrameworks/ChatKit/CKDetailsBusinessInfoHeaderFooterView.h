//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class CKBusinessInfoView, NSString;

__attribute__((visibility("hidden")))
@interface CKDetailsBusinessInfoHeaderFooterView : UITableViewHeaderFooterView
{
    CKBusinessInfoView *_businessInfoView;	// 8 = 0x8
}

+ (id)reuseIdentifier;	// IMP=0x0010000000325c5e
- (void).cxx_destruct;	// IMP=0x0000000000325f3f
@property(retain, nonatomic) CKBusinessInfoView *businessInfoView; // @synthesize businessInfoView=_businessInfoView;
- (void)layoutSubviews;	// IMP=0x0000000000325e32
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x0000000000325c6b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
