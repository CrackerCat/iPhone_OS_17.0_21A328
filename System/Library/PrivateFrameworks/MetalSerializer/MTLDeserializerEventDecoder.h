//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _MTLDeserializer;
@protocol MTLCommandBuffer;

__attribute__((visibility("hidden")))
@interface MTLDeserializerEventDecoder : NSObject
{
    _MTLDeserializer *deserializer;	// 8 = 0x8
    id <MTLCommandBuffer> commandBuffer;	// 16 = 0x10
}

@property(readonly) unsigned char type;
- (void)fault;	// IMP=0x0000000000005b82
- (void)decodeWithHeader:(CDStruct_d6d194d4 *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005a8e
- (void)decodeWaitForEventTimeout:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005a24
- (void)decodeWaitForEvent:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000059b6
- (void)decodeSignalEvent:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000005948
- (void)readCommand:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2 expectedSize:(unsigned long long)arg3 into:(void *)arg4;	// IMP=0x0000000000005889
- (id)initWithDeserializer:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x0000000000005846

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
