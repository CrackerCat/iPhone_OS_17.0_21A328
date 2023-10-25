//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSItemProvider, NSString;

__attribute__((visibility("hidden")))
@interface _EXItemProviderCopyingLoadOperator : NSObject
{
    NSItemProvider *_itemProvider;	// 8 = 0x8
    NSDictionary *_loadedItems;	// 16 = 0x10
    CDStruct_4c969caf _destinationProcessAuditToken;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000451ba
- (void).cxx_destruct;	// IMP=0x0000000000045b33
@property(nonatomic) CDStruct_4c969caf destinationProcessAuditToken; // @synthesize destinationProcessAuditToken=_destinationProcessAuditToken;
@property(retain, nonatomic) NSDictionary *loadedItems; // @synthesize loadedItems=_loadedItems;
@property(nonatomic) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
- (id)_sandboxedResourceForItemIfNeeded:(id)arg1 auditToken:(CDStruct_4c969caf)arg2 error:(id *)arg3;	// IMP=0x0000000000045a30
- (id)_loadItemsForTypeIdentifiers:(id)arg1 auditToken:(CDStruct_4c969caf)arg2 itemProvider:(id)arg3;	// IMP=0x00000000000454c4
- (void)loadPreviewImageWithCompletionHandler:(CDUnknownBlockType)arg1 expectedValueClass:(Class)arg2 options:(id)arg3;	// IMP=0x00000000000454b2
- (void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 expectedValueClass:(Class)arg3 options:(id)arg4;	// IMP=0x0000000000045371
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000045289
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000451c2
- (void)dealloc;	// IMP=0x0000000000045163
- (id)initWithItemProvider:(id)arg1 destinationProcessAuditToken:(CDStruct_4c969caf)arg2;	// IMP=0x00000000000450c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
