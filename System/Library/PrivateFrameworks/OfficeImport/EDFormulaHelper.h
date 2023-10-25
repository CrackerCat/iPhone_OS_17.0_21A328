//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ECMappingContext, EDWorkbook, EDWorksheet, NSString;

__attribute__((visibility("hidden")))
@interface EDFormulaHelper : NSObject
{
    EDWorkbook *mWorkbook;	// 8 = 0x8
    EDWorksheet *mWorksheet;	// 16 = 0x10
    int mRowNumber;	// 24 = 0x18
    int mColumnNumber;	// 28 = 0x1c
    ECMappingContext *mMappingContext;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003a2c6f
- (int)columnNumber;	// IMP=0x00000000003a2c66
- (int)rowNumber;	// IMP=0x00000000003a2c5d
- (id)workbook;	// IMP=0x00000000003a2c4f
- (int)resolveFunctionName:(id)arg1;	// IMP=0x00000000001f64f5
- (_Bool)isCurrentSheet:(id)arg1;	// IMP=0x000000000020d5cc
- (unsigned long long)resolveTableColumn:(id)arg1 columnName:(id)arg2;	// IMP=0x00000000003a2af1
- (unsigned long long)resolveTableToSheetId:(id)arg1;	// IMP=0x000000000022eb1b
- (id)resolveTable:(id)arg1;	// IMP=0x000000000020ce36
- (unsigned long long)resolveFile:(id)arg1;	// IMP=0x00000000003a2acf
- (unsigned long long)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;	// IMP=0x00000000003a2a2c
- (unsigned long long)resolveSheet:(id)arg1;	// IMP=0x000000000020d22e
- (unsigned long long)resolveName:(id)arg1;	// IMP=0x000000000020cbb2
- (id)initWithWorkbook:(id)arg1 worksheet:(id)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4;	// IMP=0x00000000001f16fb
- (unsigned long long)createIndexWithType:(int)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;	// IMP=0x000000000020d300

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
