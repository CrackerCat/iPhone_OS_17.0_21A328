//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CRLShapeSearchResult : NSObject
{
    _Bool _isExactMatch;	// 8 = 0x8
    id _identifier;	// 16 = 0x10
    NSString *_matchingKeyword;	// 24 = 0x18
    unsigned long long _priority;	// 32 = 0x20
    NSNumber *_score;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000013abb3
@property(copy, nonatomic) NSNumber *score; // @synthesize score=_score;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool isExactMatch; // @synthesize isExactMatch=_isExactMatch;
@property(readonly, nonatomic) NSString *matchingKeyword; // @synthesize matchingKeyword=_matchingKeyword;
@property(readonly, nonatomic) id identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x001000000013aaf4
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000013a9c8
- (id)description;	// IMP=0x001000000013a8de
- (id)initWithIdentifier:(id)arg1 matchingKeyword:(id)arg2 priority:(unsigned long long)arg3 score:(id)arg4;	// IMP=0x001000000013a806

@end
