//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SUUIAddToWishlistOperation : NSOperation
{
    long long _itemIdentifier;	// 8 = 0x8
    long long _reason;	// 16 = 0x10
    NSMutableDictionary *_requestParameters;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f5012
- (void)main;	// IMP=0x00000000000f48d7
- (id)initWithItem:(id)arg1 reason:(long long)arg2;	// IMP=0x00000000000f46a3

@end
