//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSUIWebClientContext, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebODIAssessmentFeedbackAction
{
    NSString *_cacheIdentifier;	// 8 = 0x8
    unsigned long long _outcome;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000bb24b
@property(nonatomic) unsigned long long outcome; // @synthesize outcome=_outcome;
@property(retain, nonatomic) NSString *cacheIdentifier; // @synthesize cacheIdentifier=_cacheIdentifier;
- (id)runAction;	// IMP=0x00000000000bb05f
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x00000000000bae29

// Remaining properties
@property(readonly, nonatomic) AMSUIWebClientContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
