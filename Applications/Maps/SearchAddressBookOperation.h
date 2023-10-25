//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class AutocompleteContext, NSArray, NSString;
@protocol SearchAddressBookOperationDelegate;

@interface SearchAddressBookOperation : NSOperation
{
    NSString *_searchQuery;	// 8 = 0x8
    AutocompleteContext *_context;	// 16 = 0x10
    NSArray *_searchTerms;	// 24 = 0x18
    id <SearchAddressBookOperationDelegate> delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000a156fa
@property(nonatomic) __weak id <SearchAddressBookOperationDelegate> delegate; // @synthesize delegate;
- (void)main;	// IMP=0x0010000000a1490a
- (id)initWithSearchQuery:(id)arg1 context:(id)arg2;	// IMP=0x0010000000a147f8

@end
