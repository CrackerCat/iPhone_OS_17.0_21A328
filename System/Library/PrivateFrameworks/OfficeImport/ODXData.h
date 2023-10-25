//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODXData : NSObject
{
}

+ (id)readModelIdentifierFromNode:(struct _xmlNode *)arg1 attributeName:(const char *)arg2;	// IMP=0x00800000001e4e3d
+ (void)readNode:(struct _xmlNode *)arg1 toDiagram:(id)arg2 state:(id)arg3;	// IMP=0x00800000001e4020
+ (void)associatePresentationsInIdMap:(id)arg1;	// IMP=0x00800000001e5eaa
+ (int)readConnectionTypeFromNode:(struct _xmlNode *)arg1;	// IMP=0x00800000001e57da
+ (void)readConnectionFromNode:(struct _xmlNode *)arg1 pointIdMap:(id)arg2 state:(id)arg3;	// IMP=0x00800000001e5292
+ (void)readConnectionListFromNode:(struct _xmlNode *)arg1 pointIdMap:(id)arg2 state:(id)arg3;	// IMP=0x00800000001e5144
+ (int)readPointTypeFromNode:(struct _xmlNode *)arg1;	// IMP=0x00800000001e4974
+ (id)readPointFromNode:(struct _xmlNode *)arg1 pointIdMap:(id)arg2 state:(id)arg3;	// IMP=0x00800000001e440f
+ (id)readPointListFromNode:(struct _xmlNode *)arg1 pointIdMap:(id)arg2 state:(id)arg3;	// IMP=0x00800000001e4243

@end
