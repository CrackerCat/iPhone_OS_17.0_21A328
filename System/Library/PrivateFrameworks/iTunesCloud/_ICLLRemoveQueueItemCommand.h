//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _ICLLRemoveQueueItemCommand : PBCodable
{
    NSString *_itemId;	// 8 = 0x8
    NSMutableArray *_itemIdsToRemoves;	// 16 = 0x10
    NSString *_queueContext;	// 24 = 0x18
    int _removeType;	// 32 = 0x20
    int _revision;	// 36 = 0x24
    CDStruct_c634eefe _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001b8e99
- (unsigned long long)hash;	// IMP=0x00000000001b8dcf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b8c8b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b8a54
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b8893
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b8886
- (id)dictionaryRepresentation;	// IMP=0x00000000001b871a
- (id)description;	// IMP=0x00000000001b866b

@end
