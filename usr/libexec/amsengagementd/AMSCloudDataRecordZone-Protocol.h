//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSHashable-Protocol.h"

@protocol AMSCloudDataRecordZoneIdentifier;

@protocol AMSCloudDataRecordZone <AMSHashable>
@property(readonly, nonatomic) id <AMSCloudDataRecordZoneIdentifier> identifier;
@property(readonly, nonatomic, getter=isDefaultRecordZone) _Bool defaultRecordZone;
@end
