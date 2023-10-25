//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary;

@interface TransitPayFeatureDiscoveryMetadataStore : NSObject
{
    MISSING_TYPE *_defaultsDictionary;	// 8 = 0x8
    NSMutableDictionary *_tipInfoDictionary;	// 16 = 0x10
    _Bool _isTourist;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000008b2b77
- (void)_persistData;	// IMP=0x00100000008b2ac6
- (_Bool)_userHasBecomeLocalAndTipShouldDisplayInMarket:(unsigned long long)arg1 tipType:(int)arg2 currentTip:(id)arg3;	// IMP=0x00100000008b2715
- (id)_tipInfoForMarket:(unsigned long long)arg1 tipType:(int)arg2;	// IMP=0x00100000008b24bc
- (void)handleTipDisplayForMarket:(unsigned long long)arg1 tipType:(int)arg2 sinkType:(int)arg3;	// IMP=0x00100000008b1f93
- (void)handleManualTipDismissForMarket:(unsigned long long)arg1 tipType:(int)arg2 sinkType:(int)arg3;	// IMP=0x00100000008b1ce5
- (_Bool)shouldDisplayTipInMarket:(unsigned long long)arg1 tipType:(int)arg2 sinkType:(int)arg3;	// IMP=0x00100000008b16cd
- (id)initWithTouristStatus:(_Bool)arg1;	// IMP=0x00100000008b1587

@end
