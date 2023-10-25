//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSKeyedArchiver;

__attribute__((visibility("hidden")))
@interface HMDXPCKeyedArchiver : HMFObject
{
    NSKeyedArchiver *_archiver;	// 8 = 0x8
}

+ (void *)XPCTransportTypeAssociationKey;	// IMP=0x0060000000aeac81
- (void).cxx_destruct;	// IMP=0x0000000000aeac6e
@property(readonly, nonatomic) NSKeyedArchiver *archiver; // @synthesize archiver=_archiver;
@property(readonly, copy) NSData *encodedData;
- (void)finishEncoding;	// IMP=0x0000000000aeabd0
- (void)encodeObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000aeab45
- (void)_configure;	// IMP=0x0000000000ae998a
- (void)dealloc;	// IMP=0x0000000000ae992c
- (id)initForWritingWithMessage:(id)arg1;	// IMP=0x0000000000ae9854

@end
