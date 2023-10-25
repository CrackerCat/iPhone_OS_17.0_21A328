//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableDictionary;

@interface PUIDPointerAccessoryContainerView : UIView
{
    NSArray *_accessories;	// 8 = 0x8
    NSMutableDictionary *_shapeViewsByPosition;	// 16 = 0x10
    NSMutableDictionary *_shapeViewsByAccessory;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001ec11
- (void)_removeRecordOfAccessory:(id)arg1;	// IMP=0x001000000001eb7a
- (void)_recordAccessory:(id)arg1 withShapeView:(id)arg2;	// IMP=0x001000000001eacc
- (id)_visibleShapeViewAtPosition:(id)arg1;	// IMP=0x001000000001eaaf
- (id)_visibleShapeViewForAccessory:(id)arg1;	// IMP=0x001000000001ea92
- (void)setAccessories:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000001d76a

@end
