//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FCTagRanking;

@interface FRSubscribedTagRanker : NSObject
{
    id <FCTagRanking> _tagRanker;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000004140b
@property(readonly, nonatomic) id <FCTagRanking> tagRanker; // @synthesize tagRanker=_tagRanker;
- (void)prepareForUseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000041398
- (id)scoresForTagIDs:(id)arg1;	// IMP=0x001000000004131e
- (id)rankTagIDsDescending:(id)arg1;	// IMP=0x00100000000412a4
- (id)initWithTagRanker:(id)arg1;	// IMP=0x0010000000041218
- (id)init;	// IMP=0x00100000000410d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
