//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLayoutRect, NSString;

@interface NSVisualFormatLayoutRule : NSObject
{
    NSString *_visualFormatString;	// 8 = 0x8
    unsigned long long _formatOptions;	// 16 = 0x10
    NSDictionary *_metricMapping;	// 24 = 0x18
    NSDictionary *_rectMapping;	// 32 = 0x20
    NSLayoutRect *_containerRect;	// 40 = 0x28
}

+ (id)ruleWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;	// IMP=0x00100000000051e9
+ (id)ruleWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 rects:(id)arg4 containerRect:(id)arg5;	// IMP=0x0010000000005192
@property(readonly, copy) NSString *ruleDescription;
@property(readonly, copy) NSString *description;
- (id)makeChildRules;	// IMP=0x00000000000052cc
@property(readonly, copy) NSString *identifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000050b0
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005020
- (void)dealloc;	// IMP=0x0000000000004fc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
