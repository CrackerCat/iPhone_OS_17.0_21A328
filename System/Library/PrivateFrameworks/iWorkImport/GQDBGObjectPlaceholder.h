//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GQDDrawable, NSString;

@interface GQDBGObjectPlaceholder
{
    char *mContentType;	// 88 = 0x58
    GQDDrawable *mDrawable;	// 96 = 0x60
}

+ (const struct StateSpec *)stateForReading;	// IMP=0x0010000000004e48
- (id)drawable;	// IMP=0x0000000000004eb0
- (void)dealloc;	// IMP=0x0000000000004e55
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;	// IMP=0x0000000000004ec1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
