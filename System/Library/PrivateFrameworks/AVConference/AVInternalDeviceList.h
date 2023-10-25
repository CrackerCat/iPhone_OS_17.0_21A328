//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVInternalDeviceList : NSObject
{
    CDUnknownBlockType changeListener;	// 8 = 0x8
    NSMutableArray *deviceList;	// 16 = 0x10
    struct _opaque_pthread_mutex_t listLock;	// 24 = 0x18
}

+ (id)defaultDeviceOfType:(unsigned int)arg1;	// IMP=0x00600000002acc99
+ (id)newDeviceList;	// IMP=0x00600000002acc91
@property(copy, nonatomic) CDUnknownBlockType changeListener;
- (id)deviceList;	// IMP=0x00000000002ad2b1
- (void)notifyDeviceListChanged;	// IMP=0x00000000002acf7c
- (void)dealloc;	// IMP=0x00000000002acf06
- (void)cleanup;	// IMP=0x00000000002acf00
- (id)init;	// IMP=0x00000000002ace73
- (unsigned int)dataSourceControlID;	// IMP=0x00000000002acca5

@end
