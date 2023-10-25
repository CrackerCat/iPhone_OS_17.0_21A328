//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNStringUtils : NSObject
{
}

+ (id)removeWhitespaceFromString:(id)arg1;	// IMP=0x0080000000026778
+ (id)whitespaceDelimitedWordsFromString:(id)arg1;	// IMP=0x008000000002667d
+ (_Bool)validatePathComponentsOfString:(id)arg1 hasCount:(long long)arg2 error:(id *)arg3;	// IMP=0x0080000000026596
+ (_Bool)validateComponentsOfString:(id)arg1 separatedByString:(id)arg2 hasCount:(long long)arg3 error:(id *)arg4;	// IMP=0x00800000000264d5
+ (id)pathComponentsOfString:(id)arg1 componentsCount:(long long)arg2 error:(id *)arg3;	// IMP=0x008000000002642a
+ (id)componentsOfString:(id)arg1 separatedByString:(id)arg2 componentsCount:(long long)arg3 error:(id *)arg4;	// IMP=0x00800000000261b0
+ (id)nonemptyComponentsOfString:(id)arg1 separatedByCharactersInSet:(id)arg2;	// IMP=0x0080000000025f6d
+ (id)nonemptyComponentsOfString:(id)arg1 separatedByString:(id)arg2;	// IMP=0x0080000000025e3f
+ (id)nonemptyStringsArrayFromCollection:(id)arg1;	// IMP=0x0080000000025d0c
+ (Class)parseClassFromString:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000025bd9
+ (id)parsePositiveUInt32FromString:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000025a53
+ (id)parseUInt32FromString:(id)arg1 error:(id *)arg2;	// IMP=0x00800000000259de
+ (id)numberFromString:(id)arg1 error:(id *)arg2;	// IMP=0x008000000002597c
+ (id)numberFromString:(id)arg1;	// IMP=0x0080000000025862
+ (id)unsignedLongLongFromString:(id)arg1;	// IMP=0x00800000000257f7
+ (id)longLongFromString:(id)arg1;	// IMP=0x00800000000256a4
+ (id)doubleFromString:(id)arg1;	// IMP=0x0080000000025693
- (id)init;	// IMP=0x00000000000267f8

@end
