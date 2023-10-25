//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol UITextSearchAggregator;

__attribute__((visibility("hidden")))
@interface PDFTextSearchAggregator : NSObject
{
    _Bool _isActive;	// 8 = 0x8
    NSString *_searchString;	// 16 = 0x10
    id <UITextSearchAggregator> _aggregator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000021de6
@property(readonly, nonatomic) id <UITextSearchAggregator> aggregator; // @synthesize aggregator=_aggregator;
@property(readonly, copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void)foundResults:(id)arg1 forDocument:(id)arg2;	// IMP=0x0000000000021dbc
- (void)foundResults:(id)arg1 forPage:(id)arg2;	// IMP=0x0000000000021c3e
- (_Bool)cancelFind;	// IMP=0x0000000000021c31
- (void)invalidate;	// IMP=0x0000000000021c27
- (id)initWithSearchString:(id)arg1 aggregator:(id)arg2;	// IMP=0x0000000000021b89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
