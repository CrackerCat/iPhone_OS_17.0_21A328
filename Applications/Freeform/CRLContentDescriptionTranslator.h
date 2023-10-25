//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary;

@interface CRLContentDescriptionTranslator : NSObject
{
    NSDictionary *_appDescriptionData;	// 8 = 0x8
}

+ (_Bool)p_hasTextStoragesInBoardItemDescriptions:(id)arg1 topLevelBoardItems:(id)arg2;	// IMP=0x00100000001c753d
+ (id)p_boardItemsDescriptionsFromContentDescription:(id)arg1;	// IMP=0x00100000001c7521
+ (_Bool)hasTextStoragesInContentDescription:(id)arg1;	// IMP=0x00100000001c73f4
+ (_Bool)hasNativeTextInContentDescription:(id)arg1;	// IMP=0x00100000001c7342
+ (unsigned int)elementKindFromBoardItemDescription:(id)arg1;	// IMP=0x00100000001c729f
+ (unsigned long long)numberOfTopLevelBoardItemsInContentDescription:(id)arg1;	// IMP=0x00100000001c6fda
+ (unsigned long long)numberOfBoardItemsInContentDescription:(id)arg1;	// IMP=0x00100000001c6f96
+ (_Bool)hasAnyFreehandDrawingBoardItemsInContentDescription:(id)arg1;	// IMP=0x00100000001c6d03
+ (_Bool)hasOnlyFreehandDrawingBoardItemsInContentDescription:(id)arg1;	// IMP=0x00100000001c6b18
+ (_Bool)hasOnlyNativeTextBoxBoardItemsInContentDescription:(id)arg1;	// IMP=0x00100000001c6903
+ (_Bool)hasSingleNativeMovieBoardItemInContentDescription:(id)arg1;	// IMP=0x00100000001c67e5
+ (_Bool)hasSingleNativeImageBoardItemInContentDescription:(id)arg1;	// IMP=0x00100000001c66c7
+ (_Bool)hasNativeBoardItemsContainingTextInContentDescription:(id)arg1;	// IMP=0x00100000001c6669
+ (_Bool)p_hasNativeBoardItemsContainingTextInBoardItemDescription:(id)arg1;	// IMP=0x00100000001c63fc
+ (_Bool)hasNativeBoardItemsInContentDescription:(id)arg1;	// IMP=0x00100000001c63c9
+ (id)descriptionsForBoardItemsInContentDescription:(id)arg1;	// IMP=0x00100000001c63ad
+ (_Bool)hasNativeTypesInContentDescription:(id)arg1;	// IMP=0x00100000001c6064
+ (unsigned long long)countOfObjectsInContentDescription:(id)arg1;	// IMP=0x00100000001c5fed
+ (id)stringToPrefixForStyleCopyingTypeFromDescription:(id)arg1;	// IMP=0x00100000009d2260
- (void).cxx_destruct;	// IMP=0x00200000001c781c
@property(readonly, nonatomic) NSDictionary *appDescriptionData; // @synthesize appDescriptionData=_appDescriptionData;
- (id)contentDescriptionForTextStorage:(id)arg1 range:(struct _NSRange)arg2 boardItems:(id)arg3;	// IMP=0x00100000001c71a8
- (id)descriptionForTextStorage:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00100000001c7028
- (id)descriptionsForBoardItems:(id)arg1;	// IMP=0x00100000001c61cd
- (id)contentDescriptionForBoardItems:(id)arg1;	// IMP=0x00100000001c60e0
- (id)descriptionForBoardItem:(id)arg1;	// IMP=0x00100000001c5dd3
- (MISSING_TYPE *)init;	// IMP=0x00100000001c5d87

@end
