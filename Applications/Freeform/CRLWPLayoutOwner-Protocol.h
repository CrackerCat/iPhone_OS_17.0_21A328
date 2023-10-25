//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRLColor, CRLLocale, CRLWPLayoutManager, CRLWPStorage, CRLWPTopicNumbers;
@protocol CRLWPTextWrap;

@protocol CRLWPLayoutOwner <NSObject>
- (id <CRLWPTextWrap>)textWrapper;
- (void)layoutManager:(CRLWPLayoutManager *)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(long long)arg3;
- (void)layoutManagerNeedsLayout:(CRLWPLayoutManager *)arg1;
- (_Bool)caresAboutStorageChanges;

@optional
- (CRLWPTopicNumbers *)topicNumbersForStorage:(CRLWPStorage *)arg1;
- (void)didLayoutWithLayoutManager:(CRLWPLayoutManager *)arg1;
- (CRLColor *)textColorOverride;
- (CRLLocale *)locale;
- (_Bool)forceWesternLineBreaking;
@end
