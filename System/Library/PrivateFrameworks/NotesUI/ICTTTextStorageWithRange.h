//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICNote, ICTTTextStorage, NSArray, NSManagedObjectContext, NSString;

__attribute__((visibility("hidden")))
@interface ICTTTextStorageWithRange : NSObject
{
    ICNote *_note;	// 8 = 0x8
    NSManagedObjectContext *_workerContext;	// 16 = 0x10
    ICNote *_workerContextNote;	// 24 = 0x18
    ICTTTextStorage *_textStorage;	// 32 = 0x20
    struct _NSRange _range;	// 40 = 0x28
}

+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x001000000008fa7f
- (void).cxx_destruct;	// IMP=0x0000000000090640
@property(retain, nonatomic) ICTTTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain, nonatomic) ICNote *workerContextNote; // @synthesize workerContextNote=_workerContextNote;
@property(retain, nonatomic) NSManagedObjectContext *workerContext; // @synthesize workerContext=_workerContext;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) ICNote *note; // @synthesize note=_note;
- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000009032f
- (unsigned long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;	// IMP=0x0000000000090316
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000008ff9c
- (void)prepareTextStorage;	// IMP=0x000000000008fcd0
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;	// IMP=0x000000000008fca9
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (id)initWithTextStorage:(id)arg1 range:(struct _NSRange)arg2 note:(id)arg3;	// IMP=0x000000000008f9d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
