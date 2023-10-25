//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCCloudChangeTokenController, BCCloudDataSource, BDSSaltVersionIdentifierManager, NSManagedObjectModel;
@protocol BCCloudCollectionDetailManager, BCCloudCollectionMemberManager;

@interface BCCloudCollectionsManager : NSObject
{
    _Bool _proxyMode;	// 8 = 0x8
    NSManagedObjectModel *_objectModel;	// 16 = 0x10
    BCCloudDataSource *_collectionDataSource;	// 24 = 0x18
    NSObject<BCCloudCollectionDetailManager> *_collectionDetailManager;	// 32 = 0x20
    NSObject<BCCloudCollectionMemberManager> *_collectionMemberManager;	// 40 = 0x28
    BCCloudChangeTokenController *_changeTokenController;	// 48 = 0x30
    BDSSaltVersionIdentifierManager *_saltVersionIdentifierManager;	// 56 = 0x38
}

+ (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0020000000086032
+ (id)sharedService;	// IMP=0x0010000000085244
+ (id)sharedManager;	// IMP=0x001000000008522a
- (void).cxx_destruct;	// IMP=0x002000000008629d
@property(nonatomic) _Bool proxyMode; // @synthesize proxyMode=_proxyMode;
@property(retain, nonatomic) BDSSaltVersionIdentifierManager *saltVersionIdentifierManager; // @synthesize saltVersionIdentifierManager=_saltVersionIdentifierManager;
@property(retain, nonatomic) BCCloudChangeTokenController *changeTokenController; // @synthesize changeTokenController=_changeTokenController;
@property(retain, nonatomic) NSObject<BCCloudCollectionMemberManager> *collectionMemberManager; // @synthesize collectionMemberManager=_collectionMemberManager;
@property(retain, nonatomic) NSObject<BCCloudCollectionDetailManager> *collectionDetailManager; // @synthesize collectionDetailManager=_collectionDetailManager;
@property(retain, nonatomic) BCCloudDataSource *collectionDataSource; // @synthesize collectionDataSource=_collectionDataSource;
@property(retain, nonatomic) NSManagedObjectModel *objectModel; // @synthesize objectModel=_objectModel;
- (id)diagnosticEntityInfos:(_Bool)arg1;	// IMP=0x0010000000086103
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000085eef
- (void)hasSaltChangedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000085da2
- (void)saltUpdatedWithSaltVersionIdentifier:(id)arg1;	// IMP=0x0010000000085ced
@property(nonatomic) _Bool enableCloudSync; // @dynamic enableCloudSync;
- (void)setEnableCloudSync:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008570c
- (id)collectionMemberManagerInstance;	// IMP=0x00100000000856ad
- (id)collectionDetailManagerInstance;	// IMP=0x001000000008564e
- (id)initService;	// IMP=0x00100000000852a9

@end
