//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLComputePipelineDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor
{
    struct MTLComputePipelineDescriptorPrivate _private;	// 16 = 0x10
}

- (id)newPipelineScript;	// IMP=0x000000000010e4d6
- (id)newSerializedComputeDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000010e162
- (id)newSerializedComputeData;	// IMP=0x000000000010e14c
- (void)validateWithDevice:(id)arg1;	// IMP=0x000000000010e116
- (_Bool)validateWithDevice:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010de7d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010dbd1
- (unsigned long long)hash;	// IMP=0x000000000010d9ca
- (void)setPluginData:(id)arg1;	// IMP=0x000000000010d98a
- (id)pluginData;	// IMP=0x000000000010d978
- (id)buffers;	// IMP=0x000000000010d966
- (const struct MTLComputePipelineDescriptorPrivate *)_descriptorPrivate;	// IMP=0x000000000010d956
- (void)setProfileControl:(id)arg1;	// IMP=0x000000000010d909
- (id)profileControl;	// IMP=0x000000000010d8f4
- (void)setNeedsCustomBorderColorSamplers:(_Bool)arg1;	// IMP=0x000000000010d8e3
- (_Bool)needsCustomBorderColorSamplers;	// IMP=0x000000000010d8d2
- (void)setOpenCLModeEnabled:(_Bool)arg1;	// IMP=0x000000000010d8b6
- (_Bool)openCLModeEnabled;	// IMP=0x000000000010d8a1
- (void)setOpenGLModeEnabled:(_Bool)arg1;	// IMP=0x000000000010d887
- (_Bool)openGLModeEnabled;	// IMP=0x000000000010d874
- (void)setResourceIndex:(unsigned long long)arg1;	// IMP=0x000000000010d862
- (unsigned long long)resourceIndex;	// IMP=0x000000000010d850
- (void)setForceResourceIndex:(_Bool)arg1;	// IMP=0x000000000010d83f
- (_Bool)forceResourceIndex;	// IMP=0x000000000010d82e
- (long long)textureWriteFPRoundingMode;	// IMP=0x000000000010d81c
- (void)setTextureWriteFPRoundingMode:(long long)arg1;	// IMP=0x000000000010d80a
- (long long)textureWriteRoundingMode;	// IMP=0x000000000010d7f8
- (void)setTextureWriteRoundingMode:(long long)arg1;	// IMP=0x000000000010d7e6
- (_Bool)supportIndirectCommandBuffers;	// IMP=0x000000000010d7d5
- (void)setSupportIndirectCommandBuffers:(_Bool)arg1;	// IMP=0x000000000010d7c4
- (unsigned long long)maxTotalThreadsPerThreadgroup;	// IMP=0x000000000010d7b2
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;	// IMP=0x000000000010d766
- (_Bool)threadGroupSizeIsMultipleOfThreadExecutionWidth;	// IMP=0x000000000010d755
- (void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(_Bool)arg1;	// IMP=0x000000000010d744
- (id)pipelineLibrary;	// IMP=0x000000000010d732
- (void)setPipelineLibrary:(id)arg1;	// IMP=0x000000000010d6f2
- (void)setDynamicLibraries:(id)arg1;	// IMP=0x000000000010d6e0
- (id)dynamicLibraries;	// IMP=0x000000000010d6ce
- (void)setInsertLibraries:(id)arg1;	// IMP=0x000000000010d6b0
- (id)insertLibraries;	// IMP=0x000000000010d69e
- (void)setPreloadedLibraries:(id)arg1;	// IMP=0x000000000010d657
- (id)preloadedLibraries;	// IMP=0x000000000010d645
- (void)setBinaryLibraries:(id)arg1;	// IMP=0x000000000010d633
- (id)binaryLibraries;	// IMP=0x000000000010d621
- (void)setBinaryArchives:(id)arg1;	// IMP=0x000000000010d5da
- (id)binaryArchives;	// IMP=0x000000000010d5c8
- (void)setMaxAccelerationStructureTraversalDepth:(unsigned long long)arg1;	// IMP=0x000000000010d5b3
- (unsigned long long)maxAccelerationStructureTraversalDepth;	// IMP=0x000000000010d59e
- (void)setMaxCallStackDepth:(unsigned long long)arg1;	// IMP=0x000000000010d589
- (unsigned long long)maxCallStackDepth;	// IMP=0x000000000010d574
- (void)setSupportAddingBinaryFunctions:(_Bool)arg1;	// IMP=0x000000000010d560
- (_Bool)supportAddingBinaryFunctions;	// IMP=0x000000000010d54c
- (void)setLinkedFunctions:(id)arg1;	// IMP=0x000000000010d4be
- (id)linkedFunctions;	// IMP=0x000000000010d487
- (void)setFunctionPointers:(id)arg1;	// IMP=0x000000000010d43a
- (id)functionPointers;	// IMP=0x000000000010d425
- (id)gpuCompilerSPIOptions;	// IMP=0x000000000010d413
- (void)setGpuCompilerSPIOptions:(id)arg1;	// IMP=0x000000000010d3cc
- (id)driverCompilerOptions;	// IMP=0x000000000010d3ba
- (void)setDriverCompilerOptions:(id)arg1;	// IMP=0x000000000010d373
- (id)stageInputDescriptor;	// IMP=0x000000000010d342
- (void)setStageInputDescriptor:(id)arg1;	// IMP=0x000000000010d2ba
- (id)computeFunction;	// IMP=0x000000000010d2a8
- (void)setComputeFunction:(id)arg1;	// IMP=0x000000000010d1af
- (void)setLabel:(id)arg1;	// IMP=0x000000000010d112
- (id)label;	// IMP=0x000000000010d101
- (void)reset;	// IMP=0x000000000010d026
- (id)description;	// IMP=0x000000000010d012
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000010c766
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010c4e3
- (void)dealloc;	// IMP=0x000000000010c42c
- (id)init;	// IMP=0x000000000010c396

@end
