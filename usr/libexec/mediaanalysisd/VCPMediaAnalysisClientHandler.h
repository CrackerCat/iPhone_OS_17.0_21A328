//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MADServiceClientTaskQueuingScheduler, NSMutableDictionary, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, VCPMediaAnalysisClientProtocol;

@interface VCPMediaAnalysisClientHandler
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <VCPMediaAnalysisClientProtocol> _clientProxy;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_managementQueue;	// 24 = 0x18
    NSMutableDictionary *_taskIDMapping;	// 32 = 0x20
    struct CF<__SecTask *> _secTask;	// 40 = 0x28
    NSString *_clientBundleID;	// 48 = 0x30
    NSString *_clientTeamID;	// 56 = 0x38
    _Bool _userSafetyEntitled;	// 64 = 0x40
    MADServiceClientTaskQueuingScheduler *_queuingTaskScheduler;	// 72 = 0x48
}

+ (unsigned long long)disablePhotosPostCaptureProcessing;	// IMP=0x002000000004e292
+ (id)errorForStatus:(int)arg1 withDescription:(id)arg2;	// IMP=0x0010000000048b98
+ (id)clientHandlerWithXPCConnection:(id)arg1;	// IMP=0x0010000000048b33
- (id).cxx_construct;	// IMP=0x002000000006101d
- (void).cxx_destruct;	// IMP=0x0010000000060f88
- (void);	// IMP=0x0010000000060a6a
- (void)downloadVideoEncoderIfNeededWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000060701
- (void)queryAssetsPendingDeferredProcessingWithPhotoLibraryURL:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000060251
- (void)requestForceDeferredProcessing:(int)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000005fe31
- (void)requestDeferredProcessingTypes:(id)arg1 forAssetsWithLocalIdentifiers:(id)arg2 withPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005f4ca
- (void)requestProcessingTypes:(unsigned long long)arg1 forAssetsWithLocalIdentifiers:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 withRequestID:(int)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000005f11f
- (void)requestIdentificationOfFacesWithLocalIdentifiers:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 withRequestID:(int)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005ebdd
- (void)requestAutoCounterSIMLValidation:(int)arg1 withPhotoLibraryURL:(id)arg2 simlGroundTruthURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005e801
- (void)requestAutoCounterAccuracyCalculation:(int)arg1 withPhotoLibraryURL:(id)arg2 clusterStateURL:(id)arg3 groundTruthURL:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000005e331
- (void)requestAutoCounterAccuracyCalculation:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005dc70
- (void)requestDumpAutoCounter:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005d7ca
- (void)requestOptInAutoCounter:(int)arg1 withPhotoLibraryURL:(id)arg2 persons:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005d1a1
- (void)queryAutoCounterOptInStatus:(int)arg1 withPhotoLibraryURL:(id)arg2 personLocalIdentifiers:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005cc1f
- (void)requestVIPModelStorageFilepathForPhotoLibraryURL:(id)arg1 forModelType:(unsigned long long)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005c912
- (void)requestPersonPreferenceForPhotoLibraryURL:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000005c74f
- (void)requestRebuildPersons:(int)arg1 withLocalIdentifiers:(id)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005be6e
- (void)requestReclusterFaces:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005b5d7
- (void)requestResetFaceClusteringState:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005ad40
- (void)requestClusterCacheValidation:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005a487
- (void)requestPersonPromoterStatus:(int)arg1 withAdvancedFlag:(_Bool)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005a2d0
- (void)requestSuggestedMePersonIdentifier:(int)arg1 withContext:(id)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000599b6
- (void)requestResetPetClassificationModel:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005911f
- (void)requestResetFaceClassificationModel:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000058888
- (void)requestResetPersons:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000057ff1
- (void)requestFaceCandidatesforKeyFace:(int)arg1 withPersonsWithLocalIdentifiers:(id)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000576d7
- (void)requestUpdateKeyFacesOfPersons:(int)arg1 withLocalIdentifiers:(id)arg2 andForceUpdate:(_Bool)arg3 andPhotoLibraryURL:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000056db0
- (void)requestSuggestedPersons:(int)arg1 withPersonWithLocalIdentifier:(id)arg2 toBeConfirmedPersonSuggestions:(id)arg3 toBeRejectedPersonSuggestions:(id)arg4 andPhotoLibraryURL:(id)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000056359
- (void)currentOutstandingTasksWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000562ad
- (void)cancelBackgroundActivityWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000056177
- (void)notifyLibraryAvailableAtURL:(id)arg1;	// IMP=0x0010000000055f5d
- (void)cancelAllRequests;	// IMP=0x0010000000055b8e
- (void)cancelRequest:(int)arg1;	// IMP=0x00100000000558a2
- (void)requestRecentsProcessing:(int)arg1 withTaskID:(unsigned long long)arg2 photoLibraryWithURL:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005490d
- (void)requestAssetProcessing:(int)arg1 withTaskID:(unsigned long long)arg2 forLocalIdentifiers:(id)arg3 fromPhotoLibraryWithURL:(id)arg4 withOptions:(id)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x00100000000537c1
- (void)requestVideoFramesProcessing:(int)arg1 withTaskID:(unsigned long long)arg2 frames:(id)arg3 options:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000052c2c
- (void)requestLibraryProcessing:(int)arg1 withTaskID:(unsigned long long)arg2 forPhotoLibraryURL:(id)arg3 withOptions:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x00100000000511d1
- (void)_resetProcessingStatusForTaskID:(unsigned long long)arg1 andPhotoLibrary:(id)arg2;	// IMP=0x0010000000050fdf
- (void)requestAssetAnalysis:(int)arg1 forPhotoLibraryURL:(id)arg2 withLocalIdentifiers:(id)arg3 realTime:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000050337
- (void)requestAssetAnalysis:(int)arg1 forLocalIdentifiers:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 withOptions:(id)arg4 analysisTypes:(unsigned long long)arg5 withReply:(CDUnknownBlockType)arg6;	// IMP=0x001000000004f66d
- (void)requestURLAssetAnalysis:(int)arg1 forAssetWithResourcePaths:(id)arg2 withOptions:(id)arg3 analysisTypes:(unsigned long long)arg4 sandboxTokens:(id)arg5 withReply:(CDUnknownBlockType)arg6;	// IMP=0x001000000004e29a
- (void)endEntryPoint;	// IMP=0x001000000004e27d
- (void)cacheHitWithQueryID:(unsigned long long)arg1 cachedResultQueryID:(unsigned long long)arg2 engagementSuggestionType:(id)arg3;	// IMP=0x001000000004e01d
- (void)cacheHitWithQueryID:(unsigned long long)arg1 cachedResultQueryID:(unsigned long long)arg2;	// IMP=0x001000000004dfff
- (void)startEntryPointWithQueryID:(unsigned long long)arg1 andEvent:(unsigned long long)arg2;	// IMP=0x001000000004dfe4
- (void)startEntryPointWithQueryID:(unsigned long long)arg1;	// IMP=0x001000000004dfcc
- (void)queryUserSafetyEnablement:(CDUnknownBlockType)arg1;	// IMP=0x001000000004ddfa
- (void)resetPerformanceMeasurements;	// IMP=0x001000000004ddf0
- (void)queryPerformanceMeasurementsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000004dd88
- (void)requestVideoProcessing:(id)arg1 assetIdentifier:(id)arg2 identifierType:(unsigned long long)arg3 photoLibraryURL:(id)arg4 requestID:(int)arg5 isIncremental:(_Bool)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x001000000004dbf5
- (void)requestVideoProcessing:(id)arg1 assetURL:(id)arg2 sandboxToken:(id)arg3 identifier:(id)arg4 requestID:(int)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000004d873
- (void)requestVideoProcessing:(id)arg1 asset:(id)arg2 requestID:(int)arg3 isIncremental:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000004d250
- (void)requestImageProcessingWithCloudIdentifierRequests:(id)arg1 requestID:(int)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004cb2c
- (void)requestImageProcessing:(id)arg1 forAssetWithCloudIdentifier:(id)arg2 requestID:(int)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004bf42
- (void)requestImageProcessing:(id)arg1 forIOSurface:(id)arg2 withOrientation:(unsigned int)arg3 assetLocalIdentifier:(id)arg4 photoLibraryURL:(id)arg5 requestID:(int)arg6 andReply:(CDUnknownBlockType)arg7;	// IMP=0x001000000004b72a
- (void)requestImageProcessing:(id)arg1 forAssetWithIdentifier:(id)arg2 identifierType:(unsigned long long)arg3 fromPhotoLibraryWithURL:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x001000000004b08a
- (id)assetWithIdentifier:(id)arg1 identifierType:(unsigned long long)arg2 fromPhotoLibraryWithURL:(id)arg3 error:(id *)arg4;	// IMP=0x001000000004a851
- (void)requestImageProcessing:(id)arg1 forImageData:(id)arg2 withUniformTypeIdentifier:(id)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x001000000004a206
- (void)requestImageProcessing:(id)arg1 forAssetURL:(id)arg2 withSandboxToken:(id)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000049a28
- (void)requestImageProcessing:(id)arg1 forIOSurface:(id)arg2 withOrientation:(unsigned int)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x00100000000492e8
- (long long)consumeSandboxExtension:(id)arg1 url:(id)arg2;	// IMP=0x0010000000049082
- (void)requestMediaAnalysisDatabaseAccessSandboxExtensionWithPhotoLibraryURL:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000048d84
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00100000000482be
- (id)init;	// IMP=0x00100000000482b0

@end
