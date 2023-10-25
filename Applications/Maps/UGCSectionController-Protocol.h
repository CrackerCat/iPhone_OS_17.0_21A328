//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol UGCPOIEnrichmentAnalyticsDelegate, UGCSectionControllerDelegate;

@protocol UGCSectionController <NSObject>
@property(readonly, nonatomic) __weak id <UGCPOIEnrichmentAnalyticsDelegate> analyticsDelegate;
@property(nonatomic) _Bool formInteractionEnabled;
@property(nonatomic) __weak id <UGCSectionControllerDelegate> delegate;
@property(readonly, nonatomic) NSArray *rowItems;
- (void)handleSuccessfulSubmission;
@end
