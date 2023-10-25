//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ESDContainer
{
    NSMutableArray *mChildren;	// 32 = 0x20
}

+ (void)readChildrenOfObject:(struct EshObject *)arg1 reader:(struct OcReader *)arg2 toArray:(id)arg3;	// IMP=0x00600000000dd51e
+ (void)pbReadChildrenOfObject:(struct EshObject *)arg1 toArray:(id)arg2 state:(id)arg3;	// IMP=0x006000000000db43
- (void).cxx_destruct;	// IMP=0x000000000032ab36
- (void)writeToWriter:(struct OcWriter *)arg1;	// IMP=0x000000000032aa5f
- (id)containerChildAt:(unsigned long long)arg1;	// IMP=0x000000000032a9e7
- (id)containerChildOfType:(unsigned short)arg1 instance:(short)arg2 mustExist:(_Bool)arg3;	// IMP=0x000000000032a96f
- (id)firstContainerChildOfType:(unsigned short)arg1 mustExist:(_Bool)arg2;	// IMP=0x000000000032a8f7
- (id)containerFromObject:(id)arg1 mustExist:(_Bool)arg2;	// IMP=0x000000000032a87a
- (id)childOfType:(unsigned short)arg1 instance:(short)arg2;	// IMP=0x000000000001dea7
- (unsigned long long)indexOfFirstChildOfType:(unsigned short)arg1 afterIndex:(unsigned long long)arg2;	// IMP=0x00000000000229bc
- (id)firstChildOfType:(unsigned short)arg1 afterIndex:(unsigned long long)arg2;	// IMP=0x000000000032a828
- (id)firstChildOfType:(unsigned short)arg1 afterChild:(id)arg2;	// IMP=0x000000000032a71e
- (id)firstChildOfType:(unsigned short)arg1;	// IMP=0x0000000000017f8d
- (void)removeChild:(id)arg1;	// IMP=0x000000000032a66f
- (id)insertEshChild:(struct EshObject *)arg1 at:(unsigned long long)arg2;	// IMP=0x000000000032a590
- (void)insertChild:(id)arg1 at:(unsigned long long)arg2;	// IMP=0x000000000032a4e9
- (struct EshObject *)addAtomChildOfType:(unsigned short)arg1;	// IMP=0x000000000032a491
- (id)addContainerChildOfType:(unsigned short)arg1;	// IMP=0x000000000032a435
- (id)addChildOfType:(unsigned short)arg1;	// IMP=0x000000000032a3b6
- (id)addEshChild:(struct EshObject *)arg1;	// IMP=0x000000000032a329
- (void)addChild:(id)arg1;	// IMP=0x00000000000a4c88
- (id)childAt:(unsigned long long)arg1;	// IMP=0x000000000001827a
- (unsigned long long)childCount;	// IMP=0x000000000001825d
- (void *)eshContainer;	// IMP=0x00000000000a4d1d
- (id)initFromReader:(struct OcReader *)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3;	// IMP=0x0000000000159e5e
- (id)initWithEshObject:(struct EshObject *)arg1;	// IMP=0x0000000000010414
- (id)shapeContainer;	// IMP=0x00000000001426fe
- (void *)eshGroup;	// IMP=0x000000000010ab93
- (id)initForExcelBinaryWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;	// IMP=0x0000000000397809
- (id)initPBWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;	// IMP=0x0000000000430a50
- (void)addCStringWithChar2String:(const unsigned short *)arg1 instance:(int)arg2;	// IMP=0x0000000000431153
- (void)addCStringWithNSString:(id)arg1 instance:(int)arg2;	// IMP=0x00000000004310ad
- (id)addPptEshClientChildOfType:(unsigned short)arg1;	// IMP=0x0000000000430e8e
- (struct EshObject *)addPptAtomChildOfType:(unsigned short)arg1;	// IMP=0x0000000000430e55
- (id)addPptContainerChildOfType:(unsigned short)arg1;	// IMP=0x0000000000430dd7

@end
