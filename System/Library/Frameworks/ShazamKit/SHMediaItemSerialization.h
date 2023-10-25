//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SHMediaItemSerialization : NSObject
{
}

+ (_Bool)isInternalMediaItemProperty:(id)arg1;	// IMP=0x008000000001a298
+ (id)serializedFormatFromArrayValues:(id)arg1 property:(id)arg2;	// IMP=0x0080000000019eea
+ (id)transformArrayValue:(id)arg1 property:(id)arg2 shouldSerialize:(_Bool)arg3;	// IMP=0x00800000000197b8
+ (id)transformValue:(id)arg1 forProperty:(id)arg2 toSerializationFormat:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00800000000193f5
+ (id)transformProperties:(id)arg1 toSerializationFormat:(_Bool)arg2 error:(id *)arg3;	// IMP=0x008000000001915e
+ (id)dateFormatter;	// IMP=0x00800000000190f0
+ (id)propertiesFromSerializationFormat:(id)arg1 error:(id *)arg2;	// IMP=0x00800000000190d9
+ (id)serializationFormatForProperties:(id)arg1 error:(id *)arg2;	// IMP=0x00800000000190bf

@end
