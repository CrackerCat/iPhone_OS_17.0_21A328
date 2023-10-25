//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/NSObject-Protocol.h>

@class GCMotion, GCPhysicalInputProfile, NSArray, NSString, _GCControllerDescription, _GCControllerInputComponentDescription, _GCDefaultLogicalDevice, _GCDevicePhysicalInputComponentDescription;
@protocol NSObject><NSCopying><NSSecureCoding;

@protocol _GCDefaultLogicalDeviceDelegate <NSObject>
- (GCPhysicalInputProfile *)logicalDevice:(_GCDefaultLogicalDevice *)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id <NSObject><NSCopying><NSSecureCoding>)arg2;
- (NSString *)logicalDeviceControllerProductCategory:(_GCDefaultLogicalDevice *)arg1;

@optional
- (_GCControllerDescription *)logicalDevice:(_GCDefaultLogicalDevice *)arg1 makeControllerForClient:(id)arg2;
- (Class)logicalDeviceControllerDescriptionClass:(_GCDefaultLogicalDevice *)arg1;
- (GCMotion *)logicalDevice:(_GCDefaultLogicalDevice *)arg1 makeControllerMotionWithIdentifier:(id <NSObject><NSCopying><NSSecureCoding>)arg2;
- (_Bool)logicalDeviceControllerIsAttachedToHost:(_GCDefaultLogicalDevice *)arg1;
- (NSString *)logicalDeviceControllerDetailedProductCategory:(_GCDefaultLogicalDevice *)arg1;
- (_GCControllerInputComponentDescription *)logicalDevice:(_GCDefaultLogicalDevice *)arg1 makeControllerInputDescriptionWithIdentifier:(id <NSObject><NSCopying><NSSecureCoding>)arg2 bindings:(NSArray *)arg3;
- (_GCDevicePhysicalInputComponentDescription *)logicalDevice:(_GCDefaultLogicalDevice *)arg1 makeControllerPhysicalInputProfileDescriptionWithIdentifier:(id <NSObject><NSCopying><NSSecureCoding>)arg2 bindings:(NSArray *)arg3;
@end
