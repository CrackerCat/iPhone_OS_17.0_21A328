//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface model_fwEnd_10pct : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00600000000593b2
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0060000000059324
+ (id)URLOfModelInThisBundle;	// IMP=0x0060000000058ff7
- (void).cxx_destruct;	// IMP=0x0000000000059fd3
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000059cd0
- (id)predictionFromIn:(id)arg1 lstm_1_h_in:(id)arg2 lstm_1_c_in:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000059c06
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005997b
- (void)predictionFromFeatures:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000059707
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000059546
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000594d0
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000592ac
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000059234
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000591af
- (id)init;	// IMP=0x0000000000059152
- (id)initWithMLModel:(id)arg1;	// IMP=0x00000000000590c1

@end
