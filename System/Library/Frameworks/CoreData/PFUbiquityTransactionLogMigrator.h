//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSManagedObjectModel, NSMappingModel, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionLogMigrator : NSObject
{
    NSManagedObjectModel *_srcModel;	// 8 = 0x8
    NSManagedObjectModel *_dstModel;	// 16 = 0x10
    NSMappingModel *_mappingModel;	// 24 = 0x18
    NSString *_localPeerID;	// 32 = 0x20
    NSDictionary *_mappingsByEntityName;	// 40 = 0x28
    NSSet *_removedEntities;	// 48 = 0x30
    _Bool _throttleLogs;	// 56 = 0x38
}

- (id)createDestinationObjectsFromSourceObjects:(id)arg1 migrationContext:(id)arg2;	// IMP=0x00000000002eac70
- (id)createDestinationObjectContentFromSourceObjectContent:(id)arg1 withEntityMapping:(id)arg2 migrationContext:(id)arg3;	// IMP=0x00000000002ea37a
- (void)populateMappingsByEntityName;	// IMP=0x00000000002e968e
- (void)dealloc;	// IMP=0x00000000002e9609
- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3 localPeerID:(id)arg4;	// IMP=0x00000000002e9571

@end
