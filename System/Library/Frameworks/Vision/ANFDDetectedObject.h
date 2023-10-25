//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ANFDDetectedObject
{
    float _rotationAngle;	// 8 = 0x8
    float _yawAngle;	// 12 = 0xc
    float _pitchAngle;	// 16 = 0x10
    int _labelKey;	// 20 = 0x14
    int _groupId;	// 24 = 0x18
}

@property int groupId; // @synthesize groupId=_groupId;
@property int labelKey; // @synthesize labelKey=_labelKey;
@property float pitchAngle; // @synthesize pitchAngle=_pitchAngle;
@property float yawAngle; // @synthesize yawAngle=_yawAngle;
@property float rotationAngle; // @synthesize rotationAngle=_rotationAngle;
- (id)description;	// IMP=0x0000000000123d20
- (id)initWithObjectType:(long long)arg1 boundingBox:(struct CGRect)arg2 confidence:(float)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 pitchAngle:(float)arg6 labelKey:(int)arg7 groupId:(int)arg8;	// IMP=0x0000000000123c58

@end
