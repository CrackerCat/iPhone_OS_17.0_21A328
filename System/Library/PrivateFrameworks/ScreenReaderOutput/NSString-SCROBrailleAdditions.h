//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (SCROBrailleAdditions)
- (struct _NSRange)rangeOfWordAfterWordAtIndex:(long long)arg1;	// IMP=0x0090000000007729
- (struct _NSRange)rangeOfWordBeforeWordAtIndex:(long long)arg1;	// IMP=0x0090000000007642
- (struct _NSRange)rangeOfWordContainingIndex:(long long)arg1;	// IMP=0x00900000000073ea
- (struct _NSRange)_rangeIsolatingIllegalCharacters:(struct _NSRange)arg1 forwards:(_Bool)arg2;	// IMP=0x0090000000007342
- (id)_legalWhiteSpaceSet;	// IMP=0x009000000000721b
- (id)_illegalCharacterSet;	// IMP=0x00900000000071af
@end
