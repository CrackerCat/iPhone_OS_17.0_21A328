//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSKnownKeysDictionary.h"

@class NSKnownKeysMappingStrategy;

__attribute__((visibility("hidden")))
@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary
{
    int _cd_rc;	// 8 = 0x8
    int _count;	// 12 = 0xc
    NSKnownKeysMappingStrategy *_keySearch;	// 16 = 0x10
    id _values[0];	// 24 = 0x18
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x00600000000baf62
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x00600000000badf2
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x00600000000badea
+ (id)initWithDictionary:(id)arg1;	// IMP=0x00600000000badd6
+ (id)initWithDictionary:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x00600000000bab21
+ (id)initWithObjects:(id *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00600000000baa82
+ (id)initForKeys:(id)arg1;	// IMP=0x00600000000baa22
+ (id)initWithSearchStrategy:(id)arg1;	// IMP=0x00600000000ba9be
+ (id)initWithCoder:(id)arg1;	// IMP=0x00600000000ba70a
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000000ba701
+ (id)alloc;	// IMP=0x00600000000ba6f8
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000ba6f0
- (void)removeAllObjects;	// IMP=0x00000000000bbef3
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x00000000000bbc23
- (id)objectEnumerator;	// IMP=0x00000000000bbbbf
- (_Bool)isEqualToDictionary:(id)arg1;	// IMP=0x00000000000bbb88
- (void)getObjects:(id *)arg1;	// IMP=0x00000000000bbb36
- (void)getKeys:(id *)arg1;	// IMP=0x00000000000bbabc
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;	// IMP=0x00000000000bb9f6
- (id)allValues;	// IMP=0x00000000000bb95a
- (id)allKeys;	// IMP=0x00000000000bb8b8
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000bb759
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000000000bb6d4
- (id)objectForKey:(id)arg1;	// IMP=0x00000000000bb693
- (unsigned long long)_valueCountByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000bb67d
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000bb664
- (id)keyEnumerator;	// IMP=0x00000000000bb429
- (unsigned long long)count;	// IMP=0x00000000000bb400
- (void)setValues:(id *)arg1;	// IMP=0x00000000000bb3e9
- (void)_setValues:(id *)arg1 retain:(_Bool)arg2;	// IMP=0x00000000000bb331
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000bb282
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000bb271
- (const id *)knownKeyValuesPointer;	// IMP=0x00000000000bb261
- (const id *)values;	// IMP=0x00000000000bb251
- (id)mapping;	// IMP=0x00000000000bb240
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bb1d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bb12c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000baf73
- (Class)classForCoder;	// IMP=0x00000000000baf51
- (void)dealloc;	// IMP=0x00000000000baece
- (_Bool)_isDeallocating;	// IMP=0x00000000000baeae
- (_Bool)_tryRetain;	// IMP=0x00000000000bae71
- (unsigned long long)retainCount;	// IMP=0x00000000000bae59
- (oneway void)release;	// IMP=0x00000000000bae1b
- (id)retain;	// IMP=0x00000000000badfa

@end
