//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, SDXPCHelperConnection;
@protocol OS_os_transaction, OS_xpc_object, SDNetworkBrowserDelegate;

@interface SDNetworkBrowser : NSObject
{
    struct __SFNode *_rootNode;	// 8 = 0x8
    long long _mode;	// 16 = 0x10
    struct __CFDictionary *_nodeBrowsers;	// 24 = 0x18
    NSDictionary *_options;	// 32 = 0x20
    NSObject<OS_os_transaction> *_transaction;	// 40 = 0x28
    NSString *_bundleID;	// 48 = 0x30
    SDXPCHelperConnection *_helperConnection;	// 56 = 0x38
    NSString *_kind;	// 64 = 0x40
    NSString *_objectKey;	// 72 = 0x48
    NSObject<OS_xpc_object> *_boostMessage;	// 80 = 0x50
    id <SDNetworkBrowserDelegate> _delegate;	// 88 = 0x58
    NSObject<OS_xpc_object> *_connection;	// 96 = 0x60
    NSNumber *_isEntitled;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000003e283
@property(retain) NSNumber *isEntitled; // @synthesize isEntitled=_isEntitled;
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property __weak id <SDNetworkBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setBoostMessage:(id)arg1;	// IMP=0x001000000003e207
- (id)boostMessage;	// IMP=0x001000000003e1f3
@property(copy) NSString *objectKey; // @synthesize objectKey=_objectKey;
@property(readonly, copy) NSString *kind; // @synthesize kind=_kind;
@property(nonatomic) __weak SDXPCHelperConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)invalidate;	// IMP=0x001000000003dffb
- (int)closeNode:(struct __SFNode *)arg1;	// IMP=0x001000000003df82
- (int)removeNode:(struct __SFNode *)arg1;	// IMP=0x001000000003df2c
- (int)addNode:(struct __SFNode *)arg1;	// IMP=0x001000000003ded6
@property(copy) NSDictionary *options;
@property long long mode;
- (id)sidebarChildren;	// IMP=0x001000000003dda9
- (id)childrenForNode:(struct __SFNode *)arg1;	// IMP=0x001000000003dd44
- (struct __SFNode *)copyRootNode;	// IMP=0x001000000003dd2d
- (int)openNode:(struct __SFNode *)arg1 forProtocol:(id)arg2 flags:(unsigned long long)arg3;	// IMP=0x001000000003dbc6
- (void)nodeBrowser:(id)arg1 nodesChangedForParent:(struct __SFNode *)arg2 protocol:(id)arg3 error:(int)arg4;	// IMP=0x001000000003db56
- (void)dealloc;	// IMP=0x001000000003dafc
- (id)initWithKind:(id)arg1 rootNode:(struct __SFNode *)arg2;	// IMP=0x001000000003da1f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
