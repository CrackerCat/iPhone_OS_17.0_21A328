//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, REMObjectID;

@interface _TtC7reminddP33_38651BD03EE367A00C80EB4E8CAA4E4629ChangeTrackingAccountProvider : NSObject
{
    MISSING_TYPE *accountID;	// 8 = 0x8
    MISSING_TYPE *rem_accountObjectID;	// 24 = 0x18
    MISSING_TYPE *accountDescription;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00400000000f2f80
- (id)init;	// IMP=0x00100000000f2ee0
- (id)loggingDescription;	// IMP=0x00100000000f2e80
@property(nonatomic, copy) NSString *accountDescription;
@property(nonatomic, retain) REMObjectID *rem_accountObjectID; // @synthesize rem_accountObjectID;
@property(nonatomic, copy) NSString *accountID;

@end
