//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BluetoothDevice, BluetoothManager, NSString;

@interface SDHeadphoneEndCallManager : NSObject
{
    NSString *_bluetoothAddressString;	// 8 = 0x8
    BluetoothDevice *_bluetoothDevice;	// 16 = 0x10
    BluetoothManager *_btManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000003d9ec
@property(retain, nonatomic) BluetoothManager *btManager; // @synthesize btManager=_btManager;
@property(retain, nonatomic) BluetoothDevice *bluetoothDevice; // @synthesize bluetoothDevice=_bluetoothDevice;
@property(readonly, copy, nonatomic) NSString *bluetoothAddressString; // @synthesize bluetoothAddressString=_bluetoothAddressString;
- (_Bool)isStatusUnknown;	// IMP=0x001000000003d6e7
- (id)initWithBluetoothAddress:(id)arg1;	// IMP=0x001000000003d5f4

@end
