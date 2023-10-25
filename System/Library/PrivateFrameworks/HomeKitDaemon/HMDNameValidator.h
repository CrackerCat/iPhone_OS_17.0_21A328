//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSObject, NSPredicate, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDNameValidator : HMFObject
{
    NSMutableDictionary *_namespaceList;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSUUID *_homeManagerUUID;	// 24 = 0x18
    NSPredicate *_nonZeroLengthPredicate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000702b64
@property(retain, nonatomic) NSPredicate *nonZeroLengthPredicate; // @synthesize nonZeroLengthPredicate=_nonZeroLengthPredicate;
@property(retain, nonatomic) NSUUID *homeManagerUUID; // @synthesize homeManagerUUID=_homeManagerUUID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableDictionary *namespaceList; // @synthesize namespaceList=_namespaceList;
- (id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3 voiceShortcutCheck:(_Bool)arg4;	// IMP=0x0000000000702831
- (id)replaceActionSetName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;	// IMP=0x0000000000702819
- (id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;	// IMP=0x0000000000702804
- (id)removeName:(id)arg1 namespace:(id)arg2;	// IMP=0x0000000000702587
- (id)addName:(id)arg1 namespace:(id)arg2 voiceShortcutCheck:(_Bool)arg3;	// IMP=0x000000000070232b
- (id)addActionSetName:(id)arg1 namespace:(id)arg2;	// IMP=0x0000000000702313
- (id)addName:(id)arg1 namespace:(id)arg2;	// IMP=0x00000000007022fe
- (id)checkForConflict:(id)arg1 namespace:(id)arg2;	// IMP=0x0000000000702189
- (id)validateName:(id)arg1;	// IMP=0x000000000070204a
- (id)removeNamespace:(id)arg1;	// IMP=0x0000000000701e45
- (id)addNamespace:(id)arg1;	// IMP=0x0000000000701c40
- (id)_replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;	// IMP=0x000000000070124c
- (id)_removeName:(id)arg1 namespace:(id)arg2;	// IMP=0x0000000000701034
- (id)_addName:(id)arg1 namespace:(id)arg2;	// IMP=0x0000000000700ddd
- (id)_checkForConflict:(id)arg1 namespace:(id)arg2;	// IMP=0x0000000000700c2d
- (id)trimNotAllowedCharactersFromName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000700a12
- (id)_validateName:(id)arg1;	// IMP=0x00000000007005c8
- (id)despaceName:(id)arg1;	// IMP=0x0000000000700491
- (id)_removeNamespace:(id)arg1;	// IMP=0x0000000000700395
- (id)_addNamespace:(id)arg1;	// IMP=0x0000000000700277
- (id)initWithUUID:(id)arg1;	// IMP=0x0000000000700132

@end
