//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerCompoundRequest
{
}

+ (unsigned long long)applicableRevisionForDependentRequestOfClass:(Class)arg1 beingPerformedByRevision:(unsigned long long)arg2;	// IMP=0x008000000007d7b4
+ (Class)configurationClass;	// IMP=0x008000000007d7a3
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;	// IMP=0x008000000007cdea
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x008000000007e163
- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;	// IMP=0x000000000007c6c8
- (unsigned long long)detectionLevel;	// IMP=0x000000000007c635
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007c303
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000007c16f
- (long long)dependencyProcessingOrdinality;	// IMP=0x000000000007c15d

@end
