//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface WTFContextualizedNSString : NSString
{
    struct StringView context;	// 8 = 0x8
    struct StringView contents;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0000000000013150
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000012d60
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000012d00
- (unsigned long long)length;	// IMP=0x0000000000012ce0
- (id)initWithContext:(struct StringView)arg1 contents:(struct StringView)arg2;	// IMP=0x0000000000012c60

@end
