//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersistentContainer;

@interface RMPersistentController : NSObject
{
    NSPersistentContainer *_persistentContainer;	// 8 = 0x8
}

+ (id)currentPersistentHistoryTokenForContainer:(id)arg1;	// IMP=0x0020000000068ab3
+ (id)unarchiveObjectOfClasses:(id)arg1 forKey:(id)arg2 fromMetadataForPersistentStore:(id)arg3;	// IMP=0x001000000006877d
+ (id)unarchiveObjectOfClass:(Class)arg1 forKey:(id)arg2 fromMetadataForPersistentStore:(id)arg3;	// IMP=0x00100000000686d2
+ (void)archiveObject:(id)arg1 forKey:(id)arg2 intoMetadataForPersistentStore:(id)arg3;	// IMP=0x001000000006847a
+ (void)metadataOnPersistentStore:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000682f5
+ (id)managedObjectModel;	// IMP=0x0010000000068250
+ (id)managedObjectModelURL;	// IMP=0x00100000000681eb
+ (id)_createLoadedPersistentContainerWithURL:(id)arg1;	// IMP=0x0010000000067de0
+ (_Bool)startPersistentController;	// IMP=0x0010000000067d83
+ (id)sharedController;	// IMP=0x0010000000067ca4
- (void).cxx_destruct;	// IMP=0x0020000000068b3d
@property(readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (id)initWithPersistentContainer:(id)arg1;	// IMP=0x0010000000067c39

@end
