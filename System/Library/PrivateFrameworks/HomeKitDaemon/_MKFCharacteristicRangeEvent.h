//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCharacteristicRangeEventDatabaseID, NSDate, NSNumber, NSObject, NSString, NSUUID;
@protocol MKFEventTrigger, MKFHome, MKFService;

__attribute__((visibility("hidden")))
@interface _MKFCharacteristicRangeEvent
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000cd02c7
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000cd0213
+ (Class)cd_modelClass;	// IMP=0x0010000000b26055
+ (id)fetchRequest;	// IMP=0x0010000000d352f2
@property(readonly) id <MKFHome> home;
- (id)castIfCharacteristicRangeEvent;	// IMP=0x0000000000cd01ba
@property(readonly, copy, nonatomic) MKFCharacteristicRangeEventDatabaseID *databaseID;
- (_Bool)validateForInsertOrUpdate:(id *)arg1;	// IMP=0x0000000000cd00ba
- (_Bool)validateMax:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000cd009b
- (_Bool)validateMin:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000cd007c

// Remaining properties
@property(copy, nonatomic) NSNumber *characteristicID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSNumber *endEvent;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(retain, nonatomic) NSObject *max; // @dynamic max;
@property(retain, nonatomic) NSObject *min; // @dynamic min;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(retain, nonatomic) id <MKFService> service;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFEventTrigger> trigger;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end
