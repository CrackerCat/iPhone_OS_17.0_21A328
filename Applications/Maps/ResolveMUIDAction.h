//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ResolveMUIDAction
{
    NSString *_businessID;	// 8 = 0x8
    NSString *_contentProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000cd29ee
@property(copy, nonatomic) NSString *contentProvider; // @synthesize contentProvider=_contentProvider;
@property(copy, nonatomic) NSString *businessID; // @synthesize businessID=_businessID;
- (int)analyticsLaunchActionType;	// IMP=0x0010000000cd299f
- (_Bool)isCompatibleWithRestorationTask;	// IMP=0x0010000000cd2997
- (void)resolveMapItemWithTraits:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000cd264a
- (id)initWithBusinessID:(id)arg1 contentProvider:(id)arg2;	// IMP=0x0010000000cd25a8

@end
