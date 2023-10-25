//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _MTLDeserializer;
@protocol MTLBlitCommandEncoderSPI;

__attribute__((visibility("hidden")))
@interface MTLDeserializerBlitDecoder : NSObject
{
    _MTLDeserializer *deserializer;	// 8 = 0x8
    id <MTLBlitCommandEncoderSPI> blitEncoder;	// 16 = 0x10
}

@property(readonly) unsigned char type;
- (void)fault;	// IMP=0x00000000000028ac
- (void)decodeWithHeader:(CDStruct_d6d194d4 *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000002644
- (void)decodeBlitWaitForFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000025e5
- (void)decodeBlitUpdateFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000002586
- (void)decodeSynchronizeTextureImage:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000255a
- (void)decodeSynchronizeResource:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000252e
- (void)decodeOptimizeImage:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000024a8
- (void)decodeOptimize:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000242c
- (void)decodeGenerateMipmaps:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000023ce
- (void)decodeFillBuffer:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000022e0
- (void)decodeCopyFromTextureToTextureWithOptions:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000021ed
- (void)decodeCopyFromTextureToTextureWithNumSliceLevel:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000002147
- (void)decodeCopyFromTextureToTexture:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000000205c
- (void)decodeCopyFromTextureToBuffer:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001f74
- (void)decodeCopyFromBufferToBuffer:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001ee4
- (void)decodeCopyFromBufferToTexture:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000001e00
- (id)getTextureForReferenceNonNull:(unsigned int)arg1;	// IMP=0x0000000000001d90
- (id)getBufferForReferenceNonNull:(unsigned int)arg1;	// IMP=0x0000000000001d20
- (void)readCommand:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2 expectedSize:(unsigned long long)arg3 into:(void *)arg4;	// IMP=0x0000000000001c61
- (void)dealloc;	// IMP=0x0000000000001c26
- (id)initWithDeserializer:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x0000000000001bc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
