//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapServiceTraits, GEORPFeedbackRequestParameters, NSArray;

@interface UGCSubmissionParameters : NSObject
{
    GEORPFeedbackRequestParameters *_requestParams;	// 8 = 0x8
    NSArray *_attachedImages;	// 16 = 0x10
    GEOMapServiceTraits *_traits;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000023b45f
@property(readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) NSArray *attachedImages; // @synthesize attachedImages=_attachedImages;
@property(readonly, nonatomic) GEORPFeedbackRequestParameters *requestParams; // @synthesize requestParams=_requestParams;
- (id)initWithRequestParameters:(id)arg1 attachedImages:(id)arg2;	// IMP=0x001000000023b338

@end
