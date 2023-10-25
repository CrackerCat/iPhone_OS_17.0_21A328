//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Pasteboard/PBItem.h>

@interface PBItem (Server)
- (void)saveRepresentationsToStorageBaseURL:(id)arg1 fileProtectionType:(id)arg2 allowedToCopyOnPaste:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000001a071
- (void)_saveRepresentationsToBaseURL:(id)arg1 types:(id)arg2 fileProtectionType:(id)arg3 allowedToCopyOnPaste:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000018db8
- (void)setStorageBaseURL:(id)arg1;	// IMP=0x0010000000017b32
- (id)persistentFileNameForType:(id)arg1;	// IMP=0x0010000000017ac1
- (id)persistentBookmarkFileNameForType:(id)arg1;	// IMP=0x001000000001796f
@end
