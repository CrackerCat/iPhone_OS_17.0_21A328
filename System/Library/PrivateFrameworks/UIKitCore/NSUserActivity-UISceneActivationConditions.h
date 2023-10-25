//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserActivity.h>

@class BSProcessHandle, NSArray, NSString;

@interface NSUserActivity (UISceneActivationConditions)
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x0010000000ef1ff8
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000ef1d9b
+ (id)readableTypeIdentifiersForItemProvider;	// IMP=0x0010000000ef1d34
@property(copy, nonatomic) NSString *targetContentIdentifier;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000ef205f
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000ef1f3a
- (void)_setOriginatingProcess:(id)arg1;	// IMP=0x00100000015a5998
- (void)_setSourceApplication:(id)arg1;	// IMP=0x00100000015a5982
@property(readonly, nonatomic) BSProcessHandle *_originatingProcess;
@property(readonly, nonatomic) NSString *_sourceApplication;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@end
