//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLRenderPipelineColorAttachmentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLRenderPipelineColorAttachmentDescriptorInternal : MTLRenderPipelineColorAttachmentDescriptor
{
    struct MTLRenderPipelineAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

- (const struct MTLRenderPipelineAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x0000000000115948
- (void)setPixelFormat:(unsigned long long)arg1;	// IMP=0x0000000000115922
- (unsigned long long)pixelFormat;	// IMP=0x000000000011590d
- (void)setWriteMask:(unsigned long long)arg1;	// IMP=0x00000000001158e7
- (unsigned long long)writeMask;	// IMP=0x00000000001158d1
- (void)setAlphaBlendOperation:(unsigned long long)arg1;	// IMP=0x00000000001158af
- (unsigned long long)alphaBlendOperation;	// IMP=0x0000000000115899
- (void)setDestinationAlphaBlendFactor:(unsigned long long)arg1;	// IMP=0x0000000000115873
- (unsigned long long)destinationAlphaBlendFactor;	// IMP=0x000000000011585d
- (void)setSourceAlphaBlendFactor:(unsigned long long)arg1;	// IMP=0x0000000000115837
- (unsigned long long)sourceAlphaBlendFactor;	// IMP=0x0000000000115821
- (void)setRgbBlendOperation:(unsigned long long)arg1;	// IMP=0x0000000000115801
- (unsigned long long)rgbBlendOperation;	// IMP=0x00000000001157ec
- (void)setDestinationRGBBlendFactor:(unsigned long long)arg1;	// IMP=0x00000000001157c6
- (unsigned long long)destinationRGBBlendFactor;	// IMP=0x00000000001157b0
- (void)setSourceRGBBlendFactor:(unsigned long long)arg1;	// IMP=0x000000000011578a
- (unsigned long long)sourceRGBBlendFactor;	// IMP=0x0000000000115774
- (void)setBlendingEnabled:(_Bool)arg1;	// IMP=0x0000000000115756
- (_Bool)isBlendingEnabled;	// IMP=0x0000000000115744
- (id)description;	// IMP=0x0000000000115730
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000001156bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000115663
- (unsigned long long)hash;	// IMP=0x000000000011564a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001155fb
- (void)dealloc;	// IMP=0x00000000001155cc
- (id)init;	// IMP=0x0000000000115589

@end
