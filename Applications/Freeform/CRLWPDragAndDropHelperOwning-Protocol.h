//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRLWPSelection, _TtC8Freeform11CRLWPEditor, _TtC8Freeform12CRLWPStorage;

@protocol CRLWPDragAndDropHelperOwning <NSObject>
@property(readonly, nonatomic) _TtC8Freeform11CRLWPEditor *textEditor;
@property(readonly, nonatomic) _Bool allowGenericDrags;
@property(readonly, nonatomic) _TtC8Freeform12CRLWPStorage *storageForDragDropOperation;
@property(readonly, nonatomic) _TtC8Freeform12CRLWPStorage *storage;
- (_Bool)isDragPoint:(struct CGPoint)arg1 inSelection:(CRLWPSelection *)arg2 includeEndpoints:(_Bool)arg3;
- (_TtC8Freeform11CRLWPEditor *)textEditorForDropIntoStorage:(_TtC8Freeform12CRLWPStorage *)arg1;
- (CRLWPSelection *)selectionForDragAndDropNaturalPoint:(struct CGPoint)arg1;
@end
