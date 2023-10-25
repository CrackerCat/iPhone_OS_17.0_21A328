//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DDRemoteActionViewServiceContext : NSExtensionContext
{
}

+ (id)_allowedItemPayloadClasses;	// IMP=0x0010000000006978
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x00100000000066d4
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0010000000006668
- (void)enableUserInteraction:(_Bool)arg1;	// IMP=0x00000000000068b8
- (void)prepareViewControllerWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006740

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
