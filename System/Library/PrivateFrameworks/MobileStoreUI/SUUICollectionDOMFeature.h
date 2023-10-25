//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppContext, NSString;
@protocol SUUICollectionDOMFeatureTargetting;

__attribute__((visibility("hidden")))
@interface SUUICollectionDOMFeature : NSObject
{
    IKAppContext *_appContext;	// 8 = 0x8
    NSString *_featureName;	// 16 = 0x10
    id <SUUICollectionDOMFeatureTargetting> _collectionTarget;	// 24 = 0x18
}

+ (id)featureName;	// IMP=0x00100000000abb84
+ (id)makeFeatureJSObjectForFeature:(id)arg1;	// IMP=0x00100000000abaed
- (void).cxx_destruct;	// IMP=0x00000000000abd0f
@property(nonatomic) __weak id <SUUICollectionDOMFeatureTargetting> collectionTarget; // @synthesize collectionTarget=_collectionTarget;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (void)setEditing:(_Bool)arg1 options:(id)arg2;	// IMP=0x00000000000abb91
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;	// IMP=0x00000000000aba1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
