//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFVolumeButtonManager : NSObject
{
    CDUnknownBlockType _pressHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003f3d0
@property(copy, nonatomic) CDUnknownBlockType pressHandler; // @synthesize pressHandler=_pressHandler;
- (void)volumeButtonPressed;	// IMP=0x000000000003f384
- (void)dealloc;	// IMP=0x000000000003f307
- (id)initWithPressHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f10f

@end
