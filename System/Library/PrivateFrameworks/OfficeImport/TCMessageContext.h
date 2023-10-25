//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TCMessageContext : NSObject
{
    NSMutableSet *m_warnings;	// 8 = 0x8
    NSMutableSet *m_errors;	// 16 = 0x10
    NSMutableArray *m_affectedObjectStack;	// 24 = 0x18
    NSMutableDictionary *m_placeholderToObjectMap;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *mMessageSyncQueue;	// 40 = 0x28
}

+ (void)reportWarningsToDelegate;	// IMP=0x00600000002d8c37
+ (void)restoreAffectedObjectStack:(unsigned long long)arg1;	// IMP=0x00600000002d8b62
+ (unsigned long long)saveAffectedObjectStack;	// IMP=0x00600000002d8a95
+ (void)popAffectedObjectPlaceholder:(id)arg1;	// IMP=0x00600000002d89a2
+ (void)pushAffectedObjectPlaceholder;	// IMP=0x00600000002d88dc
+ (void)popAffectedObject;	// IMP=0x00600000002d8816
+ (void)pushAffectedObject:(id)arg1;	// IMP=0x00600000002d8723
+ (_Bool)isFileStructuredStorage;	// IMP=0x00600000002d8717
+ (void)setIsFileStructuredStorage:(_Bool)arg1;	// IMP=0x00600000002d870b
+ (unsigned long long)getErrorCount;	// IMP=0x00600000002d8634
+ (id)getErrorArray;	// IMP=0x00600000002d8519
+ (id)getWarningArray;	// IMP=0x00600000002d83fe
+ (void)removeContextForCurrentThread;	// IMP=0x00600000002d8361
+ (void)createContextForCurrentThread;	// IMP=0x00600000002d82a0
+ (void)reportErrorException:(id)arg1;	// IMP=0x00600000002d817c
+ (void)reportWarningException:(id)arg1;	// IMP=0x00600000002d7d27
+ (void)reportError:(id)arg1;	// IMP=0x00600000002d7b07
+ (void)reportWarning:(id)arg1;	// IMP=0x00600000002d79e3
+ (void)reportObject:(id)arg1 withWarning:(id)arg2;	// IMP=0x00600000002d78d1
+ (id)currentObjectOrPlaceholder;	// IMP=0x00600000002d77f8
+ (void)reportObjectOrPlaceholder:(id)arg1 withWarning:(id)arg2 parameters:(struct __va_list_tag [1])arg3;	// IMP=0x00600000002d76b5
+ (void)initialize;	// IMP=0x00600000002d7501
- (void).cxx_destruct;	// IMP=0x00000000002d8ec9
- (void)reportWarningForObject:(id)arg1 warning:(id)arg2 parameterList:(struct __va_list_tag [1])arg3;	// IMP=0x00000000002d8cfd
- (void)dealloc;	// IMP=0x00000000002d766d
- (id)init;	// IMP=0x00000000002d7544
- (void)reportWarningsToDelegate;	// IMP=0x00000000002db6d0
- (void)replacePlaceholdersWithObjects;	// IMP=0x00000000002db34a
- (void)setAffectedObject:(id)arg1 forPlaceholderWithKey:(id)arg2;	// IMP=0x00000000002db286
- (void)restoreAffectedObjectStack:(unsigned long long)arg1;	// IMP=0x00000000002db14d
- (unsigned long long)saveAffectedObjectStack;	// IMP=0x00000000002db090
- (void)popAffectedObjectPlaceholder:(id)arg1;	// IMP=0x00000000002dae97
- (void)resolveObjectOfCurrentAffectedObjectPlaceholder;	// IMP=0x00000000002daa8c
- (void)pushAffectedObjectPlaceholder;	// IMP=0x00000000002da9ef
- (void)popAffectedObject;	// IMP=0x00000000002da8ff
- (void)pushAffectedObject:(id)arg1;	// IMP=0x00000000002da7e6
- (void)addWarningMessageEntry:(id)arg1;	// IMP=0x00000000002da73a
- (void)addErrorMessageEntry:(id)arg1;	// IMP=0x00000000002da68e
- (id)currentObjectOrPlaceholder;	// IMP=0x00000000002da46e

@end
