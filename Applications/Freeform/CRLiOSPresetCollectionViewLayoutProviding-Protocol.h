//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRLiOSPresetCollectionContext, NSArray, NSDictionary, NSString;

@protocol CRLiOSPresetCollectionViewLayoutProviding <NSObject>
@property(readonly, nonatomic) struct CGSize swatchInsets;
@property(readonly, nonatomic) _Bool supportsSearch;
@property(readonly, nonatomic) _Bool showsSubpageNavigator;
@property(readonly, nonatomic) unsigned long long pageControlType;
- (_Bool)shouldVerticallyDistributeEvenlyForContext:(CRLiOSPresetCollectionContext *)arg1;
- (double)presetWidthToHeightRatioForContext:(CRLiOSPresetCollectionContext *)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 context:(CRLiOSPresetCollectionContext *)arg2;
- (double)minimumVerticalSpacingMultiplierInSection:(unsigned long long)arg1 forContext:(CRLiOSPresetCollectionContext *)arg2;
- (double)minimumHorizontalSpacingMultiplierInSection:(unsigned long long)arg1 forContext:(CRLiOSPresetCollectionContext *)arg2;
- (unsigned long long)itemsPerRowForContext:(CRLiOSPresetCollectionContext *)arg1;
- (_Bool)isCellEditableForSection:(unsigned long long)arg1 context:(CRLiOSPresetCollectionContext *)arg2;
- (NSDictionary *)cellRegistrationDictionary;
- (NSString *)cellReuseIdentifierForSection:(unsigned long long)arg1 context:(CRLiOSPresetCollectionContext *)arg2;

@optional
@property(readonly, nonatomic) NSArray *pageControlTitles;
@property(readonly, nonatomic) NSArray *subpageTitles;
- (unsigned long long)numberOfSectionsInCollectionViewForContext:(CRLiOSPresetCollectionContext *)arg1;
- (double)horizontalInsetForItemInSection:(unsigned long long)arg1 context:(CRLiOSPresetCollectionContext *)arg2;
- (double)additionalHeightForItemInSection:(unsigned long long)arg1 context:(CRLiOSPresetCollectionContext *)arg2;
@end
