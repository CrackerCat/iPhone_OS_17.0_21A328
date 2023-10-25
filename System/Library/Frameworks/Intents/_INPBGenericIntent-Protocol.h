//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBProperty;

@protocol _INPBGenericIntent <NSObject>
+ (Class)parametersType;
@property(readonly, nonatomic) _Bool hasVerb;
@property(copy, nonatomic) NSString *verb;
@property(readonly, nonatomic) unsigned long long parametersCount;
@property(copy, nonatomic) NSArray *parameters;
@property(readonly, nonatomic) _Bool hasMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *metadata;
@property(readonly, nonatomic) _Bool hasDomain;
@property(copy, nonatomic) NSString *domain;
- (_INPBProperty *)parametersAtIndex:(unsigned long long)arg1;
- (void)addParameters:(_INPBProperty *)arg1;
- (void)clearParameters;
@end
