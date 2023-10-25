//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface IDSDSessionKeyValueDeliveryLocalEntry : NSObject
{
    unsigned int _encryption;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSString *_capability;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000002d12b2
@property(retain) NSString *capability; // @synthesize capability=_capability;
@property(retain) NSData *data; // @synthesize data=_data;
@property unsigned int encryption; // @synthesize encryption=_encryption;
- (id)initWithData:(id)arg1 encryption:(unsigned int)arg2 capability:(id)arg3;	// IMP=0x00100000002d11b7

@end
