//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceCallback_DidReceiveRoutingServiceError
{
    NSError *_error;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000002862f
- (void).cxx_destruct;	// IMP=0x00000000000287a5
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000028661
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028637
- (unsigned long long)type;	// IMP=0x0000000000028624

@end
