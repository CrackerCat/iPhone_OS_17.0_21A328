//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BDSReadingHistoryUpdate, MISSING_TYPE, NSString;

@interface BDSReadingHistoryUpdateInfo : NSObject
{
    MISSING_TYPE *update;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000156360
- (void).cxx_destruct;	// IMP=0x00400000001567c0
- (id)init;	// IMP=0x0010000000156790
@property(nonatomic, readonly) NSString *description;
- (id)initWithUpdate:(id)arg1;	// IMP=0x0010000000156610
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000156510
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000156440
@property(nonatomic, readonly) BDSReadingHistoryUpdate *update; // @synthesize update;

@end
