//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshRequest.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface COAlarmSnoozeRequest : COMeshRequest
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000009a75a
- (void).cxx_destruct;	// IMP=0x000000000009a773
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009a6bf
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009a624
- (id)initWithAlarmIdentifier:(id)arg1;	// IMP=0x000000000009a5aa

@end
