//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MRDBrowsableContentAPICoordinator : NSObject
{
    NSMutableDictionary *_persistenceDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000019c9c
- (id)applicationsSupportingAPIs:(unsigned int)arg1;	// IMP=0x0010000000019baf
- (void)setSupportedAPIs:(unsigned int)arg1 forApplication:(id)arg2;	// IMP=0x0010000000019ae0
- (unsigned int)supportedAPIsForApplication:(id)arg1;	// IMP=0x0010000000019a8f
- (id)init;	// IMP=0x0010000000019958

@end
