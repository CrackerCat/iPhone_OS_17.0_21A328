//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXWorksheet : NSObject
{
}

+ (void)readTables:(id)arg1;	// IMP=0x00800000001bfb2e
+ (void)readOtherSheetComponentsWithState:(id)arg1;	// IMP=0x00800000001c09e0
+ (_Bool)readDistinctSheetElementsFrom:(struct _xmlTextReader *)arg1 state:(id)arg2;	// IMP=0x00800000001c1816
+ (id)edSheetWithState:(id)arg1;	// IMP=0x00800000001bf67a
+ (void)readPivotTables:(id)arg1;	// IMP=0x00800000001c126e
+ (void)readCommentTextFrom:(id)arg1;	// IMP=0x00800000001c0a3d
+ (void)readSheetExtension:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000003babe6
+ (void)readSheetExtensions:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000003baae8
+ (void)readHyperlinksFrom:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x0080000000232a58
+ (void)readColumnInfosFrom:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000001f0a61
+ (void)readWorksheetFormatPropertiesFrom:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000001c2074
+ (void)readWorksheetViewsFrom:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000001c1de0
+ (void)readOleObjectsFrom:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x0080000000243273
+ (void)setupProcessors:(id)arg1;	// IMP=0x00800000001bf766

@end
