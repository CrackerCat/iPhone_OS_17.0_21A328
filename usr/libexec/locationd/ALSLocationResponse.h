//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSMutableArray;

@interface ALSLocationResponse : PBCodable
{
    NSMutableArray *_cdmaCellTowers;	// 8 = 0x8
    NSMutableArray *_cellTowers;	// 16 = 0x10
    NSMutableArray *_lteCellTowers;	// 24 = 0x18
    NSMutableArray *_nr5GCellTowers;	// 32 = 0x20
    NSMutableArray *_scdmaCellTowers;	// 40 = 0x28
    NSMutableArray *_wirelessAPs;	// 48 = 0x30
}

+ (Class)nr5GCellTowerType;	// IMP=0x00200000009f6e18
+ (Class)scdmaCellTowerType;	// IMP=0x00100000009f6d63
+ (Class)lteCellTowerType;	// IMP=0x00100000009f6cae
+ (Class)cdmaCellTowerType;	// IMP=0x00100000009f6bf9
+ (Class)wirelessAPType;	// IMP=0x00100000009f6b44
+ (Class)cellTowerType;	// IMP=0x00100000009f6a8f
@property(retain, nonatomic) NSMutableArray *nr5GCellTowers; // @synthesize nr5GCellTowers=_nr5GCellTowers;
@property(retain, nonatomic) NSMutableArray *scdmaCellTowers; // @synthesize scdmaCellTowers=_scdmaCellTowers;
@property(retain, nonatomic) NSMutableArray *lteCellTowers; // @synthesize lteCellTowers=_lteCellTowers;
@property(retain, nonatomic) NSMutableArray *cdmaCellTowers; // @synthesize cdmaCellTowers=_cdmaCellTowers;
@property(retain, nonatomic) NSMutableArray *wirelessAPs; // @synthesize wirelessAPs=_wirelessAPs;
@property(retain, nonatomic) NSMutableArray *cellTowers; // @synthesize cellTowers=_cellTowers;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000009f8c88
- (unsigned long long)hash;	// IMP=0x00100000009f8bcf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000009f8aa1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000009f8357
- (void)copyTo:(id)arg1;	// IMP=0x00100000009f8093
- (void)writeTo:(id)arg1;	// IMP=0x00100000009f7bc1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000009f7bb4
- (id)dictionaryRepresentation;	// IMP=0x00100000009f6ea0
- (id)description;	// IMP=0x00100000009f6e29
- (id)nr5GCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00100000009f6dfb
- (unsigned long long)nr5GCellTowersCount;	// IMP=0x00100000009f6dde
- (void)addNr5GCellTower:(id)arg1;	// IMP=0x00100000009f6d91
- (void)clearNr5GCellTowers;	// IMP=0x00100000009f6d74
- (id)scdmaCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00100000009f6d46
- (unsigned long long)scdmaCellTowersCount;	// IMP=0x00100000009f6d29
- (void)addScdmaCellTower:(id)arg1;	// IMP=0x00100000009f6cdc
- (void)clearScdmaCellTowers;	// IMP=0x00100000009f6cbf
- (id)lteCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00100000009f6c91
- (unsigned long long)lteCellTowersCount;	// IMP=0x00100000009f6c74
- (void)addLteCellTower:(id)arg1;	// IMP=0x00100000009f6c27
- (void)clearLteCellTowers;	// IMP=0x00100000009f6c0a
- (id)cdmaCellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00100000009f6bdc
- (MISSING_TYPE *)cdmaCellTowersCount;	// IMP=0x00100000009f6bbf
- (void)addCdmaCellTower:(id)arg1;	// IMP=0x00100000009f6b72
- (void)clearCdmaCellTowers;	// IMP=0x00100000009f6b55
- (id)wirelessAPAtIndex:(unsigned long long)arg1;	// IMP=0x00100000009f6b27
- (unsigned long long)wirelessAPsCount;	// IMP=0x00100000009f6b0a
- (void)addWirelessAP:(id)arg1;	// IMP=0x00100000009f6abd
- (void)clearWirelessAPs;	// IMP=0x00100000009f6aa0
- (id)cellTowerAtIndex:(unsigned long long)arg1;	// IMP=0x00100000009f6a72
- (unsigned long long)cellTowersCount;	// IMP=0x00100000009f6a55
- (void)addCellTower:(id)arg1;	// IMP=0x00100000009f6a08
- (void)clearCellTowers;	// IMP=0x00100000009f69eb
- (void)dealloc;	// IMP=0x00100000009f6958

@end
