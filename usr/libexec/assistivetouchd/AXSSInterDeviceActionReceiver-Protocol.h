//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXSSInterDeviceSwitchEvent, NSString;

@protocol AXSSInterDeviceActionReceiver
- (void)performSysdiagnose;
- (void)didReceiveSwitchEvent:(AXSSInterDeviceSwitchEvent *)arg1 forDeviceWithName:(NSString *)arg2;
@end
