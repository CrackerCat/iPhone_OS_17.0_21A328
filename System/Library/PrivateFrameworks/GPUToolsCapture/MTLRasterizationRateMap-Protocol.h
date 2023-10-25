//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUToolsCapture/NSObject-Protocol.h>

@class NSString;
@protocol MTLBuffer, MTLDevice;

@protocol MTLRasterizationRateMap <NSObject>
@property(readonly) CDStruct_4bcfbbae parameterBufferSizeAndAlign;
@property(readonly) unsigned long long layerCount;
@property(readonly) CDStruct_14f26992 physicalGranularity;
@property(readonly) CDStruct_14f26992 screenSize;
@property(readonly) NSString *label;
@property(readonly) id <MTLDevice> device;
- (CDStruct_b2fbf00d)mapPhysicalToScreenCoordinates:(CDStruct_b2fbf00d)arg1 forLayer:(unsigned long long)arg2;
- (CDStruct_b2fbf00d)mapScreenToPhysicalCoordinates:(CDStruct_b2fbf00d)arg1 forLayer:(unsigned long long)arg2;
- (CDStruct_14f26992)physicalSizeForLayer:(unsigned long long)arg1;
- (void)copyParameterDataToBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2;
@end
