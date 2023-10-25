//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KnowledgeGraphKit/MANode.h>

@class NSString;

@interface SIKGNode : MANode
{
    NSString *_value;	// 8 = 0x8
}

+ (id)nodeWithElementIdentifier:(unsigned long long)arg1 inGraph:(id)arg2;	// IMP=0x0020000000042dcf
+ (id)phoneRelation;	// IMP=0x0010000000042d64
+ (id)emailRelation;	// IMP=0x0010000000042cf9
+ (id)rawNameRelation;	// IMP=0x0010000000042c8e
+ (id)nameKeyRelation;	// IMP=0x0010000000042c23
+ (id)displayNameRelation;	// IMP=0x0010000000042bb8
+ (id)referenceRelation;	// IMP=0x0010000000042b4d
+ (id)contactRelation;	// IMP=0x0010000000042ae2
+ (id)personRelation;	// IMP=0x0010000000042a77
+ (id)userRelation;	// IMP=0x0010000000042a0c
+ (id)filter;	// IMP=0x0010000000042985
+ (id)label;	// IMP=0x001000000004297d
- (void).cxx_destruct;	// IMP=0x00200000000438b6
- (float)weight;	// IMP=0x00100000000438a8
- (unsigned short)domain;	// IMP=0x001000000004389d
@property(readonly, nonatomic) NSString *value;
- (id)label;	// IMP=0x001000000004386e
- (id)propertyDictionary;	// IMP=0x00100000000437e6
- (id)filter;	// IMP=0x00100000000435b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004353b
- (_Bool)isEqualToNode:(id)arg1;	// IMP=0x00100000000433cb
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x0010000000043334
- (id)initWithValue:(id)arg1;	// IMP=0x0010000000043276

@end
