//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CRLChangeEntry : NSObject
{
    id _changeSource;	// 8 = 0x8
    NSArray *_changes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000004d3170
@property(readonly, nonatomic) NSArray *changes; // @synthesize changes=_changes;
@property(readonly, nonatomic) id changeSource; // @synthesize changeSource=_changeSource;
- (void)i_addChange:(id)arg1;	// IMP=0x00100000004d3126
- (id);	// IMP=0x00100000004d307b

@end
