//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

__attribute__((visibility("hidden")))
@interface NSDirInfo : NSMutableDictionary
{
    NSMutableDictionary *dict;	// 8 = 0x8
}

- (id)serializeToData;	// IMP=0x00000000007ab936
- (unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(_Bool)arg4 hardLinkPath:(id)arg5;	// IMP=0x00000000007ab92e
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000000007ab911
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000007ab8f4
- (id)keyEnumerator;	// IMP=0x00000000007ab8d7
- (id)objectForKey:(id)arg1;	// IMP=0x00000000007ab8ba
- (unsigned long long)count;	// IMP=0x00000000007ab89d
- (void)dealloc;	// IMP=0x00000000007ab838
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000007ab7f9
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x00000000007ab7ba
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000007ab77b
- (id)initWithDictionary:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x00000000007ab72f
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000007ab6dc
- (id)init;	// IMP=0x00000000007ab6a2

@end
