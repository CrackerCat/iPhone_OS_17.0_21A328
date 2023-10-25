//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFModel-Protocol.h>
#import <HomeKitDaemon/MKFPersonPublicExtensions-Protocol.h>

@class MKFPersonDatabaseID, NSDate, NSString;

@protocol MKFPerson <MKFModel, MKFPersonPublicExtensions>
@property(readonly, copy, nonatomic) MKFPersonDatabaseID *databaseID;
@property(copy, nonatomic) NSDate *writerTimestamp;
@property(copy, nonatomic) NSString *name;
@end
