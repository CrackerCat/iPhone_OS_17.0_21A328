//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDWPLayoutFrame, NSString;

@interface GQDBGBodyPlaceholder
{
    GQDWPLayoutFrame *mFrame;	// 88 = 0x58
}

+ (const struct StateSpec *)stateForReading;	// IMP=0x0010000000004900
- (_Bool)isBlank;	// IMP=0x0000000000004960
- (id)layoutFrame;	// IMP=0x000000000000494f
- (void)dealloc;	// IMP=0x000000000000490d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
