//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VTKFileStoreManagerResult : NSObject
{
    NSURL *_rootFolderItemsURL;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000007875
@property(readonly, nonatomic) NSURL *rootFolderItemsURL; // @synthesize rootFolderItemsURL=_rootFolderItemsURL;
@property(readonly, nonatomic) NSString *saveDescription;
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000007773

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
