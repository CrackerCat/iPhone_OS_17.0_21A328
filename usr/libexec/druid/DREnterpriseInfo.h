//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DREnterpriseInfo : NSObject
{
    NSString *_orgName;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x004000000002a328
- (void).cxx_destruct;	// IMP=0x002000000002a608
@property(readonly, nonatomic) NSString *orgName; // @synthesize orgName=_orgName;
- (void)updateMDMName;	// IMP=0x001000000002a56e
- (id)init;	// IMP=0x001000000002a3ad

@end
