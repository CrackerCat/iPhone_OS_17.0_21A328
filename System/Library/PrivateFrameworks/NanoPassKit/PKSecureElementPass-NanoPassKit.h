//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKSecureElementPass.h>

@class NSSet;

@interface PKSecureElementPass (NanoPassKit)
- (unsigned long long)npkLinkedAccountFeatureIdentifier;	// IMP=0x0030000000027bbb
- (_Bool)npkProvidesLinkedAccountFeatureIdentifier;	// IMP=0x0030000000027ba2
- (_Bool)npkSupportUWBSecureRanging;	// IMP=0x0030000000027b1f
@property(readonly, nonatomic) NSSet *npkSubcredentials;
- (_Bool)npkExclusivelyTransactsOverNFC;	// IMP=0x0030000000027a63
- (_Bool)npkExclusivelyTransactsOverBluetooth;	// IMP=0x00300000000279f7
- (_Bool)npkSupportsNFC;	// IMP=0x003000000002798b
- (_Bool)npkSupportsBluetooth;	// IMP=0x003000000002791f
@end
