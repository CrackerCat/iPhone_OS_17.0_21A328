//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SKGNameKeyNode
{
    NSString *_firstName;	// 16 = 0x10
    NSString *_lastName;	// 24 = 0x18
}

+ (id)nameKeyWithElementIdentifier:(unsigned long long)arg1 inGraph:(id)arg2;	// IMP=0x004000000002120b
+ (id)label;	// IMP=0x00100000000211fa
+ (Class)edgeClass;	// IMP=0x00100000000211e9
- (void).cxx_destruct;	// IMP=0x00200000000216cb
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (id)propertyDictionary;	// IMP=0x0010000000021591
- (id)initWithNameKey:(id)arg1 firstName:(id)arg2 lastName:(id)arg3;	// IMP=0x00100000000214ca
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x0010000000021373

@end
