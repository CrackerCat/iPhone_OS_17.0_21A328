//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface WMListLevelTextMapper : NSObject
{
    NSMutableArray *_tokens;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000458d45
- (id)listLevelTextForOutline:(id)arg1;	// IMP=0x0000000000458a48
- (id)initWithText:(id)arg1 levelDescriptions:(id)arg2 language:(int)arg3;	// IMP=0x00000000004585b1
- (id)initWithText:(id)arg1;	// IMP=0x0000000000458597
- (id)token:(unsigned int)arg1;	// IMP=0x0000000000458d6b
- (unsigned long long)tokenCount;	// IMP=0x0000000000458d55

@end
