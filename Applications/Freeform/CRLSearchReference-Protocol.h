//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class CRLCommandSelectionBehavior, CRLSelectionPath, NSArray, NSString, _TtC8Freeform10CRLCommand;
@protocol CRLCanvasElementInfo, CRLModel, CRLSearchReference;

@protocol CRLSearchReference <NSObject, NSCopying>
@property(nonatomic) _Bool autohideHighlight;
@property(nonatomic) _Bool pulseHighlight;
@property(retain, nonatomic) NSArray *findHighlights;
@property(nonatomic) long long rootIndex;
@property(nonatomic) struct CGPoint connectionLineUnscaledPoint;
@property(nonatomic) struct CGRect searchReferenceLayoutFrame;
@property(nonatomic) struct CGPoint searchReferencePoint;
@property(readonly, nonatomic, getter=isReplaceable) _Bool replaceable;
@property(readonly, nonatomic, getter=isSelectable) _Bool selectable;
- (long long)compare:(id <CRLSearchReference>)arg1;
- (id <CRLModel>)model;
- (id <CRLCanvasElementInfo>)infoForSelectionPath;
- (CRLSelectionPath *)selectionPath;
- (id <CRLSearchReference>)searchReferenceEnd;
- (id <CRLSearchReference>)searchReferenceStart;
- (id <CRLSearchReference>)searchReferenceForReplacingWithString:(NSString *)arg1 options:(unsigned long long)arg2;
- (_TtC8Freeform10CRLCommand *)commandForReplacingWithString:(NSString *)arg1 options:(unsigned long long)arg2;

@optional
- (CRLCommandSelectionBehavior *)commandSelectionBehaviorForCommand:(_TtC8Freeform10CRLCommand *)arg1;
@end
