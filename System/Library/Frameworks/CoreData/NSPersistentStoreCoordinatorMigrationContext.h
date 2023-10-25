//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSPersistentStore, NSStagedMigrationManager, NSString, NSURL, PFUbiquitySetupAssistant;

__attribute__((visibility("hidden")))
@interface NSPersistentStoreCoordinatorMigrationContext : NSObject
{
    _Bool _forceMigration;	// 8 = 0x8
    NSURL *_storeURL;	// 16 = 0x10
    NSString *_storeType;	// 24 = 0x18
    NSString *_configurationName;	// 32 = 0x20
    NSDictionary *_options;	// 40 = 0x28
    NSDictionary *_metadata;	// 48 = 0x30
    NSPersistentStore *_migratedStore;	// 56 = 0x38
    NSStagedMigrationManager *_stagedMigrationManager;	// 64 = 0x40
    PFUbiquitySetupAssistant *_ubiquitySetupAssistant;	// 72 = 0x48
}

@property(retain, nonatomic) PFUbiquitySetupAssistant *ubiquitySetupAssistant; // @synthesize ubiquitySetupAssistant=_ubiquitySetupAssistant;
@property(retain, nonatomic) NSStagedMigrationManager *stagedMigrationManager; // @synthesize stagedMigrationManager=_stagedMigrationManager;
@property(retain, nonatomic) NSPersistentStore *migratedStore; // @synthesize migratedStore=_migratedStore;
@property(nonatomic) _Bool forceMigration; // @synthesize forceMigration=_forceMigration;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *configurationName; // @synthesize configurationName=_configurationName;
@property(readonly, nonatomic) NSString *storeType; // @synthesize storeType=_storeType;
@property(readonly, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
- (void)dealloc;	// IMP=0x00000000001464b9
- (id)initWithStoreURL:(id)arg1 type:(id)arg2 options:(id)arg3;	// IMP=0x000000000014643f

@end
