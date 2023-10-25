//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRLCanvasKnobAccessibilityElement, CRLCanvasRepAccessibility, CRLSelectionPathAccessibility;

@protocol CRLCanvasInteractiveCanvasControllerAccessibilityExtras <NSObject>
- (void)crlaxCollaboratorDeletedMySelection;
- (_Bool)crlaxKnobElementIsAccessibilityElement:(CRLCanvasKnobAccessibilityElement *)arg1;

@optional
- (_Bool)crlaxSelectionPathInCurrentContext:(CRLSelectionPathAccessibility *)arg1;
- (void)crlaxWillSelectRep:(CRLCanvasRepAccessibility *)arg1;
@end
