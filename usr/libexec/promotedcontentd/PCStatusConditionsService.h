//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PCStatusConditionsService : NSObject
{
    NSMutableDictionary *_cachedEvaluations;	// 8 = 0x8
    id _notificationObject;	// 16 = 0x10
}

+ (long long)maxVersion;	// IMP=0x002000000010ff89
+ (id)sharedInstance;	// IMP=0x001000000010fcb3
- (void).cxx_destruct;	// IMP=0x0020000000110c3d
@property(retain) id notificationObject; // @synthesize notificationObject=_notificationObject;
@property(retain, nonatomic) NSMutableDictionary *cachedEvaluations; // @synthesize cachedEvaluations=_cachedEvaluations;
- (_Bool)evaluate:(id)arg1 error:(id *)arg2;	// IMP=0x001000000010ff94
- (void)clearCache;	// IMP=0x001000000010ff38
- (id)init;	// IMP=0x001000000010fd08

@end
