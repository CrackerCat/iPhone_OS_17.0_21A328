//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIKeyboardBasedNonEditableTextSelectionInteraction
{
    _Bool _isShiftKeyBeingHeld;	// 80 = 0x50
}

- (void)oneFingerForcePress:(id)arg1;	// IMP=0x0000000000e37f7a
- (void)oneFingerForcePan:(id)arg1;	// IMP=0x0000000000e371c2
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint)arg1 viaDrag:(_Bool)arg2;	// IMP=0x0000000000e3702f
- (void)_synchronousGranularityExpandingGestureWithTimeInterval:(double)arg1 timeGranularity:(double)arg2 isMidPan:(_Bool)arg3;	// IMP=0x0000000000e36d29

@end
