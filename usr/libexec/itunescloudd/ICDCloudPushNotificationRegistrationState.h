//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ICDCloudPushNotificationRegistrationState : NSObject
{
    NSMutableDictionary *_accountRegistrationStates;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000ffb24
- (void)setRegistrationState:(id)arg1 forAccountDSID:(id)arg2;	// IMP=0x00100000000ffb0e
- (id)registrationStateForAccountDSID:(id)arg1;	// IMP=0x00100000000ffaf8
- (id)dictionaryRepresentation;	// IMP=0x00100000000ff9fd
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00100000000ff8e2

@end
