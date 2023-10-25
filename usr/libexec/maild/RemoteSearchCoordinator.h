//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MailAccount, NSOperationQueue, NSProgress, NSString, SourceSearchContext;

@interface RemoteSearchCoordinator : NSObject
{
    _Bool _foundResults;	// 8 = 0x8
    _Bool _cancelled;	// 9 = 0x9
    CDUnknownBlockType _nextSearchableMailbox;	// 16 = 0x10
    CDUnknownBlockType _foundMessages;	// 24 = 0x18
    CDUnknownBlockType _stopEarly;	// 32 = 0x20
    MailAccount *_account;	// 40 = 0x28
    SourceSearchContext *_searchContext;	// 48 = 0x30
    NSString *_logPrefix;	// 56 = 0x38
    NSProgress *_progress;	// 64 = 0x40
    NSOperationQueue *_workQueue;	// 72 = 0x48
}

+ (id)log;	// IMP=0x00200000000d335b
- (void).cxx_destruct;	// IMP=0x00200000000d3f3e
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property _Bool foundResults; // @synthesize foundResults=_foundResults;
@property(readonly, nonatomic) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, copy, nonatomic) NSString *logPrefix; // @synthesize logPrefix=_logPrefix;
@property(readonly, nonatomic) SourceSearchContext *searchContext; // @synthesize searchContext=_searchContext;
@property(readonly, nonatomic) MailAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) CDUnknownBlockType stopEarly; // @synthesize stopEarly=_stopEarly;
@property(copy, nonatomic) CDUnknownBlockType foundMessages; // @synthesize foundMessages=_foundMessages;
@property(copy, nonatomic) CDUnknownBlockType nextSearchableMailbox; // @synthesize nextSearchableMailbox=_nextSearchableMailbox;
- (void)_addSearchOperations:(unsigned long long)arg1;	// IMP=0x00100000000d3b47
- (void)remoteSearchOperation:(id)arg1 didFindResults:(_Bool)arg2;	// IMP=0x00100000000d3905
- (void)cancel;	// IMP=0x00100000000d389f
- (void)performSearch;	// IMP=0x00100000000d363b
- (id)initWithAccount:(id)arg1 searchContext:(id)arg2 logIdentifier:(id)arg3 progress:(id)arg4;	// IMP=0x00100000000d3438

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
