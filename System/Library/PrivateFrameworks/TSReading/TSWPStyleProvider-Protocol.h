//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSObject-Protocol.h>

@class TSWPCharacterStyle, TSWPListStyle, TSWPParagraphStyle;
@protocol TSWPCoreTextPropertiesFilterDelegate;

@protocol TSWPStyleProvider <NSObject>
- (TSWPParagraphStyle *)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

@optional
@property(readonly, nonatomic) _Bool supportsBoldItalicUnderlineShortcuts;
- (id <TSWPCoreTextPropertiesFilterDelegate>)coreTextPropertiesFilterDelegateAtParIndex:(unsigned long long)arg1;
- (unsigned long long)paragraphLevelAtParIndex:(unsigned long long)arg1;
- (TSWPParagraphStyle *)listLabelParagraphStyleOverrideAtParIndex:(unsigned long long)arg1;
- (unsigned long long)listNumberAtParIndex:(unsigned long long)arg1 numberingData:(CDStruct_b9fbe577 *)arg2;
- (TSWPListStyle *)listStyleAtParIndex:(unsigned long long)arg1;
- (TSWPCharacterStyle *)modifiedCharacterStyle:(TSWPCharacterStyle *)arg1 atCharIndex:(unsigned long long)arg2;
@end
